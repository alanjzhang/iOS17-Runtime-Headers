/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreHaptics.framework/CoreHaptics
 */

@interface CHHapticDynamicParameter : NSObject {
    NSString * _param;
    double  _time;
    float  _value;
}

@property (readonly) NSString *parameterID;
@property double relativeTime;
@property float value;

- (void).cxx_destruct;
- (id)init;
- (id)initWithParameterID:(id)arg1 value:(float)arg2 relativeTime:(double)arg3;
- (id)parameterID;
- (double)relativeTime;
- (void)setRelativeTime:(double)arg1;
- (void)setValue:(float)arg1;
- (float)value;

@end
