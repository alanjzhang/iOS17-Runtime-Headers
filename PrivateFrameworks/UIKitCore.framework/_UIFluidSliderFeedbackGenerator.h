/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFluidSliderFeedbackGenerator : UIFeedbackGenerator <_UIFluidSliderFeedbackPlayer>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)_configurationClass;

- (bool)_canPlayDetentOnCurrentDevice;
- (id)_sliderConfig;
- (id)initWithCoordinateSpace:(id)arg1;
- (bool)playFeedback:(long long)arg1 forValue:(double)arg2;

@end
