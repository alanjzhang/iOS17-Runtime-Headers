/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDepthOfField : CIFilter {
    CIImage * inputImage;
    CIVector * inputPoint0;
    CIVector * inputPoint1;
    NSNumber * inputRadius;
    NSNumber * inputSaturation;
    NSNumber * inputUnsharpMaskIntensity;
    NSNumber * inputUnsharpMaskRadius;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_CIAlphaNormalize;
- (id)_CITiltShift;
- (id)_DistanceColored;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
