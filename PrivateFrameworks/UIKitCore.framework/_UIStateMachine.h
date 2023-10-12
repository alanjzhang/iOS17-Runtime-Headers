/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStateMachine : NSObject {
    bool  _externalSpec;
    const struct { struct _UIStateMachineMeta { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct _UIStateMachineDebugging {} *x2; struct { id /* block */ x_3_1_1; struct _UIStateTransition { id /* block */ x_2_2_1; id /* block */ x_2_2_2; unsigned int x_2_2_3 : 16; unsigned int x_2_2_4 : 8; unsigned int x_2_2_5 : 8; } x_3_1_2[0]; } x3[0]; } * _spec;
    unsigned long long  _state;
}

@property (nonatomic, readonly) void*spec;
@property (nonatomic, readonly) unsigned long long state;

- (void)handleEvent:(unsigned long long)arg1 withContext:(union _UIStateContext { id x1; void *x2; void *x3; })arg2;
- (id)initWithSpec:(void*)arg1 initialState:(unsigned long long)arg2;
- (unsigned long long)state;

// _UIStateMachine (Legacy)

- (void)dealloc;
- (id)initWithStates:(unsigned long long)arg1 events:(unsigned long long)arg2 initialState:(unsigned long long)arg3;
- (void)setStateChangeObserver:(unsigned long long)arg1 observer:(id /* block */)arg2;
- (void)setStaticTransitionFromState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(id /* block */)arg3;
- (void)setTransitionHandlerForState:(unsigned long long)arg1 withEvent:(unsigned long long)arg2 transitionHandler:(id /* block */)arg3 postTransitionHandler:(id /* block */)arg4;
- (void*)spec;

@end
