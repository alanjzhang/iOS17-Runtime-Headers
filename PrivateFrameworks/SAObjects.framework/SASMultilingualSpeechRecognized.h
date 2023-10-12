/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASMultilingualSpeechRecognized : SABaseClientBoundCommand

@property (nonatomic) bool multilingualDisabled;
@property (nonatomic, copy) NSDictionary *speechRecognizedByLanguage;

+ (id)multilingualSpeechRecognized;
+ (id)multilingualSpeechRecognizedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)multilingualDisabled;
- (bool)requiresResponse;
- (void)setMultilingualDisabled:(bool)arg1;
- (void)setSpeechRecognizedByLanguage:(id)arg1;
- (id)speechRecognizedByLanguage;

@end