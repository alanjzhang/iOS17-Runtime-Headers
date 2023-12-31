/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVAppleAccountStore : NSObject {
    ACAccountStore * _accountStore;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    ACAccount * _primaryAppleAccount;
}

@property (readonly) ACAccount *primaryAppleAccount;

+ (id)sharedAccountStore;

- (void).cxx_destruct;
- (void)_accountStoreDidChangeNotification:(id)arg1;
- (id)init;
- (id)primaryAppleAccount;

@end
