/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGetAppIntentPolicyAndVocab : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *clientIdentifiers;

+ (id)getAppIntentPolicyAndVocab;
+ (id)getAppIntentPolicyAndVocabWithDictionary:(id)arg1 context:(id)arg2;

- (id)clientIdentifiers;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setClientIdentifiers:(id)arg1;

@end