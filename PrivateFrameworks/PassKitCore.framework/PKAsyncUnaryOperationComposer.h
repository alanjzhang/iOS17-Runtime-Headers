/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAsyncUnaryOperationComposer : NSObject {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _operations;
}

- (void).cxx_destruct;
- (void)addOperation:(id /* block */)arg1;
- (id)evaluateWithInput:(id)arg1 completion:(id /* block */)arg2;
- (id)evaluatorWithInput:(id)arg1;
- (id)init;

@end
