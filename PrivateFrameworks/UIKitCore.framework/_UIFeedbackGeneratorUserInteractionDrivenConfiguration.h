/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFeedbackGeneratorUserInteractionDrivenConfiguration : _UIFeedbackGeneratorConfiguration {
    _UIFeedback<_UIFeedbackDiscretePlayable> * _interactionCancelledFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _interactionEndedFeedback;
    _UIFeedback<_UIFeedbackDiscretePlayable> * _interactionStartedFeedback;
}

@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionCancelledFeedback;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionEndedFeedback;
@property (nonatomic, retain) _UIFeedback<_UIFeedbackDiscretePlayable> *interactionStartedFeedback;

- (void).cxx_destruct;
- (id)feedbackKeyPaths;
- (id)interactionCancelledFeedback;
- (id)interactionEndedFeedback;
- (id)interactionStartedFeedback;
- (void)setInteractionCancelledFeedback:(id)arg1;
- (void)setInteractionEndedFeedback:(id)arg1;
- (void)setInteractionStartedFeedback:(id)arg1;

@end
