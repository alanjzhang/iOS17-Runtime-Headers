/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncOwnerIdentifier : NSObject <NSCopying> {
    NSUUID * _databaseIdentifier;
    NSString * _deviceIdentifier;
    NSString * _ownerDifferentiator;
    NSString * _ownerIdentifierString;
}

@property (nonatomic, readonly) NSString *cloudKitIdentifier;
@property (nonatomic, readonly) NSString *string;

+ (id)unitTest_ownerIdentifierWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3;

- (void).cxx_destruct;
- (id)_initWithDatabaseIdentifer:(id)arg1 deviceIdentifier:(id)arg2 ownerDifferentiator:(id)arg3;
- (id)cloudKitIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)string;

@end