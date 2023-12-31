/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIAccelerometer : NSObject {
    struct { 
        unsigned int delegateDidAccelerate : 1; 
        unsigned int reserved : 31; 
    }  _accelerometerFlags;
    <UIAccelerometerDelegate> * _delegate;
    double  _updateInterval;
}

@property (nonatomic) <UIAccelerometerDelegate> *delegate;
@property (nonatomic) double updateInterval;

+ (id)sharedAccelerometer;

- (void).cxx_destruct;
- (void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;
- (void)_didSuspend:(id)arg1;
- (void)_startAccelerometerIfNecessary;
- (void)_stopAccelerometer;
- (void)_willResume:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setUpdateInterval:(double)arg1;
- (double)updateInterval;

@end
