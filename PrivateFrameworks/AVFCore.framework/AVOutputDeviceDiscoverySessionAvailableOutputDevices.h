/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject {
    AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal * _availableOutputDevices;
}

@property (nonatomic, readonly) NSArray *otherDevices;
@property (nonatomic, readonly) NSArray *recentlyUsedDevices;

- (void)_loadOutputDevices;
- (void)dealloc;
- (unsigned long long)hash;
- (id)impl;
- (id)init;
- (id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)otherDevices;
- (id)recentlyUsedDevices;

// AVOutputDeviceDiscoverySessionAvailableOutputDevices (AVOutputDeviceDiscoverySessionAvailableOutputDevices_FigEndpointImpl)

+ (id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)arg1;

@end
