/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MTLSimDriver.framework/MTLSimDriver
 */

@interface MTLSimSamplerState : _MTLSamplerState <MTLSamplerStateSPI, MTLSerializerSamplerState> {
    unsigned int  _reference;
    unsigned long long  _uniqueIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long gpuAddress;
@property (readonly) unsigned long long gpuHandle;
@property (readonly) struct MTLResourceID { unsigned long long x1; } gpuResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic, readonly) unsigned long long resourceIndex;
@property (readonly) Class superclass;
@property (readonly) unsigned long long uniqueIdentifier;

- (void)dealloc;
- (id)initWithDescriptor:(id)arg1 reference:(unsigned int)arg2 device:(id)arg3;
- (unsigned int)samplerRef;
- (unsigned long long)uniqueIdentifier;

@end
