/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSActivityCreateEvent : OSActivityEvent {
    unsigned long long  _creatorActivityID;
    unsigned long long  _creatorProcessUniqueID;
    unsigned long long  _senderProgramCounter;
}

@property (nonatomic, readonly) unsigned long long creatorActivityID;
@property (nonatomic, readonly) unsigned long long creatorProcessUniqueID;
@property (nonatomic, readonly) unsigned long long senderProgramCounter;

- (void)_addProperties:(id)arg1;
- (unsigned long long)creatorActivityID;
- (unsigned long long)creatorProcessUniqueID;
- (id)initWithEntry:(struct os_activity_stream_entry_s { unsigned int x1; int x2; unsigned long long x3; unsigned int x4; char *x5; char *x6; unsigned long long x7; unsigned long long x8; union { struct os_activity_stream_common_s { unsigned long long x_1_2_1; unsigned long long x_1_2_2; unsigned long long x_1_2_3; char *x_1_2_4; char *x_1_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_1_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_1_2_7; unsigned long long x_1_2_8; unsigned long long x_1_2_9; unsigned int x_1_2_10; } x_9_1_1; struct os_activity_stream_common_with_name_s { unsigned long long x_2_2_1; unsigned long long x_2_2_2; unsigned long long x_2_2_3; char *x_2_2_4; char *x_2_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_2_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_2_2_7; unsigned long long x_2_2_8; unsigned long long x_2_2_9; unsigned int x_2_2_10; char *x_2_2_11; } x_9_1_2; struct os_activity_create_s { unsigned long long x_3_2_1; unsigned long long x_3_2_2; unsigned long long x_3_2_3; char *x_3_2_4; char *x_3_2_5; struct timeval { long long x_6_3_1; int x_6_3_2; } x_3_2_6; struct timezone { int x_7_3_1; int x_7_3_2; } x_3_2_7; unsigned long long x_3_2_8; unsigned long long x_3_2_9; unsigned int x_3_2_10; char *x_3_2_11; unsigned long long x_3_2_12; unsigned long long x_3_2_13; } x_9_1_3; } x9; }*)arg1;
- (unsigned long long)senderProgramCounter;

@end
