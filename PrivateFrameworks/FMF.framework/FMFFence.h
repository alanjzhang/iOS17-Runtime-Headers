/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMFFence : NSObject <NSCopying, NSSecureCoding> {
    NSString * _acceptanceStatus;
    bool  _active;
    NSString * _ckRecordName;
    NSString * _ckRecordZoneOwnerName;
    NSString * _createdByIdentifier;
    NSArray * _followerIds;
    NSString * _friendIdentifier;
    bool  _fromMe;
    NSString * _identifier;
    NSString * _label;
    CLLocation * _location;
    unsigned long long  _locationType;
    NSDate * _muteEndDate;
    NSString * _pendingIdentifier;
    FMFPlacemark * _placemark;
    NSArray * _recipients;
    bool  _recurring;
    FMFSchedule * _schedule;
    NSDate * _timestamp;
    NSString * _trigger;
    NSString * _type;
}

@property (nonatomic, retain) NSString *acceptanceStatus;
@property (getter=isActive, nonatomic) bool active;
@property (nonatomic, retain) NSString *ckRecordName;
@property (nonatomic, retain) NSString *ckRecordZoneOwnerName;
@property (nonatomic, retain) NSString *createdByIdentifier;
@property (nonatomic, readonly) NSString *displayLocationName;
@property (nonatomic, retain) NSArray *followerIds;
@property (nonatomic, retain) NSString *friendIdentifier;
@property (getter=isFromMe, nonatomic) bool fromMe;
@property (nonatomic, retain) NSString *identifier;
@property (getter=inviteDate, nonatomic, readonly) NSDate *inviteDate;
@property (getter=isMuted, nonatomic, readonly) bool isMuted;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) CLLocation *location;
@property (nonatomic) unsigned long long locationType;
@property (nonatomic, retain) NSDate *muteEndDate;
@property (getter=isOnMe, nonatomic, readonly) bool onMe;
@property (nonatomic, retain) NSString *pendingIdentifier;
@property (nonatomic, retain) FMFPlacemark *placemark;
@property (nonatomic, retain) NSArray *recipients;
@property (getter=isRecurring, nonatomic) bool recurring;
@property (getter=isRegionAllowed, nonatomic, readonly) bool regionAllowed;
@property (nonatomic, retain) FMFSchedule *schedule;
@property (getter=isSupported, readonly) bool supported;
@property (nonatomic, retain) NSDate *timestamp;
@property (nonatomic, retain) NSString *trigger;
@property (nonatomic, retain) NSString *type;
@property (getter=shouldUseCloudKitStore, nonatomic, readonly) bool useCloudKitStore;
@property (getter=shouldUseIDSTrigger, nonatomic, readonly) bool useIDSTrigger;

+ (bool)isAllowedAtLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptanceStatus;
- (id)ckRecordName;
- (id)ckRecordZoneOwnerName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdByIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)followerIds;
- (id)friendIdentifier;
- (id)handlesForArray:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRecipient:(id)arg1 location:(id)arg2 placemark:(id)arg3 label:(id)arg4 trigger:(id)arg5 type:(id)arg6 locationType:(unsigned long long)arg7 recurring:(bool)arg8;
- (id)inviteDate;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isFromMe;
- (bool)isMuted;
- (bool)isOnMe;
- (bool)isRecurring;
- (bool)isRegionAllowed;
- (bool)isSupported;
- (id)label;
- (id)location;
- (id)locationForDictionary:(id)arg1;
- (unsigned long long)locationType;
- (id)muteEndDate;
- (id)pendingIdentifier;
- (id)placemark;
- (id)recipients;
- (id)schedule;
- (void)setAcceptanceStatus:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)setCkRecordName:(id)arg1;
- (void)setCkRecordZoneOwnerName:(id)arg1;
- (void)setCreatedByIdentifier:(id)arg1;
- (void)setFollowerIds:(id)arg1;
- (void)setFriendIdentifier:(id)arg1;
- (void)setFromMe:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationType:(unsigned long long)arg1;
- (void)setMuteEndDate:(id)arg1;
- (void)setPendingIdentifier:(id)arg1;
- (void)setPlacemark:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setRecurring:(bool)arg1;
- (void)setSchedule:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setTrigger:(id)arg1;
- (void)setType:(id)arg1;
- (bool)shouldUseCloudKitStore;
- (bool)shouldUseIDSTrigger;
- (id)timestamp;
- (id)trigger;
- (id)type;
- (void)updateFenceLocation:(id)arg1 placemark:(id)arg2 label:(id)arg3 trigger:(id)arg4 type:(id)arg5 locationType:(unsigned long long)arg6;
- (void)updateFenceMuteEndDate:(id)arg1;

// FMFFence (NSDate)

+ (id)endDateForMuteTimespan:(unsigned long long)arg1;

// FMFFence (NSString)

+ (id)genericFriendName;

- (id)displayLocationName;
- (id)localizedNotificationStringForFollower:(id)arg1 locationName:(id)arg2;
- (id)localizedRequestNotificationStringForFollower:(id)arg1 locationName:(id)arg2;
- (id)localizedSubtitleStringWithLocationName:(id)arg1;
- (id)localizedWillBeNotifiedStringForFollower:(id)arg1 locationName:(id)arg2;

@end
