/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppSSOCore.framework/AppSSOCore
 */

@interface SOConfigurationVersion : NSObject {
    long long  _mode;
    int  _token;
    unsigned long long  _version;
}

@property (nonatomic, readonly) long long version;

+ (void)reset;

- (void)_setStateAndNotify:(unsigned long long)arg1;
- (unsigned long long)_state;
- (long long)checkVersion;
- (void)dealloc;
- (void)increaseVersionWithMessage:(id)arg1;
- (id)initWithMode:(long long)arg1;
- (void)setAppSSOUnavailable;
- (long long)version;

@end
