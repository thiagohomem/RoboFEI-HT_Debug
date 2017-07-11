import cv2
import numpy as np
import os

#--------------------------------------------------------------------------------------------------
#   Class used for the vision system.
#--------------------------------------------------------------------------------------------------
class PointCalibration():
    #----------------------------------------------------------------------------------------------
    #   Constructor.
    #----------------------------------------------------------------------------------------------
    def __init__(self):
        self.cap = None
        self.img = None
        self.vector = None
        self.mouseX = None
        self.mouseY = None
        self.clicks = 0

    #----------------------------------------------------------------------------------------------
    #   Initializes the capture from camera.
    #----------------------------------------------------------------------------------------------
    def InitCap(self):
        self.cap = cv2.VideoCapture(0)
        self.cap.set(3, 1280)
        self.cap.set(4, 720)
        os.system("v4l2-ctl -d /dev/video0 -c focus_auto=0 && v4l2-ctl -d /dev/video0 -c focus_absolute=0")

    #----------------------------------------------------------------------------------------------
    #   Captures a image with the camera.
    #----------------------------------------------------------------------------------------------
    def Capture(self):
        try:
            _, self.img = self.cap.read()
        except:
            print "Error on frame capture"
            self.img = np.zeros((512,512,3), np.uint8)

    #----------------------------------------------------------------------------------------------
    #   Generates the positions vector, to be used for localization.
    #----------------------------------------------------------------------------------------------
    def PointGenerator(self):
        self.img = None
        self.vector = np.zeros([32,2])
        cv2.namedWindow('ROBOT VISION')
        cv2.setMouseCallback('ROBOT VISION', self.getpoint)
        
        print "\nPress s to skip.\n"

        while self.clicks < 32:
            try:
                self.Capture()
                for p in self.vector:
                    if np.sum(p) != 0:
                        cv2.circle(self.img, (int(p[0]*self.img.shape[1]), int(p[1]*self.img.shape[0])), 2, (255,255,0), -1)
                cv2.imshow('ROBOT VISION', self.img)
            except:
                print "-= ERROR ON METHOD PointGenerator =-"

            k = cv2.waitKey(20) & 0xFF
            if k == 27:
                break

            if self.clicks > 0:
                self.vector[self.clicks-1] = (float(self.mouseX)/self.img.shape[1], float(self.mouseY)/self.img.shape[0])

        if self.clicks == 32:
            np.save('vector', self.vector)
            print "Saved archive with points."
        else:
            print "Points not saved."
            exit()

    #----------------------------------------------------------------------------------------------
    #   Main method.
    #----------------------------------------------------------------------------------------------
    def Main(self):
        self.InitCap()

        try:
            self.vector = np.load('vector.npy')
        except:
            self.PointGenerator()

        print "\nIf changes are needed press n,\nelse press ESC or q.\n"

        while True:
            try:
                self.Capture()
                for p in self.vector:
                    cv2.circle(self.img, (int(p[0]*self.img.shape[1]), int(p[1]*self.img.shape[0])), 2, (255,255,0), -1)
                cv2.imshow('ROBOT VISION', self.img)
            except:
                print "-= ERROR ON METHOD Main =-"

            k = cv2.waitKey(20) & 0xFF
            if k == 27 or k == ord('q'):
                break
            elif k == ord('n'):
                self.clicks = 0
                self.PointGenerator()
                print "\nIf changes are needed press n,\nelse press ESC or q.\n"
        
        self.cap.release()
        cv2.destroyAllWindows()

    #--------------------------------------------------------------------------------------------------
    #   Event to get mouse click
    #--------------------------------------------------------------------------------------------------
    def getpoint(self, event, x, y, flags, param):
        if event == cv2.EVENT_LBUTTONDOWN and self.clicks < 32:
            self.mouseX = x
            self.mouseY = y
            self.clicks += 1
            print self.clicks, self.mouseX, self.mouseY

P = PointCalibration()
P.Main()
