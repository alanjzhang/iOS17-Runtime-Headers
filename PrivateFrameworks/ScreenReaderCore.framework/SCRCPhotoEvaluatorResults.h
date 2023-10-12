/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorResults : NSObject {
    SCRCPhotoEvaluatorResult * _blurResult;
    SCRCPhotoEvaluatorResult * _colorResult;
    SCRCPhotoEvaluatorResult * _luminanceResult;
}

@property (nonatomic, readonly) SCRCPhotoEvaluatorResult *blurResult;
@property (nonatomic, readonly) SCRCPhotoEvaluatorResult *colorResult;
@property (nonatomic, readonly) SCRCPhotoEvaluatorResult *luminanceResult;

- (void).cxx_destruct;
- (id)blurResult;
- (id)colorResult;
- (id)initWithBlurResult:(id)arg1 colorResult:(id)arg2 luminanceResult:(id)arg3;
- (id)luminanceResult;

@end
