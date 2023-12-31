/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDatabaseNotification : CKNotification <NSSecureCoding> {
    long long  _databaseScope;
    CKRecordZoneID * _recordZoneID;
}

@property (nonatomic) long long databaseScope;
@property (nonatomic, copy) CKRecordZoneID *recordZoneID;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (long long)databaseScope;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (id)recordZoneID;
- (void)setDatabaseScope:(long long)arg1;
- (void)setRecordZoneID:(id)arg1;

@end
