/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFaceMaskApply : CIFilter {
    CIVector * inputFacesCenterX;
    CIVector * inputFacesCenterY;
    CIVector * inputFacesChinX;
    CIVector * inputFacesChinY;
    CIImage * inputImage;
    CIVector * inputK0;
    CIVector * inputK1;
    CIVector * inputK2;
    CIVector * inputK3;
    NSNumber * inputK4;
    CIImage * inputParameterImage;
    NSDictionary * inputTuningParameters;
}

@property (nonatomic, copy) CIVector *inputFacesCenterX;
@property (nonatomic, copy) CIVector *inputFacesCenterY;
@property (nonatomic, copy) CIVector *inputFacesChinX;
@property (nonatomic, copy) CIVector *inputFacesChinY;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) CIVector *inputK0;
@property (nonatomic, copy) CIVector *inputK1;
@property (nonatomic, copy) CIVector *inputK2;
@property (nonatomic, copy) CIVector *inputK3;
@property (nonatomic, copy) NSNumber *inputK4;
@property (nonatomic, retain) CIImage *inputParameterImage;
@property (nonatomic, copy) NSDictionary *inputTuningParameters;

+ (id)_kernel;

- (id)inputFacesCenterX;
- (id)inputFacesCenterY;
- (id)inputFacesChinX;
- (id)inputFacesChinY;
- (id)inputImage;
- (id)inputK0;
- (id)inputK1;
- (id)inputK2;
- (id)inputK3;
- (id)inputK4;
- (id)inputParameterImage;
- (id)inputTuningParameters;
- (id)outputImage;
- (void)setInputFacesCenterX:(id)arg1;
- (void)setInputFacesCenterY:(id)arg1;
- (void)setInputFacesChinX:(id)arg1;
- (void)setInputFacesChinY:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputK0:(id)arg1;
- (void)setInputK1:(id)arg1;
- (void)setInputK2:(id)arg1;
- (void)setInputK3:(id)arg1;
- (void)setInputK4:(id)arg1;
- (void)setInputParameterImage:(id)arg1;
- (void)setInputTuningParameters:(id)arg1;

@end
