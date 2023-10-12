/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLFairPlayDecryptSessionManager : NSObject {
    NSMutableDictionary * _modelPathToSessionID;
    NSObject<OS_dispatch_queue> * _syncQueue;
}

@property (readonly, retain) NSMutableDictionary *modelPathToSessionID;
@property (readonly, retain) NSObject<OS_dispatch_queue> *syncQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)modelPathToSessionID;
- (bool)startDecryptionOfModelAtPath:(id)arg1 usingKeyBlob:(id)arg2 teamIdentifier:(id)arg3 error:(id*)arg4;
- (bool)stopDecryptionOfModelAtPath:(id)arg1 error:(id*)arg2;
- (id)syncQueue;

@end