/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSSetDemoAccountTask : AMSTask {
    AMSProcessInfo * _clientInfo;
    NSString * _password;
    NSString * _username;
}

@property (nonatomic, retain) AMSProcessInfo *clientInfo;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) NSString *username;

- (void).cxx_destruct;
- (id)clientInfo;
- (id)initWithUsername:(id)arg1 password:(id)arg2;
- (id)password;
- (id)performTask;
- (void)setClientInfo:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
