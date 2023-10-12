/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSetMultilingualDictationConfig : SABaseClientBoundCommand

@property (nonatomic) bool multilingualDisabled;
@property (nonatomic, copy) NSNumber *multilingualTimeoutInMillis;

+ (id)setMultilingualDictationConfig;
+ (id)setMultilingualDictationConfigWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)multilingualDisabled;
- (id)multilingualTimeoutInMillis;
- (bool)requiresResponse;
- (void)setMultilingualDisabled:(bool)arg1;
- (void)setMultilingualTimeoutInMillis:(id)arg1;

@end
