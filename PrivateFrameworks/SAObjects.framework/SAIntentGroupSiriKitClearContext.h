/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupSiriKitClearContext : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *reason;

+ (id)siriKitClearContext;
+ (id)siriKitClearContextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)siriKitClearContextWithReason:(id)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithReason:(id)arg1;
- (bool)mutatingCommand;
- (id)reason;
- (bool)requiresResponse;
- (void)setReason:(id)arg1;

@end
