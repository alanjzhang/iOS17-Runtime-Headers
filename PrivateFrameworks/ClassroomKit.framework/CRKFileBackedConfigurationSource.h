/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFileBackedConfigurationSource : NSObject <CRKConfigurationSource> {
    <CRKFileBackedConfigurationSourceDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * mCallbackQueue;
    NSOperationQueue * mFileOperationQueue;
    NSURL * mFileURL;
}

@property (readonly, copy) NSString *debugDescription;
@property <CRKFileBackedConfigurationSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)delegateDidDeleteConfigurationAtURL:(id)arg1 inDirectory:(id)arg2;
- (bool)deleteConfigurationAtURL:(id)arg1 inDirectory:(id)arg2 error:(id*)arg3;
- (id)directoryURL;
- (void)executeIntents:(id)arg1 accessBlock:(id /* block */)arg2;
- (void)fetchConfiguration:(id /* block */)arg1;
- (id)init;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 callbackQueue:(id)arg2;
- (void)invokeCompletionBlock:(id /* block */)arg1 withConfiguration:(id)arg2 error:(id)arg3;
- (void)invokeCompletionBlock:(id /* block */)arg1 withError:(id)arg2;
- (bool)isReadErrorBenign:(id)arg1;
- (void)setConfiguration:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;

@end
