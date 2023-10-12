/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFBluetoothWirelessSplitterSessionInfoMutation : NSObject <AFBluetoothWirelessSplitterSessionInfoMutating> {
    AFBluetoothWirelessSplitterSessionInfo * _base;
    NSArray * _deviceAddresses;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasState : 1; 
        unsigned int hasDeviceAddresses : 1; 
    }  _mutationFlags;
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)getDeviceAddresses;
- (long long)getState;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setDeviceAddresses:(id)arg1;
- (void)setState:(long long)arg1;

@end
