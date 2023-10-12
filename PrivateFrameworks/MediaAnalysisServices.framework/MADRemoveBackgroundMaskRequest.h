/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysisServices.framework/MediaAnalysisServices
 */

@interface MADRemoveBackgroundMaskRequest : MADRequest {
    NSNumber * _imageType;
}

@property (nonatomic, copy) NSNumber *imageType;
@property (nonatomic, readonly) MADRemoveBackgroundMaskResult *result;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageType;
- (id)initWithCoder:(id)arg1;
- (id)result;
- (void)setImageType:(id)arg1;

@end