/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRVVIClient : NSObject {
    NSMutableDictionary * _deviceIDToCallbackMap;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)sharedClient;

- (void).cxx_destruct;
- (void)_recordingStateChangedNotification:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setRecordingStateCallback:(id /* block */)arg1 forDeviceID:(unsigned int)arg2;

@end
