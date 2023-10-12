/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface MDARSessionObserver : NSObject {
    NSObject<OS_dispatch_queue> * _delegateQueue;
    struct ARSessionObserver { int (**x1)(); } * _observer;
    ARSession * _session;
}

@property (nonatomic) struct ARSessionObserver { int (**x1)(); }*observer;
@property (nonatomic) ARSession *session;

- (void).cxx_destruct;
- (id)initWithObserver:(struct ARSessionObserver { int (**x1)(); }*)arg1 onQueue:(id)arg2;
- (struct ARSessionObserver { int (**x1)(); }*)observer;
- (id)session;
- (void)setObserver:(struct ARSessionObserver { int (**x1)(); }*)arg1;
- (void)setSession:(id)arg1;

@end
