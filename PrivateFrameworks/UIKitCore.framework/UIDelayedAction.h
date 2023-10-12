/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDelayedAction : NSObject {
    SEL  m_action;
    bool  m_canceled;
    double  m_delay;
    NSString * m_runLoopMode;
    NSDate * m_startDate;
    id  m_target;
    NSTimer * m_timer;
    id  m_userInfo;
}

@property (readonly) bool _canceled;
@property (readonly) NSDate *_startDate;
@property (retain) id target;
@property (retain) id userInfo;

- (void).cxx_destruct;
- (bool)_canceled;
- (id)_startDate;
- (void)cancel;
- (void)dealloc;
- (double)delay;
- (id)init;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 userInfo:(id)arg3 delay:(double)arg4 mode:(id)arg5;
- (bool)scheduled;
- (void)setTarget:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)target;
- (void)timerFired:(id)arg1;
- (void)touch;
- (void)touchWithDelay:(double)arg1;
- (void)unschedule;
- (id)userInfo;

@end
