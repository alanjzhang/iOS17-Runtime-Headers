/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncMedicalIDPushOperation : HDCloudSyncOperation {
    _HKMedicalIDData * _cloudMedicalIDData;
    _HKMedicalIDData * _medicalIDDataToPush;
    HDCloudSyncMedicalIDRecord * _medicalIDRecord;
}

@property (nonatomic, retain) _HKMedicalIDData *cloudMedicalIDData;
@property (nonatomic, retain) _HKMedicalIDData *medicalIDDataToPush;
@property (nonatomic, retain) HDCloudSyncMedicalIDRecord *medicalIDRecord;

- (void).cxx_destruct;
- (id)cloudMedicalIDData;
- (void)main;
- (id)medicalIDDataToPush;
- (id)medicalIDRecord;
- (void)setCloudMedicalIDData:(id)arg1;
- (void)setMedicalIDDataToPush:(id)arg1;
- (void)setMedicalIDRecord:(id)arg1;

@end