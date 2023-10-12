/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncMedicalIDRecord : HDCloudSyncRecord {
    HDCloudSyncCodableMedicalID * _underlyingCodableMedicalIDMessage;
}

@property (nonatomic, retain) HDCodableMedicalIDData *medicalIDData;
@property (nonatomic, readonly) NSArray *medicalIDLogs;

+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isMedicalIDRecord:(id)arg1;
+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordType;
+ (bool)requiresUnderlyingMessage;

- (void).cxx_destruct;
- (void)addMedicalIDEvent:(id)arg1;
- (id)description;
- (id)initInSyncCircle:(id)arg1;
- (id)initInZone:(id)arg1;
- (id)initWithCKRecord:(id)arg1 schemaVersion:(long long)arg2;
- (id)medicalIDData;
- (id)medicalIDLogs;
- (id)printDescription;
- (id)serializeUnderlyingMessage;
- (void)setMedicalIDData:(id)arg1;

@end
