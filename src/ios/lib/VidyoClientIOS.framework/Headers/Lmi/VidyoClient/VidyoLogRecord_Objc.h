//
//	VidyoLogRecord_Objc.h
//	VidyoClient
//
//	This file is auto generated, do not edit this file
//	Copyright (c) 2016 Vidyo, Inc. All rights reserved.
//

typedef NS_ENUM(NSInteger, VCLogLevel){
	VCLogLevelFATAL,
	VCLogLevelERROR,
	VCLogLevelWARNING,
	VCLogLevelINFO,
	VCLogLevelDEBUG,
	VCLogLevelSENT,
	VCLogLevelRECEIVED,
	VCLogLevelENTER,
	VCLogLevelLEAVE,
	VCLogLevelINVALID
};
@interface VCLogRecord : NSObject
{
}

	@property size_t categoryName;
	@property long eventTime;
	@property const char * file;
	@property const char * functionName;
	@property VCLogLevel level;
	@property int line;
	@property const char * message;
	@property const char* name;
	@property const char * threadName;
@end