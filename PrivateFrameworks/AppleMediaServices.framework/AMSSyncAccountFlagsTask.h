/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSSyncAccountFlagsTask : AMSTask {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;

- (void).cxx_destruct;
- (id)account;
- (id)bag;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (id)performSync;
- (void)setAccount:(id)arg1;
- (void)setBag:(id)arg1;

@end
