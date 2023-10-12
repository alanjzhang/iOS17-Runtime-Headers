/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFContextualActionRunRequest : WFWorkflowRunRequest <NSSecureCoding> {
    WFContextualAction * _action;
    WFContextualActionContext * _actionContext;
    WFContentCollection * _input;
}

@property (nonatomic, readonly) WFContextualAction *action;
@property (nonatomic, readonly) WFContextualActionContext *actionContext;
@property (nonatomic, retain) WFContentCollection *input;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)actionContext;
- (void)encodeWithCoder:(id)arg1;
- (void)getInputWithCompletionHandler:(id /* block */)arg1;
- (id)initWithAction:(id)arg1 actionContext:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)input;
- (id)queueIdentifier;
- (void)setInput:(id)arg1;

@end
