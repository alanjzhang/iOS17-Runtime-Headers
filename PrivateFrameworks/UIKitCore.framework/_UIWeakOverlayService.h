/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIWeakOverlayService : NSObject <_UIOverlayServiceServerToClientInterface> {
    _UIOverlayService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) _UIOverlayService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithService:(id)arg1;
- (oneway void)performOverlayClientAction:(id)arg1;
- (id)service;

@end
