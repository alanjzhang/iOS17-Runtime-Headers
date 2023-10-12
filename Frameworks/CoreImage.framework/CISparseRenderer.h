/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISparseRenderer : CIFilter {
    NSNumber * inputAperture;
    NSNumber * inputApertureScaling;
    NSNumber * inputDraftMode;
    CIImage * inputImage;
    CIImage * inputMatteImage;
    NSNumber * inputScale;
    NSDictionary * inputTuningParameters;
}

@property (nonatomic, copy) NSNumber *inputAperture;
@property (nonatomic, copy) NSNumber *inputApertureScaling;
@property (nonatomic, copy) NSNumber *inputDraftMode;
@property (retain) CIImage *inputImage;
@property (retain) CIImage *inputMatteImage;
@property (nonatomic, copy) NSNumber *inputScale;
@property (nonatomic, retain) NSDictionary *inputTuningParameters;

+ (id)customAttributes;

- (id)_kernel:(bool)arg1 alpha:(bool)arg2;
- (id)_lutKernel:(bool)arg1 alpha:(bool)arg2;
- (id)_packageParams:(bool)arg1 extent:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 image:(id)arg3 haveAlpha:(bool)arg4;
- (bool)_useD2XRenderer;
- (id)baseVecsLUT:(unsigned int)arg1;
- (id)baseVecsLUTGenerator;
- (id)inputAperture;
- (id)inputApertureScaling;
- (id)inputDraftMode;
- (id)inputImage;
- (id)inputMatteImage;
- (id)inputScale;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputAperture:(id)arg1;
- (void)setInputApertureScaling:(id)arg1;
- (void)setInputDraftMode:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputMatteImage:(id)arg1;
- (void)setInputScale:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;
- (id)stepsLUT:(unsigned int)arg1;
- (id)stepsLUTGenerator;

@end
