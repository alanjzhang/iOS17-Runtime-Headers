/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFHandleInteractionDialogRequest : WFDialogRequest <NSSecureCoding> {
    WFDialogButton * _doneButton;
    INInteraction * _interaction;
}

@property (nonatomic, readonly, copy) WFDialogButton *doneButton;
@property (nonatomic, readonly, copy) INInteraction *interaction;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)doneButton;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteraction:(id)arg1 attribution:(id)arg2;
- (id)initWithInteraction:(id)arg1 prompt:(id)arg2;
- (id)interaction;

@end
