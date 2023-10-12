/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VisualIntelligence.framework/VisualIntelligence
 */

@interface VIAnalytics : NSObject {
    VIAEventCache * _eventCache;
    NSDictionary * _feedbackNameToLoggerMap;
    VIAFeedbackSubmitter * _feedbackSubmitter;
    NSArray * _loggers;
    NSObject<OS_dispatch_queue> * _serialQueue;
    <VIAnalyticsTestingDelegate> * _testingDelegate;
}

@property (nonatomic, readonly) VIAFeedbackSubmitter *feedbackSubmitter;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) <VIAnalyticsTestingDelegate> *testingDelegate;

+ (void)logEvent:(id)arg1;
+ (id)sharedAnalytics;

- (void).cxx_destruct;
- (void)_logEvent:(id)arg1;
- (void)_performLogEvent:(id)arg1;
- (id)feedbackSubmitter;
- (id)initWithFeedbackSubmitter:(id)arg1;
- (id)serialQueue;
- (void)setTestingDelegate:(id)arg1;
- (id)testingDelegate;

@end
