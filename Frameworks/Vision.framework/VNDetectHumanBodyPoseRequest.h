/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectHumanBodyPoseRequest : VNImageBasedRequest

@property (readonly, copy) NSArray *results;

+ (id)_supportedJointNamesRevision1;
+ (id)_supportedJointsGroupNamesRevision1;
+ (Class)configurationClass;
+ (id)supportedJointNamesForRevision:(unsigned long long)arg1 error:(id*)arg2;
+ (id)supportedJointsGroupNamesForRevision:(unsigned long long)arg1 error:(id*)arg2;

- (id)applicableDetectorTypeForRevision:(unsigned long long)arg1 error:(id*)arg2;
- (bool)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (id)supportedJointNamesAndReturnError:(id*)arg1;
- (id)supportedJointsGroupNamesAndReturnError:(id*)arg1;

// VNDetectHumanBodyPoseRequest (Revisioning)

+ (const struct { unsigned long long x1; struct { int x_2_1_1; int x_2_1_2; } x2; struct { int x_3_1_1; int x_3_1_2; } x3; struct { int x_4_1_1; int x_4_1_2; } x4; }*)revisionAvailability;

@end
