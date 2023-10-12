/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageRegistrationRequest : VNTargetedImageRequest {
    VNImageBuffer * _cachedFloatingImageBuffer;
    VNImageRegistrationSignature * _cachedFloatingImageSignature;
}

- (void).cxx_destruct;
- (bool)allowsCachingOfResults;
- (id)cachedFloatingImageBufferReturningError:(id*)arg1;
- (id)cachedFloatingImageRegistrationSignatureReturningError:(id*)arg1;
- (bool)getReferenceImageBuffer:(id*)arg1 registrationSignature:(id*)arg2 forRequestPerformingContext:(id)arg3 error:(id*)arg4;
- (bool)wantsSequencedRequestObservationsRecording;

@end