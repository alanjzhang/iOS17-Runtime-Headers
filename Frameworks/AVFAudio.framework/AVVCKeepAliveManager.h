/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AVFAudio.framework/AVFAudio
 */

@interface AVVCKeepAliveManager : NSObject {
    struct AVVCKeepAliveImpl { int (**x1)(); } * _impl;
    NSObject<OS_dispatch_queue> * mKeepAliveDispatchQueue;
}

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)createWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)destroyWithCompletion:(id /* block */)arg1;
- (id)getDispatchQueue;
- (id)init;
- (void)startWithCompletion:(id /* block */)arg1;
- (void)stopWithCompletion:(id /* block */)arg1;

@end
