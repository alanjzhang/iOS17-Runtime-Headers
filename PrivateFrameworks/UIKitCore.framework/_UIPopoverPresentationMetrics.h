/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPopoverPresentationMetrics : NSObject {
    bool  _shouldHideArrow;
    bool  _shouldUseVisualStyleAnimationControllerForDismissal;
    bool  _shouldUseVisualStyleAnimationControllerForPresentation;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultPreferredLargeContentSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } defaultPreferredSmallContentSize;
@property (nonatomic) bool shouldHideArrow;
@property (nonatomic) bool shouldUseVisualStyleAnimationControllerForDismissal;
@property (nonatomic) bool shouldUseVisualStyleAnimationControllerForPresentation;

+ (id)defaultPopoverMetrics;

- (struct CGSize { double x1; double x2; })defaultPreferredLargeContentSize;
- (struct CGSize { double x1; double x2; })defaultPreferredSmallContentSize;
- (void)setShouldHideArrow:(bool)arg1;
- (void)setShouldUseVisualStyleAnimationControllerForDismissal:(bool)arg1;
- (void)setShouldUseVisualStyleAnimationControllerForPresentation:(bool)arg1;
- (bool)shouldHideArrow;
- (bool)shouldUseVisualStyleAnimationControllerForDismissal;
- (bool)shouldUseVisualStyleAnimationControllerForPresentation;

@end
