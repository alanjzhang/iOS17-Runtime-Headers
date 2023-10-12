/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAReminderCompositeTrigger : SAReminderTrigger

@property (nonatomic, retain) SAReminderDateTimeTrigger *dateTimeTrigger;
@property (nonatomic, retain) SAReminderLocationTrigger *locationTrigger;

+ (id)compositeTrigger;
+ (id)compositeTriggerWithDictionary:(id)arg1 context:(id)arg2;

- (id)dateTimeTrigger;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)locationTrigger;
- (void)setDateTimeTrigger:(id)arg1;
- (void)setLocationTrigger:(id)arg1;

@end