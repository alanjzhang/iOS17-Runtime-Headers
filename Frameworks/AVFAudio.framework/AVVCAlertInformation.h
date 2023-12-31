/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AVFAudio.framework/AVFAudio
 */

@interface AVVCAlertInformation : NSObject {
    unsigned long long  _alertEndTime;
    long long  _mode;
    int  _type;
}

@property (nonatomic) unsigned long long alertEndTime;
@property (nonatomic) long long mode;
@property (nonatomic) int type;

- (unsigned long long)alertEndTime;
- (id)initWithAlertType:(int)arg1 mode:(long long)arg2 endTime:(unsigned long long)arg3;
- (long long)mode;
- (void)setAlertEndTime:(unsigned long long)arg1;
- (void)setMode:(long long)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
