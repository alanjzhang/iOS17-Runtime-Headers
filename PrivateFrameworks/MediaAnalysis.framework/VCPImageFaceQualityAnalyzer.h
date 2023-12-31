/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPImageFaceQualityAnalyzer : VCPImageAnalyzer {
    NSMutableArray * _faceQualityScores;
}

@property (retain) NSMutableArray *faceQualityScores;

- (void).cxx_destruct;
- (int)analyzeDetectedFaces:(struct __CVBuffer { }*)arg1 faceResults:(id)arg2 cancel:(id /* block */)arg3;
- (void)dealloc;
- (id)faceQualityScores;
- (void)setFaceQualityScores:(id)arg1;

@end
