/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRDeviceDiscoveryController : NSObject

@property (nonatomic, readonly) NSArray *devices;

+ (id)sharedInstance;

- (void)begin;
- (id)devices;
- (void)end;
- (id)init;
- (void)overrideSignalStrengthLimit:(long long)arg1;

@end
