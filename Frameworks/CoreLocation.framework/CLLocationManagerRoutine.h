/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationManagerRoutine : NSObject {
    _CLLocationManagerRoutineProxy * _locationManagerRoutineProxy;
}

@property (nonatomic) <CLLocationManagerDelegate> *delegate;
@property (nonatomic) <CLInertialDataManagerDelegate> *inertialDelegate;
@property (nonatomic, retain) _CLLocationManagerRoutineProxy *locationManagerRoutineProxy;

- (void)dealloc;
- (id)delegate;
- (id)inertialDelegate;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)locationManagerRoutineProxy;
- (void)setDelegate:(id)arg1;
- (void)setInertialDelegate:(id)arg1;
- (void)setLocationManagerRoutineProxy:(id)arg1;
- (void)startUpdatingLocation;
- (void)stopUpdatingLocation;

@end
