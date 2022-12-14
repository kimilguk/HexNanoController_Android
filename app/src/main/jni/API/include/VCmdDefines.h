#pragma once

enum
{
CMD_REPORT_BATTERY = 5002,
CMD_REPORT_POSITION = 5003,
CMD_REPORT_DEVICE_INFO = 5004,
CMD_REPORT_RECORD_ERROR = 5005,//?ϱ?¼??????
CMD_REPORT_DEVICE_DEBUG_INFO = 5006,
CMD_SET_FANGXIANG = 6002,
CMD_TAKE_OFF = 6003,
CMD_AJUST_FPS = 6004,
CMD_RESTART_SERVER = 6005,
CMD_PHONE_INFO = 6006,
CMD_SET_RESOLUTION = 6007,
CMD_START_RECORD = 6008,
CMD_STOP_RECORD = 6009,
CMD_TAKE_PHOTO = 6010,
CMD_RESTART_DEVICE = 6011,
CMD_RESTART_PUBLISHER = 6012,
CMD_SET_BPS_CTL_TYPE = 6013,
CMD_AJUST_REMOTE_TIME = 6014,

};

#define MESSAGE_DECODEMODE_CHANGED 	5656
#define MESSAGE_RECORD_COMPLETED   	1001
#define MESSAGE_CONNECT_QUALITY_CHANGEBAD 1002
#define MESSAGE_CONNECT_QUALITY_CHANGEGOOD 1003
#define MESSAGE_RESOLUTION_CHANGED 1004
#define MESSAGE_REFRESH_DEBUG 1005


enum
{
STATE_RECORD_STOPED = 0,
STATE_RECORD_RUNNING = 1,
ERR_RECORD_ALREADY_STARTED = 2001,
ERR_RECORD_DISK_FULL = 2002,
ERR_RECORD_WRITE_FILE = 2003,
ERR_RECORD_WRITE_QUEUE_TOO_LONG = 2004,
ERR_RECORD = 2005,
};


enum
{
POOL_ID_COMMAND = 1,
POOL_ID_DEV_COMMAND = 1,

};

enum
{
TIMER_ID_RECONNECT = 1,
TIMER_ID_DEBUG = 2,
};


enum
{
PORT_COMMAND_SERVER_UDP = 16665,
PORT_COMMAND_SERVER_TCP = 16666,
};



