/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKWristDetectionSettingManagerObserverBridge : NSObject <HKWristDetectionSettingManagerObserver> {
    HKObserverBridgeHandle * _handle;
}

@property (nonatomic, readonly) HKObserverBridgeHandle *handle;

- (void).cxx_destruct;
- (id)handle;
- (id)initWithHandle:(id)arg1;
- (void)wristDetectionSettingManagerDidObserveWristDetectChange:(id)arg1;

@end