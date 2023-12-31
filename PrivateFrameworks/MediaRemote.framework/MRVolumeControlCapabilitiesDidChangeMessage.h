/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage

@property (nonatomic, readonly) unsigned int capabilities;
@property (nonatomic, readonly) NSString *endpointUID;
@property (nonatomic, readonly) NSString *outputDeviceUID;

- (unsigned int)capabilities;
- (id)endpointUID;
- (id)initWithCapabilities:(unsigned int)arg1 endpointUID:(id)arg2 outputDeviceUID:(id)arg3;
- (id)outputDeviceUID;
- (unsigned long long)type;

@end
