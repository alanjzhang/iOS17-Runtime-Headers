/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAreaHistogram : CIFilter {
    NSNumber * inputCount;
    CIVector * inputExtent;
    CIImage * inputImage;
    NSNumber * inputScale;
}

@property (nonatomic, retain) NSNumber *inputCount;
@property (nonatomic, retain) CIVector *inputExtent;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, retain) NSNumber *inputScale;

+ (id)customAttributes;

- (bool)_inputsAreOK;
- (struct IRect { struct IPoint { long long x_1_1_1; long long x_1_1_2; } x1; struct ISize { unsigned long long x_2_1_1; unsigned long long x_2_1_2; } x2; })_netExtent;
- (id)inputCount;
- (id)inputExtent;
- (id)inputImage;
- (id)inputScale;
- (id)outputData;
- (id)outputImage;
- (id)outputImageNonMPS;
- (void)setInputCount:(id)arg1;
- (void)setInputExtent:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputScale:(id)arg1;

// CIAreaHistogram (MPS)

- (id)outputImageMPS;

@end
