/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMBrailleEdgeDetectorOptions : NSObject <NSSecureCoding> {
    AXMBrailleCanvasDescription * _canvasDescription;
    double  _edgeStrength;
    bool  _invert;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    double  _zoomLevel;
}

@property (nonatomic, retain) AXMBrailleCanvasDescription *canvasDescription;
@property (nonatomic) double edgeStrength;
@property (nonatomic) bool invert;
@property (nonatomic) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic) double zoomLevel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)canvasDescription;
- (id)description;
- (double)edgeStrength;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCanvasDescription:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)invert;
- (struct CGPoint { double x1; double x2; })origin;
- (void)setCanvasDescription:(id)arg1;
- (void)setEdgeStrength:(double)arg1;
- (void)setInvert:(bool)arg1;
- (void)setOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setZoomLevel:(double)arg1;
- (double)zoomLevel;

@end
