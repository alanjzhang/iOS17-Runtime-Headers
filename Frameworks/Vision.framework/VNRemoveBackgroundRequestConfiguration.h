/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNRemoveBackgroundRequestConfiguration : VNImageBasedRequestConfiguration {
    bool  _cropResult;
    bool  _performInPlace;
    bool  _returnMask;
}

@property (nonatomic) bool cropResult;
@property (nonatomic) bool performInPlace;
@property (nonatomic) bool returnMask;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)cropResult;
- (id)initWithRequestClass:(Class)arg1;
- (bool)performInPlace;
- (bool)returnMask;
- (void)setCropResult:(bool)arg1;
- (void)setPerformInPlace:(bool)arg1;
- (void)setReturnMask:(bool)arg1;

@end
