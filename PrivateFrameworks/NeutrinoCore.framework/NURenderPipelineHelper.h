/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURenderPipelineHelper : NSObject {
    NURenderPipelineState * _pipelineState;
}

@property (nonatomic, readonly) NURenderPipelineState *pipelineState;

- (void).cxx_destruct;
- (id)addTagWithName:(id)arg1 inputNode:(id)arg2 error:(out id*)arg3;
- (id)auxiliaryImageFromComposition:(id)arg1 type:(id)arg2 mediaComponentType:(id)arg3 error:(out id*)arg4;
- (id)auxiliaryImageNode:(id)arg1 type:(long long)arg2;
- (id)beginGroupWithName:(id)arg1 error:(out id*)arg2;
- (id)cacheNode:(id)arg1 type:(id)arg2 settings:(id)arg3 error:(out id*)arg4;
- (id)createSloMoWithInput:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 endTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 rate:(float)arg4 error:(out id*)arg5;
- (id)cropNode:(id)arg1 cropRect:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2 cropSettings:(id)arg3;
- (bool)endGroupWithName:(id)arg1 error:(out id*)arg2;
- (id)filterNode:(id)arg1 input:(id)arg2 settings:(id)arg3;
- (id)filterNode:(id)arg1 inputs:(id)arg2 settings:(id)arg3;
- (id)getTagWithPath:(id)arg1 error:(out id*)arg2;
- (bool)hasStaticTime;
- (id)initWithPipelineState:(id)arg1;
- (id)inputForPath:(id)arg1 error:(out id*)arg2;
- (bool)isCIFilterAvailable:(id)arg1 propertyName:(id)arg2;
- (bool)isSourceAvailable:(id)arg1 sourceSettings:(id)arg2;
- (id)livePhotoKeyFrameMetadataFromNode:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 error:(out id*)arg3;
- (long long)mediaTypeForComposition:(id)arg1;
- (long long)orientationFromAdjustmentIn:(id)arg1;
- (id)orientedNode:(id)arg1 withOrientation:(long long)arg2;
- (id)perspectiveTransformWithPitch:(double)arg1 yaw:(double)arg2 roll:(double)arg3 imageRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)pipelineState;
- (id)renderNodeFromSource:(id)arg1 settings:(id)arg2 error:(out id*)arg3;
- (void)resetTag:(id)arg1 input:(id)arg2;
- (bool)resetTag:(id)arg1 input:(id)arg2 error:(out id*)arg3;
- (id)scaleNode:(id)arg1 scale:(struct { long long x1; long long x2; })arg2 error:(out id*)arg3;
- (id)sourceFromComposition:(id)arg1 error:(out id*)arg2;
- (id)sourceFromComposition:(id)arg1 withName:(id)arg2 error:(out id*)arg3;
- (id)straightenTransformWithAngle:(double)arg1 extent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg2;
- (id)switchFromNodes:(id)arg1 mainInput:(id)arg2 selector:(id /* block */)arg3;
- (id)trimInput:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 endTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(out id*)arg4;
- (id)vectorWithFloats:(id)arg1;

@end
