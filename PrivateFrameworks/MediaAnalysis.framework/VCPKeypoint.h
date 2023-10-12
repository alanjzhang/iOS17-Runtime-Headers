/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPKeypoint : NSObject {
    float  _confidence;
    struct CGPoint { 
        double x; 
        double y; 
    }  _location;
}

@property (nonatomic) float confidence;
@property (nonatomic) struct CGPoint { double x1; double x2; } location;

- (float)confidence;
- (struct CGPoint { double x1; double x2; })location;
- (void)setConfidence:(float)arg1;
- (void)setLocation:(struct CGPoint { double x1; double x2; })arg1;

@end
