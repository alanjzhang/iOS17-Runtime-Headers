/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/UserNotifications.framework/UserNotifications
 */

@interface UNNotificationRequest : NSObject <NSCopying, NSSecureCoding, UNNotificationSecurityScopeProviding> {
    UNNotificationContent * _content;
    unsigned long long  _destinations;
    NSString * _identifier;
    UNNotificationTrigger * _trigger;
}

@property (nonatomic, readonly, copy) UNNotificationContent *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long destinations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) UNNotificationTrigger *trigger;

+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3;
+ (id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4;
+ (id)requestWithIdentifier:(id)arg1 pushPayload:(id)arg2 bundleIdentifier:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 destinations:(unsigned long long)arg4;
- (unsigned long long)_notificationDestinationsForInterruptionLevel:(unsigned long long)arg1 inputDestinations:(unsigned long long)arg2;
- (void)addSecurityScope:(id)arg1;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)destinations;
- (void)encodeWithCoder:(id)arg1;
- (void)enterSecurityScope;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)leaveSecurityScope;
- (void)removeSecurityScope;
- (void)setDestinations:(unsigned long long)arg1;
- (id)trigger;

@end