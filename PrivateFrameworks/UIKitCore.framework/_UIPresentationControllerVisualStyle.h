/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPresentationControllerVisualStyle : NSObject {
    UIPresentationController * _presentationController;
}

@property (nonatomic, readonly) UIPresentationController *presentationController;

- (id)initWithPresentationController:(id)arg1;
- (id)preferredAnimationControllerForPresentation:(bool)arg1;
- (id)presentationController;
- (void)runAlongsidePresentation:(bool)arg1 transitionCoordinator:(id)arg2;
- (void)runAlongsideTransitionFromPresentationController:(id)arg1 transitionCoordinator:(id)arg2;
- (void)runAlongsideTransitionToPresentationController:(id)arg1 transitionCoordinator:(id)arg2;

@end
