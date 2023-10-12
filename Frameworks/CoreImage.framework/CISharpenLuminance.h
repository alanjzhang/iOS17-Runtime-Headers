/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CISharpenLuminance : CIFilter {
    CIImage * inputImage;
    NSNumber * inputRadius;
    NSNumber * inputSharpness;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputRadius;
@property (nonatomic, retain) NSNumber *inputSharpness;

+ (id)customAttributes;

- (bool)_isIdentity;
- (id)_kernel;
- (id)inputImage;
- (id)inputRadius;
- (id)inputSharpness;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;
- (void)setInputSharpness:(id)arg1;

@end