/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNArrivalRegionTimer : NSObject {
    GEOArrivalRegion * _arrivalRegion;
    <MNArrivalRegionTimerDelegate> * _delegate;
    NSTimer * _timer;
}

@property (nonatomic) <MNArrivalRegionTimerDelegate> *delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithArrivalRegion:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateForLocation:(id)arg1;

@end
