/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVMediaDataRequester : NSObject {
    struct OpaqueFigSimpleMutex { } * _invalidateMutex;
    bool  _invalidatePending;
    <AVMediaDataRequesterConsumer> * _mediaDataConsumer;
    id /* block */  _requestBlock;
    NSObject<OS_dispatch_queue> * _requestQueue;
}

@property (nonatomic, readonly) id /* block */ requestBlock;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *requestQueue;

- (bool)_isInvalidatePending;
- (void)_requestMediaDataIfReady;
- (void)_setInvalidatePending;
- (void)dealloc;
- (id)init;
- (id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(id /* block */)arg3;
- (void)invalidate;
- (id /* block */)requestBlock;
- (id)requestQueue;
- (void)startRequestingMediaData;

@end
