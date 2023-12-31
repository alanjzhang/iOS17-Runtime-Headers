/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CITileFilter : CIFilter {
    NSNumber * inputAngle;
    CIVector * inputCenter;
    CIImage * inputImage;
    NSNumber * inputWidth;
}

@property (nonatomic, retain) NSNumber *inputAngle;
@property (nonatomic, retain) CIVector *inputCenter;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputWidth;

+ (id)customAttributes;

- (id)_croppedCenterPixelImage;
- (id)_kernel;
- (id)inputAngle;
- (id)inputCenter;
- (id)inputImage;
- (id)inputWidth;
- (void)setInputAngle:(id)arg1;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputWidth:(id)arg1;

@end
