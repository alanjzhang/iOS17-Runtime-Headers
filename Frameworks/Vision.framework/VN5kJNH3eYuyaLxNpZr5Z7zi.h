/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VN5kJNH3eYuyaLxNpZr5Z7zi : VNImageBasedRequest

@property unsigned long long imageCropAndScaleOption;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision

+ (Class)configurationClass;
+ (id)descriptionForPrivateRevision:(unsigned long long)arg1;
+ (id)knownClassificationsForRevision:(unsigned long long)arg1 error:(id*)arg2;
+ (id)privateRevisionsSet;
+ (bool)revision:(unsigned long long)arg1 mayAcceptResultsProducedByRevision:(unsigned long long)arg2;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (void)applyConfigurationOfRequest:(id)arg1;
- (unsigned long long)imageCropAndScaleOption;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (void)setImageCropAndScaleOption:(unsigned long long)arg1;
- (id)supportedIdentifiersAndReturnError:(id*)arg1;
- (bool)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis

// VN5kJNH3eYuyaLxNpZr5Z7zi (MediaAnalysis)

+ (id)vcp_sceneRequest;

@end