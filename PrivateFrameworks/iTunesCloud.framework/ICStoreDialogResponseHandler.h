/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICStoreDialogResponseHandler : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsHandlingNonAuthenticationDialogs;
    bool  _shouldRecordLastAuthenticationDialogResponseTime;
}

+ (bool)supportsSecureCoding;

- (void)_handleAuthenticationStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_handleBuyButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)_handleDefaultStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(id /* block */)arg4;
- (void)_handleFamilyPermissionButtonAction:(id)arg1 usingRequestContext:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleGotoButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handleButtonAction:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)handleStoreDialogResponse:(id)arg1 usingRequestContext:(id)arg2 withDialogTimeout:(double)arg3 withCompletionHandler:(id /* block */)arg4;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
