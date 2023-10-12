/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPBTLEReachabilityScanTuple : HMFObject {
    id /* block */  _completion;
    NSString * _identifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)reachabilityScanTupleWithCompletion:(id /* block */)arg1 workQueue:(id)arg2 identifier:(id)arg3;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)identifier;
- (id)queue;

@end
