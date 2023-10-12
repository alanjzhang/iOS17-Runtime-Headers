/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriLiminal.framework/SiriLiminal
 */

@interface SLODLDInputTokenParams : NSObject {
    MLMultiArray * _mlAttnMask;
    MLMultiArray * _mlInputIds;
    MLMultiArray * _mlPadMask;
    MLMultiArray * _mlTypeIds;
}

@property (nonatomic, retain) MLMultiArray *mlAttnMask;
@property (nonatomic, retain) MLMultiArray *mlInputIds;
@property (nonatomic, retain) MLMultiArray *mlPadMask;
@property (nonatomic, retain) MLMultiArray *mlTypeIds;

- (void).cxx_destruct;
- (id)initWithShape:(id)arg1;
- (id)mlAttnMask;
- (id)mlInputIds;
- (id)mlPadMask;
- (id)mlTypeIds;
- (void)populateWithTokens:(id)arg1;
- (void)setMlAttnMask:(id)arg1;
- (void)setMlInputIds:(id)arg1;
- (void)setMlPadMask:(id)arg1;
- (void)setMlTypeIds:(id)arg1;

@end
