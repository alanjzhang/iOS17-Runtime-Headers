/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPassthroughGateGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UIPassthroughGestureDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_supportsTouchContinuation;

- (void)_scrollingChangedWithEvent:(id)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (void)endClosed;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)open;
- (bool)shouldReceiveEvent:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

@end
