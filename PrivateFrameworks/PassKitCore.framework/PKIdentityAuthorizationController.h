/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKIdentityAuthorizationController : NSObject {
    DIIdentityAuthorizationController * _wrapped;
}

@property (nonatomic, retain) DIIdentityAuthorizationController *wrapped;

- (void).cxx_destruct;
- (void)cancelRequest;
- (void)checkCanRequestDocument:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)requestDocument:(id)arg1 completion:(id /* block */)arg2;
- (void)setWrapped:(id)arg1;
- (id)wrapped;

@end
