/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKPersistentAttendee : EKPersistentParticipant

@property (nonatomic) bool commentChanged;
@property (nonatomic, copy) NSDate *lastModified;
@property (nonatomic) long long participantRole;
@property (nonatomic) long long participantType;
@property (nonatomic) int pendingStatus;
@property (nonatomic) bool proposedStartDateChanged;
@property (nonatomic) bool statusChanged;
@property (nonatomic) int statusRaw;

+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
+ (id)propertiesToUnloadOnCommit;
+ (id)relations;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)entityType;
- (unsigned int)flags;
- (bool)isCurrentUser;
- (id)lastModifiedParticipationStatus;
- (long long)participantRole;
- (long long)participantType;
- (int)pendingStatusRaw;
- (void)setFlags:(unsigned int)arg1;
- (void)setLastModifiedParticipationStatus:(id)arg1;
- (void)setParticipantRole:(long long)arg1;
- (void)setParticipantType:(long long)arg1;
- (void)setPendingStatusRaw:(int)arg1;
- (void)setStatusRaw:(int)arg1;
- (int)statusRaw;

// EKPersistentAttendee (UnitTesting)

+ (id)attendeeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)attendeeWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;

- (id)initWithAddress:(id)arg1 name:(id)arg2;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 address:(id)arg3;

@end
