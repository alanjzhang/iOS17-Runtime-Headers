/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIFacetimeManager : NSObject

+ (bool)canFaceTime:(unsigned long long)arg1 withContacts:(id)arg2;
+ (bool)canFaceTime:(unsigned long long)arg1 withParticipants:(id)arg2;
+ (bool)faceTimeAvailable:(unsigned long long)arg1;
+ (id)faceTimeURLForType:(unsigned long long)arg1 andHandle:(id)arg2;
+ (id)faceTimeURLForType:(unsigned long long)arg1 withContacts:(id)arg2;
+ (id)faceTimeURLForType:(unsigned long long)arg1 withHandles:(id)arg2;
+ (id)faceTimeURLForType:(unsigned long long)arg1 withParticipants:(id)arg2;
+ (id)handlesForContacts:(id)arg1;
+ (id)handlesForParticipants:(id)arg1;
+ (id)preferredHandleForContact:(id)arg1 withDefaultPhoneNumber:(id)arg2 emailAddress:(id)arg3;
+ (void)startFaceTime:(unsigned long long)arg1 withContacts:(id)arg2;
+ (void)startFaceTime:(unsigned long long)arg1 withParticipants:(id)arg2;

@end