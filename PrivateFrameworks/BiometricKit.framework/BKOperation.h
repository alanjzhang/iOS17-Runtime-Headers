/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKOperation : NSObject {
    <BKOperationDelegate> * _delegate;
    BKDevice * _device;
    NSObject<OS_dispatch_queue> * _queue;
    long long  _state;
}

@property (nonatomic) <BKOperationDelegate> *delegate;
@property (nonatomic, readonly) BKDevice *device;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (void)cancel;
- (id)delegate;
- (id)device;
- (id)queue;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (bool)startWithError:(id*)arg1;
- (void)startWithReply:(id /* block */)arg1;
- (long long)state;
- (id)userPresentWithError:(id*)arg1;

@end
