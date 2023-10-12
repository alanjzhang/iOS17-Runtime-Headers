/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSBinaryPromise : NSObject {
    AMSMutablePromise * _backingPromise;
}

@property (nonatomic, retain) AMSMutablePromise *backingPromise;

+ (id)_globalPromiseStorage;
+ (id)_globalPromiseStorageAccessQueue;
+ (id)promiseWithAll:(id)arg1;
+ (id)promiseWithAny:(id)arg1;
+ (id)promiseWithError:(id)arg1;
+ (id)promiseWithFlattenedPromises:(id)arg1;
+ (id)promiseWithPromise:(id)arg1;
+ (id)promiseWithSuccess;

- (void).cxx_destruct;
- (void)_removeFromGlobalPromiseStorage;
- (void)addErrorBlock:(id /* block */)arg1;
- (void)addFinishBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id)backingPromise;
- (id)catchWithBlock:(id /* block */)arg1;
- (id /* block */)completionHandlerAdapter;
- (id)continueWithBlock:(id /* block */)arg1;
- (id)init;
- (id)promiseAdapter;
- (void)resultWithCompletion:(id /* block */)arg1;
- (bool)resultWithError:(id*)arg1;
- (void)resultWithTimeout:(double)arg1 completion:(id /* block */)arg2;
- (bool)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (void)setBackingPromise:(id)arg1;
- (id)thenWithBlock:(id /* block */)arg1;
- (void)waitUntilFinished;
- (void)waitUntilFinishedWithTimeout:(double)arg1;

// AMSBinaryPromise (AppleMediaServices_Deprecated)

- (bool)cancel;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithPromise:(id)arg1;
- (bool)finishWithSuccess;
- (bool)finishWithSuccess:(bool)arg1 error:(id)arg2;

@end
