/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/BackgroundTasks.framework/BackgroundTasks
 */

@interface BGTask : NSObject {
    bool  __completed;
    id /* block */  __completionHandler;
    NSObject<OS_dispatch_queue> * __handlerQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  __lock;
    id /* block */  _expirationHandler;
    NSString * _identifier;
}

@property (setter=_setCompleted:, nonatomic) bool _completed;
@property (setter=_setCompletionHandler:, nonatomic, copy) id /* block */ _completionHandler;
@property (setter=_setHandlerQueue:, nonatomic, retain) NSObject<OS_dispatch_queue> *_handlerQueue;
@property (setter=_setLock:, nonatomic) struct os_unfair_lock_s { unsigned int x1; } _lock;
@property (copy) id /* block */ expirationHandler;
@property (readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (void)_callExpirationHandler;
- (bool)_completed;
- (id /* block */)_completionHandler;
- (id)_handlerQueue;
- (id)_initWithIdentifier:(id)arg1 activity:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })_lock;
- (void)_setCompleted:(bool)arg1;
- (void)_setCompletionHandler:(id /* block */)arg1;
- (void)_setHandlerQueue:(id)arg1;
- (void)_setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)_setTaskCompletedWithSuccess:(bool)arg1 actionsIfNotAlreadyCompleted:(id /* block */)arg2;
- (id /* block */)_unsafe_setTaskCompletedWithSuccess:(bool)arg1 afterDelay:(double)arg2;
- (void)dealloc;
- (id /* block */)expirationHandler;
- (id)identifier;
- (void)setExpirationHandler:(id /* block */)arg1;
- (void)setTaskCompletedWithSuccess:(bool)arg1;

@end
