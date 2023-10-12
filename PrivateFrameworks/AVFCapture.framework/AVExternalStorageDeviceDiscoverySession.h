/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVExternalStorageDeviceDiscoverySession : NSObject {
    NSMutableArray * _externalStorageDevices;
    struct OpaqueFigSimpleMutex { } * _lock;
    NSMutableArray * _uuidOfExternalStorageDevice;
}

@property (readonly) NSArray *externalStorageDevices;

+ (void)initialize;
+ (bool)isSupported;
+ (id)sharedSession;

- (void)_reconnectToServer;
- (void)_requestAuthorization:(id /* block */)arg1;
- (int)_setupExternalStorageDeviceDiscoverySession;
- (void)_tearDownExternalStorageDeviceDiscoverySessionToReconnectToServer:(bool)arg1;
- (void)dealloc;
- (id)externalStorageDevices;
- (id)init;

@end