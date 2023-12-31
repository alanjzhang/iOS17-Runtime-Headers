/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSAnalyticsEventAnimationLoadTime : TPSAnalyticsEvent {
    double  _animationLoadTime;
    NSString * _tipID;
}

@property (nonatomic) double animationLoadTime;
@property (nonatomic, retain) NSString *tipID;

+ (id)eventWithTipID:(id)arg1 animationLoadTime:(double)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithTipID:(id)arg1 animationLoadTime:(double)arg2;
- (double)animationLoadTime;
- (void)encodeWithCoder:(id)arg1;
- (id)eventName;
- (id)initWithCoder:(id)arg1;
- (id)mutableAnalyticsEventRepresentation;
- (void)setAnimationLoadTime:(double)arg1;
- (void)setTipID:(id)arg1;
- (id)tipID;

@end
