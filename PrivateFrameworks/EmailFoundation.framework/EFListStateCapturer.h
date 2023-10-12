/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFListStateCapturer : NSObject {
    <EFCancelable> * _stateCaptureCancelable;
    NSObject<OS_dispatch_queue> * _stateCaptureQueue;
}

@property (nonatomic, readonly) <EFCancelable> *stateCaptureCancelable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *stateCaptureQueue;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 itemName:(id)arg2 headLimit:(unsigned long long)arg3 tailLimit:(unsigned long long)arg4 delegate:(id)arg5;
- (id)stateCaptureCancelable;
- (id)stateCaptureQueue;

@end
