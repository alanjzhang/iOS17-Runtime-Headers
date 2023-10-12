/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNStatefulRequestConfiguration : VNImageBasedRequestConfiguration {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameAnalysisSpacing;
    NSUUID * _requestUUID;
}

@property struct { long long x1; int x2; unsigned int x3; long long x4; } frameAnalysisSpacing;
@property (readonly) NSUUID *requestUUID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameAnalysisSpacing;
- (id)initWithRequestClass:(Class)arg1;
- (id)requestUUID;
- (void)setFrameAnalysisSpacing:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
