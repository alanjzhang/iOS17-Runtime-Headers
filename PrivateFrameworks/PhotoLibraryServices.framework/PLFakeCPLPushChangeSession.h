/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFakeCPLPushChangeSession : NSObject {
    PLFakeCPLLibraryManager * _libraryManager;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)forwardingTargetForSelector:(SEL)arg1;

- (void).cxx_destruct;
- (void)commitChangeBatch:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finalizeWithCompletionHandler:(id /* block */)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithLibraryManager:(id)arg1 queue:(id)arg2;

@end
