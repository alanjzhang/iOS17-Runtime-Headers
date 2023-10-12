/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventURLDetailItem : EKEventDetailItem {
    UITableViewCell * _cell;
    SGSuggestedEventLaunchInfo * _launchInfo;
    NSURL * _url;
}

+ (Class)_SGSuggestionsServiceClass;

- (void).cxx_destruct;
- (void)_updateWithChanges;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (bool)configureWithCalendar:(id)arg1 preview:(bool)arg2;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 forceUpdate:(bool)arg3;
- (bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1;
- (void)reset;

@end
