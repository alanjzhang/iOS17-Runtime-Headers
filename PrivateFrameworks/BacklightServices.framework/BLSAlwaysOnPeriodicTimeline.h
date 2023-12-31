/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices
 */

@interface BLSAlwaysOnPeriodicTimeline : BLSAlwaysOnTimeline {
    double  _periodicInterval;
    NSDate * _periodicStart;
}

- (void).cxx_destruct;
- (id)initWithUpdateInterval:(double)arg1 startDate:(id)arg2 identifier:(id)arg3 configure:(id /* block */)arg4;
- (long long)requestedFidelityForStartEntryInDateInterval:(id)arg1 withPreviousEntry:(id)arg2;
- (id)unconfiguredEntriesForDateInterval:(id)arg1 previousEntry:(id)arg2;

@end
