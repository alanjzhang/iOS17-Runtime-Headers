/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
 */

@interface FTCServiceMonitor : NSObject {
    long long  _availability;
    int  _token;
    long long  _type;
}

@property (nonatomic, readonly) long long serviceType;

- (void)_postAvailability:(long long)arg1;
- (void)_updateAvailability;
- (void)dealloc;
- (id)initWithServiceType:(long long)arg1;
- (long long)serviceAvailability;
- (long long)serviceType;
- (void)updateAvailability;

@end
