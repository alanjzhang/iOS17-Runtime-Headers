/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISpotColor : CIFilter {
    CIColor * inputCenterColor1;
    CIColor * inputCenterColor2;
    CIColor * inputCenterColor3;
    NSNumber * inputCloseness1;
    NSNumber * inputCloseness2;
    NSNumber * inputCloseness3;
    NSNumber * inputContrast1;
    NSNumber * inputContrast2;
    NSNumber * inputContrast3;
    CIImage * inputImage;
    CIColor * inputReplacementColor1;
    CIColor * inputReplacementColor2;
    CIColor * inputReplacementColor3;
}

@property (nonatomic, retain) CIImage *inputImage;

+ (id)customAttributes;

- (id)_CISpotColor;
- (id)inputImage;
- (id)outputImage;
- (void)setInputImage:(id)arg1;

@end
