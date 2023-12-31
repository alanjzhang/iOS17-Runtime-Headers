/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDither : CIFilter {
    CIImage * inputImage;
    NSNumber * inputIntensity;
}

@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputIntensity;

+ (id)_kernelDither;
+ (id)customAttributes;

- (id)inputImage;
- (id)inputIntensity;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputIntensity:(id)arg1;

@end
