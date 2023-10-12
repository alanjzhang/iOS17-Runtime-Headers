/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextInputSessionMetaAccumulator : _UITextInputSessionAccumulator {
    NSArray * _accumulators;
    unsigned long long  _actionCountWithoutIncrease;
    long long  _lastSuccessfulIndex;
}

+ (id)accumulatorWithName:(id)arg1 accumulators:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)increaseWithActions:(id)arg1;
- (void)reset;

@end
