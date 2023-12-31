/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
 */

@interface CPAnalyticsLogEventMatcher : CPAnalyticsEventMatcher {
    CPAnalyticsEventMatcher * _eventMatcher;
    NSArray * _eventPropertiesToLog;
    NSArray * _eventPublicPropertiesToLog;
    NSString * _eventTypeLabel;
    bool  _shouldLogEventName;
}

@property (nonatomic, readonly) NSArray *eventPropertiesToLog;
@property (nonatomic, readonly) NSArray *eventPublicPropertiesToLog;
@property (nonatomic, readonly) NSString *eventTypeLabel;
@property (nonatomic, readonly) bool shouldLogEventName;

- (void).cxx_destruct;
- (bool)doesMatch:(id)arg1;
- (id)eventPropertiesToLog;
- (id)eventPublicPropertiesToLog;
- (id)eventTypeLabel;
- (id)init;
- (id)initWithConfig:(id)arg1;
- (bool)shouldLogEventName;

@end
