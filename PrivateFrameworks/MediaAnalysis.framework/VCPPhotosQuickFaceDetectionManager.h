/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPPhotosQuickFaceDetectionManager : NSObject {
    VCPFaceAnalyzer * _faceAnalyzer;
    PHPhotoLibrary * _photoLibrary;
}

- (void).cxx_destruct;
- (int)_persistFaces:(id)arg1 forAsset:(id)arg2;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (int)processAsset:(id)arg1;

@end