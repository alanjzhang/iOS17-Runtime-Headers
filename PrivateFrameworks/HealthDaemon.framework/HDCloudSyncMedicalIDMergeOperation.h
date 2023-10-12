/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncMedicalIDMergeOperation : HDCloudSyncSynchronousOperation {
    _HKMedicalIDData * _cloudMedicalIDData;
    _HKMedicalIDData * _localMedicalIDData;
    _HKMedicalIDData * _mergedMedicalIDData;
}

@property (nonatomic, retain) _HKMedicalIDData *cloudMedicalIDData;
@property (nonatomic, retain) _HKMedicalIDData *localMedicalIDData;
@property (nonatomic, readonly) _HKMedicalIDData *mergedMedicalIDData;

- (void).cxx_destruct;
- (id)cloudMedicalIDData;
- (id)localMedicalIDData;
- (id)mergedMedicalIDData;
- (bool)performWithError:(id*)arg1;
- (void)setCloudMedicalIDData:(id)arg1;
- (void)setLocalMedicalIDData:(id)arg1;

@end