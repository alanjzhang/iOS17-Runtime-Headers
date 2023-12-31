/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRRegisterHIDDeviceMessage : MRProtocolMessage {
    MRVirtualTouchDeviceDescriptor * _deviceDescriptor;
}

@property (nonatomic, readonly, copy) MRVirtualTouchDeviceDescriptor *deviceDescriptor;

- (void).cxx_destruct;
- (id)deviceDescriptor;
- (id)initWithDeviceDescriptor:(id)arg1;
- (unsigned long long)type;

@end
