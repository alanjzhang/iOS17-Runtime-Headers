/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLNewAssetExtractionStep : CPLBatchExtractionStep {
    NSMutableSet * _alreadySeenMasterScopedIdentifiers;
    unsigned long long  _maximumCount;
}

@property (nonatomic, readonly) unsigned long long maximumCount;

- (void).cxx_destruct;
- (bool)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4;
- (id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;
- (unsigned long long)maximumCount;
- (void)reset;
- (id)shortDescription;
- (bool)shouldResetFromThisStepWithIncomingChange:(id)arg1;

@end
