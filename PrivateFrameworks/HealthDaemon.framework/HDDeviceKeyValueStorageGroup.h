/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDeviceKeyValueStorageGroup : NSObject {
    HDDeviceContext * _deviceContext;
    NSArray * _storageEntries;
}

@property (nonatomic, readonly) HDDeviceContext *deviceContext;
@property (nonatomic, readonly) NSArray *storageEntries;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceContext;
- (id)initWithDeviceContext:(id)arg1 storageEntries:(id)arg2;
- (id)storageEntries;

@end