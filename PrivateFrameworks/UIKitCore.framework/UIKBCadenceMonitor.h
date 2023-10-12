/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKBCadenceMonitor : NSObject <_UIKBRTRecognizerAveragingRuleProtocol> {
    float  _cadence;
    float  _confidence;
    double  _gapAvg;
    bool  _isUserTyping;
    double  _prevTouchDown;
    int  _touchCount;
    UIDelayedAction * _touchLogTimer;
    float  _typingAvg;
}

@property (nonatomic) float cadence;
@property (nonatomic) float confidence;
@property (nonatomic) double gapAvg;
@property (nonatomic) bool isUserTyping;
@property (nonatomic) double prevTouchDown;
@property (nonatomic) int touchCount;
@property (nonatomic, retain) UIDelayedAction *touchLogTimer;
@property (nonatomic) float typingAvg;

- (void).cxx_destruct;
- (void)addTypingTouchTime:(double)arg1;
- (float)cadence;
- (float)confidence;
- (double)gapAvg;
- (id)init;
- (bool)isUserTyping;
- (void)logUserTyping:(id)arg1;
- (double)prevTouchDown;
- (id)recognizer:(id)arg1 confidenceWhenPendingTouchInfo:(id)arg2;
- (id)recognizer:(id)arg1 confidenceWhenSettingTouchInfo:(id)arg2;
- (void)reset;
- (void)setCadence:(float)arg1;
- (void)setConfidence:(float)arg1;
- (void)setGapAvg:(double)arg1;
- (void)setIsUserTyping:(bool)arg1;
- (void)setPrevTouchDown:(double)arg1;
- (void)setTouchCount:(int)arg1;
- (void)setTouchLogTimer:(id)arg1;
- (void)setTypingAvg:(float)arg1;
- (int)touchCount;
- (id)touchLogTimer;
- (float)typingAvg;
- (void)typingCadence:(double)arg1;
- (void)updateConfidenceWithGap:(double)arg1;

@end
