/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFNotifyObserver : NSObject <AFInvalidating> {
    <AFNotifyObserverDelegate> * _delegate;
    struct _flags { 
        unsigned int delegateRespondsToDidReceiveNotificationWithToken : 1; 
        unsigned int delegateRespondsToDidChangeStateFromTo : 1; 
    }  _flags;
    NSString * _name;
    unsigned long long  _options;
    NSObject<OS_dispatch_queue> * _queue;
    int  _registrationToken;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleNotificationWithToken:(int)arg1;
- (void)_invalidate;
- (void)_updateStateWithToken:(int)arg1;
- (void)dealloc;
- (id)description;
- (void)getStateWithCompletion:(id /* block */)arg1;
- (id)initWithName:(id)arg1 options:(unsigned long long)arg2 queue:(id)arg3 delegate:(id)arg4;
- (void)invalidate;
- (id)name;
- (unsigned long long)state;

@end
