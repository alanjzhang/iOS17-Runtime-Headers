/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFInputTextDialogResponse : WFDialogResponse <NSSecureCoding> {
    NSString * _inputtedText;
}

@property (nonatomic, readonly, copy) NSString *inputtedText;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputtedText:(id)arg1 cancelled:(bool)arg2;
- (id)initWithResponseCode:(long long)arg1;
- (id)inputtedText;

@end
