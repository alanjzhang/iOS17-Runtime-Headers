/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SATTSSetSpeechSynthesisVolume : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *actionType;
@property (nonatomic, copy) NSNumber *volumeValue;

+ (id)setSpeechSynthesisVolume;
+ (id)setSpeechSynthesisVolumeWithDictionary:(id)arg1 context:(id)arg2;

- (id)actionType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setActionType:(id)arg1;
- (void)setVolumeValue:(id)arg1;
- (id)volumeValue;

@end
