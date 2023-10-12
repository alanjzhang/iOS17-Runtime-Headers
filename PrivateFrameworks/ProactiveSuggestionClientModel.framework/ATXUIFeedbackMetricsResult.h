/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
 */

@interface ATXUIFeedbackMetricsResult : NSObject {
    ATXUIFeedbackMetricsResultSection * _sectionForEngagedSuggestions;
    ATXUIFeedbackMetricsResultSection * _sectionForRejectedSuggestions;
    ATXUIFeedbackMetricsResultSection * _sectionForShownSuggestions;
    ATXTrendPlot * _trendPlot;
}

@property (nonatomic, readonly) ATXUIFeedbackMetricsResultSection *sectionForEngagedSuggestions;
@property (nonatomic, readonly) ATXUIFeedbackMetricsResultSection *sectionForRejectedSuggestions;
@property (nonatomic, readonly) ATXUIFeedbackMetricsResultSection *sectionForShownSuggestions;
@property (nonatomic, readonly) ATXTrendPlot *trendPlot;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSpecification:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXUIFeedbackMetricsResult:(id)arg1;
- (id)sectionForEngagedSuggestions;
- (id)sectionForRejectedSuggestions;
- (id)sectionForShownSuggestions;
- (id)trendPlot;

@end
