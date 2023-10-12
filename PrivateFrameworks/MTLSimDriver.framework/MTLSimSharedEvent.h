/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MTLSimDriver.framework/MTLSimDriver
 */

@interface MTLSimSharedEvent : _MTLObjectWithLabel <MTLSharedEventSPI, MTLSimEvent> {
    MTLSimDevice * _device;
    unsigned int  _reference;
    unsigned long long  _signaledValue;
}

@property (nonatomic, readonly) IOSurfaceSharedEvent *IOSurfaceSharedEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property unsigned long long signaledValue;
@property (readonly) Class superclass;
@property (readonly) bool supportsRollback;

- (id)IOSurfaceSharedEvent;
- (void)dealloc;
- (id)device;
- (unsigned int)eventRef;
- (id)initWithDevice:(id)arg1 reference:(unsigned int)arg2;
- (id)newSharedEventHandle;
- (void)notifyListener:(id)arg1 atValue:(unsigned long long)arg2 block:(id /* block */)arg3;
- (void)setSignaledValue:(unsigned long long)arg1;
- (unsigned long long)signaledValue;
- (bool)supportsRollback;
- (bool)waitUntilSignaledValue:(unsigned long long)arg1 timeoutMS:(unsigned long long)arg2;

@end
