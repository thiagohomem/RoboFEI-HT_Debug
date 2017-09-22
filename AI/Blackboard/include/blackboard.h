/*--------------------------------------------------------------------

******************************************************************************
* @file blackboard.h
* @author Isaac Jesus da Silva - ROBOFEI-HT - FEI
* @version V0.0.0
* @created 07/04/2014
* @Modified 15/05/2014
* @e-mail isaac25silva@yahoo.com.br
* @brief Main header black board
****************************************************************************

Arquivo de cabeçalho contendo as funções e definições do black board

/--------------------------------------------------------------------*/

//---- Definições da memória compartilhada------------------------------
//---- TIPO INT------------------------------
#define PLANNING_COMMAND 0
#define PLANNING_PARAMETER_VEL 1
#define PLANNING_PARAMETER_ANGLE 2
#define IMU_STATE 3
#define IMU_RESET 4
#define CONTROL_ACTION 13
#define CONTROL_HEIGHT_A 14
#define CONTROL_HEIGHT_B 15
#define CONTROL_HEIGHT_C 16
#define DECISION_ACTION_A 17
#define DECISION_ACTION_B 18
#define DECISION_STATE 19
#define DECISION_POSITION_A 20
#define DECISION_POSITION_B 21
#define DECISION_POSITION_C 22
#define DECISION_BALL_POS 23
#define DECISION_OPP1_POS 24
#define DECISION_OPP2_POS 25
#define DECISION_OPP3_POS 26
#define COM_ACTION_ROBOT1 27
#define COM_ACTION_ROBOT2 28
#define COM_ACTION_ROBOT3 29
#define COM_STATE_ROBOT1 30
#define COM_STATE_ROBOT2 31
#define COM_STATE_ROBOT3 32
#define COM_POS_ROBOT1 33
#define COM_POS_ROBOT2 34
#define COM_POS_ROBOT3 35
#define COM_POS_BALL_ROBOT1 36
#define COM_POS_BALL_ROBOT2 37
#define COM_POS_BALL_ROBOT3 38
#define COM_POS_OPP_A_ROBOT1 39
#define COM_POS_OPP_A_ROBOT2 40
#define COM_POS_OPP_A_ROBOT3 41
#define COM_POS_OPP_A_ROBOT4 42
#define COM_POS_OPP_B_ROBOT1 43
#define COM_POS_OPP_B_ROBOT2 44
#define COM_POS_OPP_B_ROBOT3 45
#define COM_POS_OPP_B_ROBOT4 46
#define COM_POS_OPP_C_ROBOT1 47
#define COM_POS_OPP_C_ROBOT2 48
#define COM_POS_OPP_C_ROBOT3 49
#define COM_POS_OPP_C_ROBOT4 50
#define COM_REFEREE 51
#define LOCALIZATION_X 52
#define LOCALIZATION_Y 53
#define LOCALIZATION_THETA 54
#define VISION_LOST 57
#define DECISION_SEARCH_ON 58
#define DECISION_ACTION_VISION 59
#define VISION_MOTOR1_GOAL 60
#define VISION_MOTOR2_GOAL 61
#define VISION_SEARCH_GOAL 62
#define VISION_LOST_GOAL 63
#define VISION_STATE 64
#define ROBOT_NUMBER 65
#define VISION_pos_servo1 66
#define VISION_pos_servo2 67
#define COM_POS_ORIENT_QUALIT_ROBOT_A 68
#define COM_POS_DIST_QUALIT_ROBOT_A 69
#define COM_POS_ORIENT_QUALIT_ROBOT_B 70
#define COM_POS_DIST_QUALIT_ROBOT_B 71
#define COM_POS_ORIENT_QUALIT_ROBOT_C 72
#define COM_POS_DIST_QUALIT_ROBOT_C 73
#define VISION_DELTA_ORIENT 74
#define LOCALIZATION_FIND_ROBOT 75
#define RECEIVED_ROBOT_SENDING 76
#define RECEIVED_QUAL_ORIENT 77
#define RECEIVED_QUAL_DIST 78
#define RECEIVED_ROBOT_SEEN 79
#define CONTROL_MESSAGES 80
#define ASKED_QUALIT_DIRECT 81
#define ASKED_QUALIT_DISTANCE 82
#define ASKED_RELATED_ROBOT 83
#define CONTROL_MOVING 84
#define ROBOT_VIEW_ROTATE 100
#define CONTROL_WORKING 101
#define VISION_WORKING 102
#define LOCALIZATION_WORKING 103
#define DECISION_WORKING 104
#define IMU_WORKING 105
#define VOLTAGE 106
#define DECISION_LOCALIZATION 107
#define iVISION_FIELD 108

