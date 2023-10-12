/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASetActivationToken : SABaseClientBoundCommand

@property (nonatomic, copy) NSData *activationToken;
@property (nonatomic, copy) NSString *language;

+ (id)setActivationToken;
+ (id)setActivationTokenWithDictionary:(id)arg1 context:(id)arg2;

- (id)activationToken;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (bool)requiresResponse;
- (void)setActivationToken:(id)arg1;
- (void)setLanguage:(id)arg1;

@end
