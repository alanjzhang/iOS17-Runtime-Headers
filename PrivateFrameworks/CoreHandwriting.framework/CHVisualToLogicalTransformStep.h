/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHVisualToLogicalTransformStep : CHPostprocessingStepModifyingOriginalTokens {
    int  _baseDirection;
    struct UBiDi { } * _icuBiDiTransform;
    int  _mode;
}

- (void)dealloc;
- (id)initWithBaseDirection:(int)arg1 mode:(int)arg2;
- (id)process:(id)arg1 options:(id)arg2;

@end
