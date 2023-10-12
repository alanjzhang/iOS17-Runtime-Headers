/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
 */

@interface TPSSiriLanguageValidation : TPSInclusivityValidation

@property (nonatomic, readonly) NSArray *excludeLanguages;
@property (nonatomic, readonly) NSArray *targetLanguages;

- (id)excludeLanguages;
- (id)initWithTargetLanguages:(id)arg1 excludeLanguages:(id)arg2;
- (id)targetLanguages;
- (void)validateWithCompletion:(id /* block */)arg1;

@end
