/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVOutputDeviceFrecentsReader : NSObject <AVOutputDeviceFrecentsReading> {
    NSDictionary * _frecents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *deviceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)deviceIDs;
- (id)frecencyInfoForDeviceWithID:(id)arg1;
- (id)init;
- (id)initWithFrecentsFilePath:(id)arg1 error:(id*)arg2;

@end