//---- TIPO FLOAT------------------------------
#define IMU_GYRO_X 0
#define IMU_GYRO_Y 1
#define IMU_GYRO_Z 2
#define IMU_ACCEL_X 3
#define IMU_ACCEL_Y 4
#define IMU_ACCEL_Z 5
#define IMU_COMPASS_X 6
#define IMU_COMPASS_Y 7
#define IMU_COMPASS_Z 8
#define IMU_EULER_X 9
#define IMU_EULER_Y 10
#define IMU_EULER_Z 11
#define IMU_QUAT_X 12
#define IMU_QUAT_Y 13
#define IMU_QUAT_Z 14
#define VISION_AREA_SEGMENT 15
#define VISION_BALL_X 16
#define VISION_BALL_Y 17
#define VISION_BALL_TAG 18
#define VISION_LAND_X 19
#define VISION_LAND_Y 20
#define VISION_LAND_TAG 21
#define VISION_RB01_TAG 22
#define VISION_RB01_X 23
#define VISION_RB01_Y 24
#define VISION_RB01_TIME 25
#define VISION_RB02_TAG 26
#define VISION_RB02_X 27
#define VISION_RB02_Y 28
#define VISION_RB02_TIME 29
#define VISION_RB03_TAG 30
#define VISION_RB03_X 31
#define VISION_RB03_Y 32
#define VISION_RB03_TIME 33
#define VISION_RB04_TAG 34
#define VISION_RB04_X 35
#define VISION_RB04_Y 36
#define VISION_RB04_TIME 37
#define VISION_RB05_TAG 38
#define VISION_RB05_X 39
#define VISION_RB05_Y 40
#define VISION_RB05_TIME 41
#define VISION_RB06_TAG 42
#define VISION_RB06_X 43
#define VISION_RB06_Y 44
#define VISION_RB06_TIME 45
#define VISION_RB07_TAG 46
#define VISION_RB07_X 47
#define VISION_RB07_Y 48
#define VISION_RB07_TIME 49
#define VISION_RB08_TAG 50
#define VISION_RB08_X 51
#define VISION_RB08_Y 52
#define VISION_RB08_TIME 53
#define VISION_RB09_TAG 54
#define VISION_RB09_X 55
#define VISION_RB09_Y 56
#define VISION_RB09_TIME 57
#define VISION_RB10_TAG 58
#define VISION_RB10_X 59
#define VISION_RB10_Y 60
#define VISION_RB10_TIME 61
#define VISION_RB11_TAG 62
#define VISION_RB11_X 63
#define VISION_RB11_Y 64
#define VISION_RB11_TIME 65
#define VISION_RB12_TAG 66
#define VISION_RB12_X 67
#define VISION_RB12_Y 68
#define VISION_RB12_TIME 69
#define VISION_RB13_TAG 70
#define VISION_RB13_X 71
#define VISION_RB13_Y 72
#define VISION_RB13_TIME 73
#define VISION_RB14_TAG 74
#define VISION_RB14_X 75
#define VISION_RB14_Y 76
#define VISION_RB14_TIME 77
#define VISION_RB15_TAG 78
#define VISION_RB15_X 79
#define VISION_RB15_Y 80
#define VISION_RB15_TIME 81
#define VISION_RB16_TAG 82
#define VISION_RB16_X 83
#define VISION_RB16_Y 84
#define VISION_RB16_TIME 85
#define VISION_RB17_TAG 86
#define VISION_RB17_X 87
#define VISION_RB17_Y 88
#define VISION_RB17_TIME 89
#define VISION_RB18_TAG 90
#define VISION_RB18_X 91
#define VISION_RB18_Y 92
#define VISION_RB18_TIME 93
#define VISION_RB19_TAG 94
#define VISION_RB19_X 95
#define VISION_RB19_Y 96
#define VISION_RB19_TIME 97
#define VISION_RB20_TAG 98
#define VISION_RB20_X 99
#define VISION_RB20_Y 100
#define VISION_RB20_TIME 101
#define VISION_RB21_TAG 102
#define VISION_RB21_X 103
#define VISION_RB21_Y 104
#define VISION_RB21_TIME 105
#define VISION_RB22_TAG 106
#define VISION_RB22_X 107
#define VISION_RB22_Y 108
#define VISION_RB22_TIME 109
#define VISUAL_MEMORY_AL_01_X 110
#define VISUAL_MEMORY_AL_01_Y 111
#define VISUAL_MEMORY_AL_01_MAX_VEL 112
#define VISUAL_MEMORY_AL_02_X 113
#define VISUAL_MEMORY_AL_02_Y 114
#define VISUAL_MEMORY_AL_02_MAX_VEL 115
#define VISUAL_MEMORY_AL_03_X 116
#define VISUAL_MEMORY_AL_03_Y 117
#define VISUAL_MEMORY_AL_03_MAX_VEL 118
#define VISUAL_MEMORY_AL_04_X 119
#define VISUAL_MEMORY_AL_04_Y 120
#define VISUAL_MEMORY_AL_04_MAX_VEL 121
#define VISUAL_MEMORY_AL_05_X 122
#define VISUAL_MEMORY_AL_05_Y 123
#define VISUAL_MEMORY_AL_05_MAX_VEL 124
#define VISUAL_MEMORY_AL_06_X 125
#define VISUAL_MEMORY_AL_06_Y 126
#define VISUAL_MEMORY_AL_06_MAX_VEL 127
#define VISUAL_MEMORY_AL_07_X 128
#define VISUAL_MEMORY_AL_07_Y 129
#define VISUAL_MEMORY_AL_07_MAX_VEL 130
#define VISUAL_MEMORY_AL_08_X 131
#define VISUAL_MEMORY_AL_08_Y 132
#define VISUAL_MEMORY_AL_08_MAX_VEL 133
#define VISUAL_MEMORY_AL_09_X 134
#define VISUAL_MEMORY_AL_09_Y 135
#define VISUAL_MEMORY_AL_09_MAX_VEL 136
#define VISUAL_MEMORY_AL_10_X 137
#define VISUAL_MEMORY_AL_10_Y 138
#define VISUAL_MEMORY_AL_10_MAX_VEL 139
#define VISUAL_MEMORY_OP_01_X 140
#define VISUAL_MEMORY_OP_01_Y 141
#define VISUAL_MEMORY_OP_01_MAX_VEL 142
#define VISUAL_MEMORY_OP_02_X 143
#define VISUAL_MEMORY_OP_02_Y 144
#define VISUAL_MEMORY_OP_02_MAX_VEL 145
#define VISUAL_MEMORY_OP_03_X 146
#define VISUAL_MEMORY_OP_03_Y 147
#define VISUAL_MEMORY_OP_03_MAX_VEL 148
#define VISUAL_MEMORY_OP_04_X 149
#define VISUAL_MEMORY_OP_04_Y 150
#define VISUAL_MEMORY_OP_04_MAX_VEL 151
#define VISUAL_MEMORY_OP_05_X 152
#define VISUAL_MEMORY_OP_05_Y 153
#define VISUAL_MEMORY_OP_05_MAX_VEL 154
#define VISUAL_MEMORY_OP_06_X 155
#define VISUAL_MEMORY_OP_06_Y 156
#define VISUAL_MEMORY_OP_06_MAX_VEL 157
#define VISUAL_MEMORY_OP_07_X 158
#define VISUAL_MEMORY_OP_07_Y 159
#define VISUAL_MEMORY_OP_07_MAX_VEL 160
#define VISUAL_MEMORY_OP_08_X 161
#define VISUAL_MEMORY_OP_08_Y 162
#define VISUAL_MEMORY_OP_08_MAX_VEL 163
#define VISUAL_MEMORY_OP_09_X 164
#define VISUAL_MEMORY_OP_09_Y 165
#define VISUAL_MEMORY_OP_09_MAX_VEL 166
#define VISUAL_MEMORY_OP_10_X 167
#define VISUAL_MEMORY_OP_10_Y 168
#define VISUAL_MEMORY_OP_10_MAX_VEL 169
#define VISUAL_MEMORY_OP_11_X 170
#define VISUAL_MEMORY_OP_11_Y 171
#define VISUAL_MEMORY_OP_11_MAX_VEL 172
#define VISION_TILT_DEG 173
#define VISION_PAN_DEG 174
#define CBR_COORDINATOR 175
#define CBR_RUN 176
#define LOCALIZATION_BALL_X 177
#define LOCALIZATION_BALL_Y 178
#define LOCALIZATION_RBT01_X 179
#define LOCALIZATION_RBT01_Y 180
#define LOCALIZATION_RBT02_X 181
#define LOCALIZATION_RBT02_Y 182
#define LOCALIZATION_RBT03_X 183
#define LOCALIZATION_RBT03_Y 184
#define LOCALIZATION_RBT04_X 185
#define LOCALIZATION_RBT04_Y 186
#define LOCALIZATION_RBT05_X 187
#define LOCALIZATION_RBT05_Y 188
#define LOCALIZATION_RBT06_X 189
#define LOCALIZATION_RBT06_Y 190
#define LOCALIZATION_RBT07_X 191
#define LOCALIZATION_RBT07_Y 192
#define LOCALIZATION_RBT08_X 193
#define LOCALIZATION_RBT08_Y 194
#define LOCALIZATION_RBT09_X 195
#define LOCALIZATION_RBT09_Y 196
#define LOCALIZATION_RBT10_X 197
#define LOCALIZATION_RBT10_Y 198
#define LOCALIZATION_RBT11_X 199
#define LOCALIZATION_RBT11_Y 200
#define LOCALIZATION_OPP01_X 201
#define LOCALIZATION_OPP01_Y 202
#define LOCALIZATION_OPP02_X 203
#define LOCALIZATION_OPP02_Y 204
#define LOCALIZATION_OPP03_X 205
#define LOCALIZATION_OPP03_Y 206
#define LOCALIZATION_OPP04_X 207
#define LOCALIZATION_OPP04_Y 208
#define LOCALIZATION_OPP05_X 209
#define LOCALIZATION_OPP05_Y 210
#define LOCALIZATION_OPP06_X 211
#define LOCALIZATION_OPP06_Y 212
#define LOCALIZATION_OPP07_X 213
#define LOCALIZATION_OPP07_Y 214
#define LOCALIZATION_OPP08_X 215
#define LOCALIZATION_OPP08_Y 216
#define LOCALIZATION_OPP09_X 217
#define LOCALIZATION_OPP09_Y 218
#define LOCALIZATION_OPP10_X 219
#define LOCALIZATION_OPP10_Y 220
#define LOCALIZATION_OPP11_X 221
#define LOCALIZATION_OPP11_Y 222
#define DECISION_RBT01_DIST_BALL 223
#define DECISION_RBT02_DIST_BALL 224
#define DECISION_RBT03_DIST_BALL 225
#define DECISION_RBT04_DIST_BALL 226
#define VISION_FIRST_GOALPOST 227
#define VISION_SECOND_GOALPOST 228
#define VISION_THIRD_GOALPOST 229
#define VISION_FOURTH_GOALPOST 230
#define fVISION_FIELD 231

//----global variables------------------------------------------------
extern int *mem ; //Variável que manipula memória compartilhada
extern float *memf ; //Variável que manipula memória compartilhada

//----Functions prototype---------------------------------------------
int* using_shared_memory(int); //Função que cria e acopla a memória compartilhada

void write_int(int* , int, int);

void write_float(int*, int, float);

int read_int(int*, int);

float read_float(int*, int);
