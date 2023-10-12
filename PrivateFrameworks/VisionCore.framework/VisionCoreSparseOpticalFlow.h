/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VisionCore.framework/VisionCore
 */

@interface VisionCoreSparseOpticalFlow : NSObject

+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })_convertToSIMDHomography:(struct VisionCoreHomography { struct Geometry2D_cart2D { float *x_1_1_1; float *x_1_1_2; int x_1_1_3; } x1; struct Geometry2D_cart2D { float *x_2_1_1; float *x_2_1_2; int x_2_1_3; } x2; struct vector<float, std::allocator<float>> { float *x_3_1_1; float *x_3_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_3_1_3; } x3; struct vector<bool, std::allocator<bool>> { unsigned long long *x_4_1_1; unsigned long long x_4_1_2; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long x_3_2_1; } x_4_1_3; } x4; struct vector<float, std::allocator<float>> { float *x_5_1_1; float *x_5_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_5_1_3; } x5; struct _RANSAC_Parameters_ { int x_6_1_1; float x_6_1_2; int x_6_1_3; float x_6_1_4; } x6; })arg1;
+ (struct VisionCoreHomography { struct Geometry2D_cart2D { float *x_1_1_1; float *x_1_1_2; int x_1_1_3; } x1; struct Geometry2D_cart2D { float *x_2_1_1; float *x_2_1_2; int x_2_1_3; } x2; struct vector<float, std::allocator<float>> { float *x_3_1_1; float *x_3_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_3_1_3; } x3; struct vector<bool, std::allocator<bool>> { unsigned long long *x_4_1_1; unsigned long long x_4_1_2; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long x_3_2_1; } x_4_1_3; } x4; struct vector<float, std::allocator<float>> { float *x_5_1_1; float *x_5_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_5_1_3; } x5; struct _RANSAC_Parameters_ { int x_6_1_1; float x_6_1_2; int x_6_1_3; float x_6_1_4; } x6; })_estimateTransformSrcPts:(void*)arg1 DstPts:(void*)arg2 ransacReprojErrorThreshold:(float)arg3;
+ (void)_gatherKeyPtsFromQuadsForSession:(id)arg1 minGridFrequency:(int)arg2;
+ (unsigned long long)_mtlPixelFormatForBuffer:(struct __CVBuffer { }*)arg1;
+ (bool)_point:(struct CGPoint { double x1; double x2; })arg1 inQuad:(id)arg2;
+ (struct vector<VisionCoreHomography, std::allocator<VisionCoreHomography>> { struct VisionCoreHomography {} *x1; struct VisionCoreHomography {} *x2; struct __compressed_pair<VisionCoreHomography *, std::allocator<VisionCoreHomography>> { struct VisionCoreHomography {} *x_3_1_1; } x3; })_runSparseOpticalFlowOnFrame:(struct __CVBuffer { }*)arg1 shouldRunCorr:(bool)arg2 forSession:(id)arg3 error:(id*)arg4 groups:(void*)arg5 options:(id)arg6;
+ (bool)_updateSession:(id)arg1 referenceFrame:(struct __CVBuffer { }*)arg2 error:(id*)arg3;
+ (bool)_validateBuffer:(struct __CVBuffer { }*)arg1;
+ (id)computeHomographiesForQuadrilaterals:(id)arg1 inFrame:(struct __CVBuffer { }*)arg2 session:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (id)destinationKptsForTransform:(struct VisionCoreHomography { struct Geometry2D_cart2D { float *x_1_1_1; float *x_1_1_2; int x_1_1_3; } x1; struct Geometry2D_cart2D { float *x_2_1_1; float *x_2_1_2; int x_2_1_3; } x2; struct vector<float, std::allocator<float>> { float *x_3_1_1; float *x_3_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_3_1_3; } x3; struct vector<bool, std::allocator<bool>> { unsigned long long *x_4_1_1; unsigned long long x_4_1_2; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long x_3_2_1; } x_4_1_3; } x4; struct vector<float, std::allocator<float>> { float *x_5_1_1; float *x_5_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_5_1_3; } x5; struct _RANSAC_Parameters_ { int x_6_1_1; float x_6_1_2; int x_6_1_3; float x_6_1_4; } x6; })arg1;
+ (struct vector<int, std::allocator<int>> { int *x1; int *x2; struct __compressed_pair<int *, std::allocator<int>> { int *x_3_1_1; } x3; })getInlierCountsPerQuad:(void*)arg1 inliers:(void*)arg2;
+ (id)quadsConformHomographySrcQuads:(id)arg1 destQuads:(id)arg2 reprojError:(float)arg3;
+ (void)recursiveRansacSrcPts:(void*)arg1 DstPts:(void*)arg2 QuadsMatchingKptsCount:(void*)arg3 resultingHomographies:(void*)arg4 groups:(void*)arg5 inlierRatio:(float)arg6 ransacReprojErrorThreshold:(float)arg7;
+ (id)sourceKptsForTransform:(struct VisionCoreHomography { struct Geometry2D_cart2D { float *x_1_1_1; float *x_1_1_2; int x_1_1_3; } x1; struct Geometry2D_cart2D { float *x_2_1_1; float *x_2_1_2; int x_2_1_3; } x2; struct vector<float, std::allocator<float>> { float *x_3_1_1; float *x_3_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_3_1_3; } x3; struct vector<bool, std::allocator<bool>> { unsigned long long *x_4_1_1; unsigned long long x_4_1_2; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long x_3_2_1; } x_4_1_3; } x4; struct vector<float, std::allocator<float>> { float *x_5_1_1; float *x_5_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_5_1_3; } x5; struct _RANSAC_Parameters_ { int x_6_1_1; float x_6_1_2; int x_6_1_3; float x_6_1_4; } x6; })arg1;
+ (id)sparseOpticalFlowResultsFromHomography:(struct VisionCoreHomography { struct Geometry2D_cart2D { float *x_1_1_1; float *x_1_1_2; int x_1_1_3; } x1; struct Geometry2D_cart2D { float *x_2_1_1; float *x_2_1_2; int x_2_1_3; } x2; struct vector<float, std::allocator<float>> { float *x_3_1_1; float *x_3_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_3_1_3; } x3; struct vector<bool, std::allocator<bool>> { unsigned long long *x_4_1_1; unsigned long long x_4_1_2; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long x_3_2_1; } x_4_1_3; } x4; struct vector<float, std::allocator<float>> { float *x_5_1_1; float *x_5_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_5_1_3; } x5; struct _RANSAC_Parameters_ { int x_6_1_1; float x_6_1_2; int x_6_1_3; float x_6_1_4; } x6; })arg1;
+ (void)updateGroupingWithQuadsOnMemory:(id)arg1 groups:(void*)arg2;
+ (id)updateSparseOpticalFlowResults:(id)arg1 homography:(struct VisionCoreHomography { struct Geometry2D_cart2D { float *x_1_1_1; float *x_1_1_2; int x_1_1_3; } x1; struct Geometry2D_cart2D { float *x_2_1_1; float *x_2_1_2; int x_2_1_3; } x2; struct vector<float, std::allocator<float>> { float *x_3_1_1; float *x_3_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_3_1_3; } x3; struct vector<bool, std::allocator<bool>> { unsigned long long *x_4_1_1; unsigned long long x_4_1_2; struct __compressed_pair<unsigned long, std::allocator<unsigned long>> { unsigned long long x_3_2_1; } x_4_1_3; } x4; struct vector<float, std::allocator<float>> { float *x_5_1_1; float *x_5_1_2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_2_1; } x_5_1_3; } x5; struct _RANSAC_Parameters_ { int x_6_1_1; float x_6_1_2; int x_6_1_3; float x_6_1_4; } x6; })arg2;

@end
