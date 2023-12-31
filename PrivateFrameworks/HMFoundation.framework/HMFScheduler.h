/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFScheduler : HMFObject {
    NSOperationQueue * _operationQueue;
}

+ (id)defaultScheduler;
+ (id)mainScheduler;

- (void).cxx_destruct;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)performBlock:(id /* block */)arg1;
- (id)performOperation:(id)arg1;
- (id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (id)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 qualityOfService:(long long)arg4;
- (id)performWithQualityOfService:(long long)arg1 block:(id /* block */)arg2;

@end
