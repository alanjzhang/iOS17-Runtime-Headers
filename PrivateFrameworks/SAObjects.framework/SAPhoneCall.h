/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAPhoneCall : SADomainCommand

@property (nonatomic, retain) SAPersonAttribute *callRecipient;
@property (nonatomic, copy) NSNumber *emergencyCall;
@property (nonatomic) bool faceTime;
@property (nonatomic) bool faceTimeAudio;
@property (nonatomic) bool handsFreeCall;
@property (nonatomic) bool speakerphoneCall;

+ (id)call;
+ (id)callWithDictionary:(id)arg1 context:(id)arg2;

- (id)callRecipient;
- (id)emergencyCall;
- (id)encodedClassName;
- (bool)faceTime;
- (bool)faceTimeAudio;
- (id)groupIdentifier;
- (bool)handsFreeCall;
- (bool)requiresResponse;
- (void)setCallRecipient:(id)arg1;
- (void)setEmergencyCall:(id)arg1;
- (void)setFaceTime:(bool)arg1;
- (void)setFaceTimeAudio:(bool)arg1;
- (void)setHandsFreeCall:(bool)arg1;
- (void)setSpeakerphoneCall:(bool)arg1;
- (bool)speakerphoneCall;

@end
