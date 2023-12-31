/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerEffectInnerShadow : CUIPSDLayerEffectComponent {
    short  _angle;
    int  _blendMode;
    unsigned long long  _blurSize;
    CUIColor * _color;
    unsigned long long  _distance;
    double  _opacity;
}

@property short angle;
@property int blendMode;
@property unsigned long long blurSize;
@property (retain) CUIColor *color;
@property unsigned long long distance;
@property double opacity;

- (short)angle;
- (int)blendMode;
- (unsigned long long)blurSize;
- (id)color;
- (void)dealloc;
- (unsigned long long)distance;
- (unsigned int)effectType;
- (id)init;
- (double)opacity;
- (void)setAngle:(short)arg1;
- (void)setBlendMode:(int)arg1;
- (void)setBlurSize:(unsigned long long)arg1;
- (void)setColor:(id)arg1;
- (void)setDistance:(unsigned long long)arg1;
- (void)setOpacity:(double)arg1;

// CUIPSDLayerEffectInnerShadow (CUIShapeEffectPresetLayerEffectsSupport)

- (id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (bool)updateLayerEffectPreset:(id)arg1 error:(id*)arg2;

@end
