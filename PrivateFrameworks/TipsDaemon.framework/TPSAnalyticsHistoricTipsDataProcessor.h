/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
 */

@interface TPSAnalyticsHistoricTipsDataProcessor : TPSAnalyticsProcessor {
    NSDate * _currentDate;
}

- (void).cxx_destruct;
- (unsigned long long)_daysBetweenDate:(id)arg1 andOtherDate:(id)arg2;
- (id)_furthestLookbackDate;
- (bool)_shouldProceedWithCrunching;
- (id)init;
- (void)processAnalytics:(id /* block */)arg1;
- (void)resetAnalytics;
- (void)updateDisplayedCount:(long long*)arg1 andFrequencyControlCount:(long long*)arg2 forTipStatus:(id)arg3 andLookbackDate:(id)arg4;

@end
