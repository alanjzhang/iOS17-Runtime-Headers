/* Generated by RuntimeBrowser.
 */

@protocol MTMaterialFiltering <NSObject>

@required

- (double)backdropScale;
- (NSString *)blurInputQuality;
- (double)blurRadius;
- (double)brightness;
- (struct CAColorMatrix { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; float x19; float x20; })colorMatrix;
- (NSDictionary *)curvesValues;
- (bool)isAverageColorEnabled;
- (bool)isBlurAtEnd;
- (double)luminanceAmount;
- (NSArray *)luminanceValues;
- (double)saturation;
- (NSString *)variableBlurInputMaskName;
- (double)zoom;

@end
