/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSActivityEvent : NSObject {
    unsigned long long  _activityID;
    NSString * _eventMessage;
    unsigned long long  _eventType;
    unsigned long long  _machTimestamp;
    unsigned long long  _parentActivityID;
    bool  _persisted;
    int  _processID;
    NSString * _processImagePath;
    NSUUID * _processImageUUID;
    unsigned long long  _processUniqueID;
    NSString * _senderImagePath;
    NSUUID * _senderImageUUID;
    unsigned long long  _threadID;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  _timeGMT;
    NSDate * _timestamp;
    NSTimeZone * _timezone;
    NSString * _timezoneName;
    unsigned long long  _traceID;
    struct timezone { 
        int tz_minuteswest; 
        int tz_dsttime; 
    }  _tz;
    unsigned int  _userID;
}

@property (nonatomic, readonly) unsigned long long activityID;
@property (nonatomic, copy) NSString *eventMessage;
@property (nonatomic, readonly) unsigned long long eventType;
@property (nonatomic, readonly) unsigned long long machTimestamp;
@property (nonatomic, readonly) unsigned long long parentActivityID;
@property (nonatomic, readonly) bool persisted;
@property (nonatomic, readonly, copy) NSString *process;
@property (nonatomic, readonly) int processID;
@property (nonatomic, readonly, copy) NSString *processImagePath;
@property (nonatomic, readonly, copy) NSUUID *processImageUUID;
@property (nonatomic, readonly) unsigned long long processUniqueID;
@property (nonatomic, readonly, copy) NSString *sender;
@property (nonatomic, readonly, copy) NSString *senderImagePath;
@property (nonatomic, readonly, copy) NSUUID *senderImageUUID;
@property (nonatomic, readonly) unsigned long long threadID;
@property (nonatomic, readonly) struct timeval { long long x1; int x2; } timeGMT;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly, copy) NSTimeZone *timezone;
@property (nonatomic, retain) NSString *timezoneName;
@property (nonatomic, readonly) unsigned long long traceID;
@property (nonatomic, readonly) struct timezone { int x1; int x2; } tz;
@property (nonatomic, readonly) unsigned int userID;

+ (id)activityEventFromStreamEntry:(struct os_activity_stream_entry_s { unsigned int x1; int x2; unsigned long long x3; unsigned int x4; char *x5; char *x6; unsigned long long x7; unsigned long long x8; union { struct os_activity_stream_common_s { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; char *x_1_2_4; char *x_1_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_1_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_1_2_7; unsigned long long x_1_2_8; unsigned long long x_1_2_9; unsigned int x_1_2_10; } x_9_1_1; struct os_activity_stream_common_with_name_s { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; char *x_2_2_4; char *x_2_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_2_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_2_2_7; unsigned long long x_2_2_8; unsigned long long x_2_2_9; unsigned int x_2_2_10; char *x_2_2_11; } x_9_1_2; struct os_activity_create_s { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; char *x_3_2_4; char *x_3_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_3_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_3_2_7; unsigned long long x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; char *x_3_2_11; unsigned long long x_3_2_12; unsigned long long x_3_2_13; } x_9_1_3; } x9; }*)arg1;

- (void).cxx_destruct;
- (void)_addProperties:(id)arg1;
- (void)_initWithProperties:(id)arg1;
- (unsigned long long)activityID;
- (id)description;
- (id)eventMessage;
- (unsigned long long)eventType;
- (void)fillFromStreamEntry:(struct os_activity_stream_entry_s { unsigned int x1; int x2; unsigned long long x3; unsigned int x4; char *x5; char *x6; unsigned long long x7; unsigned long long x8; union { struct os_activity_stream_common_s { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; char *x_1_2_4; char *x_1_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_1_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_1_2_7; unsigned long long x_1_2_8; unsigned long long x_1_2_9; unsigned int x_1_2_10; } x_9_1_1; struct os_activity_stream_common_with_name_s { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; char *x_2_2_4; char *x_2_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_2_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_2_2_7; unsigned long long x_2_2_8; unsigned long long x_2_2_9; unsigned int x_2_2_10; char *x_2_2_11; } x_9_1_2; struct os_activity_create_s { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; char *x_3_2_4; char *x_3_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_3_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_3_2_7; unsigned long long x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; char *x_3_2_11; unsigned long long x_3_2_12; unsigned long long x_3_2_13; } x_9_1_3; } x9; }*)arg1 eventMessage:(const char *)arg2 persisted:(bool)arg3;
- (unsigned long long)machTimestamp;
- (unsigned long long)parentActivityID;
- (bool)persisted;
- (id)process;
- (int)processID;
- (id)processImagePath;
- (id)processImageUUID;
- (unsigned long long)processUniqueID;
- (id)properties;
- (id)sender;
- (id)senderImagePath;
- (id)senderImageUUID;
- (void)setEventMessage:(id)arg1;
- (void)setTimezoneName:(id)arg1;
- (unsigned long long)threadID;
- (struct timeval { long long x1; int x2; })timeGMT;
- (id)timestamp;
- (id)timezone;
- (id)timezoneName;
- (unsigned long long)traceID;
- (struct timezone { int x1; int x2; })tz;
- (unsigned int)userID;

@end
