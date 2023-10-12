/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAlarmEventChanges : NSObject {
    NSArray * _oldEvents;
    NSArray * _scheduledEvents;
}

@property (nonatomic, readonly, copy) NSSet *addedEvents;
@property (nonatomic, readonly, copy) NSArray *oldEvents;
@property (nonatomic, readonly, copy) NSSet *removedEvents;
@property (nonatomic, readonly, copy) NSArray *scheduledEvents;

- (void).cxx_destruct;
- (id)addedEvents;
- (id)description;
- (unsigned long long)hash;
- (id)initWithOldEvents:(id)arg1 scheduledEvents:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)oldEvents;
- (id)removedEvents;
- (id)scheduledEvents;

@end
