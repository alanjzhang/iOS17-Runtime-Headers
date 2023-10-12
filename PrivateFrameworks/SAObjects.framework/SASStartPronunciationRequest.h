/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASStartPronunciationRequest : SASStartSpeech

@property (nonatomic, retain) SASPronunciationContext *context;

+ (id)startPronunciationRequest;
+ (id)startPronunciationRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setContext:(id)arg1;

@end