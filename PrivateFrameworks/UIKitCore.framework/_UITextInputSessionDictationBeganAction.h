/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextInputSessionDictationBeganAction : _UITextInputSessionAction {
    unsigned long long  _dictationBeganCount;
    unsigned long long  _modelessUsedAtLeastOnceCount;
    unsigned long long  _multiModalDictationBeganCount;
}

@property (nonatomic) unsigned long long dictationBeganCount;
@property (nonatomic) unsigned long long modelessUsedAtLeastOnceCount;
@property (nonatomic) unsigned long long multiModalDictationBeganCount;

- (id)description;
- (unsigned long long)dictationBeganCount;
- (long long)inputActionCount;
- (long long)mergeActionIfPossible:(id)arg1;
- (unsigned long long)modelessUsedAtLeastOnceCount;
- (unsigned long long)multiModalDictationBeganCount;
- (void)setDictationBeganCount:(unsigned long long)arg1;
- (void)setModelessUsedAtLeastOnceCount:(unsigned long long)arg1;
- (void)setMultiModalDictationBeganCount:(unsigned long long)arg1;

@end
