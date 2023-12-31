/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

@interface USKLayerOffset : NSObject {
    struct SdfLayerOffset { 
        double _offset; 
        double _scale; 
    }  _layerOffset;
    double  _offset;
    double  _scale;
}

@property (nonatomic) double offset;
@property (nonatomic) double scale;

// USKLayerOffset (null)

- (id).cxx_construct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithOffset:(double)arg1 scale:(double)arg2;
- (id)initWithSdfLayerOffset:(struct SdfLayerOffset { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (double)offset;
- (double)scale;
- (struct SdfLayerOffset { double x1; double x2; })sdfLayerOffset;
- (void)setOffset:(double)arg1;
- (void)setScale:(double)arg1;

@end
