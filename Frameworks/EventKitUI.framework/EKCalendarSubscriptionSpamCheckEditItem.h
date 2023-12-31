/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKCalendarSubscriptionSpamCheckEditItem : EKCalendarEditItem {
    UITableViewCell * _cell;
    NSURL * _currentURL;
    bool  _inThrottlePeriod;
    int  _state;
    <EKCalendarSubscriptionSpamCheckEditItemDelegate> * _subscriptionSpamDelegate;
}

@property (nonatomic) <EKCalendarSubscriptionSpamCheckEditItemDelegate> *subscriptionSpamDelegate;

- (void).cxx_destruct;
- (void)_receivedSpamCheckResult:(bool)arg1 forURL:(id)arg2;
- (void)_sendSpamCheckRequest;
- (void)_setState:(int)arg1;
- (void)_throttlePeriodEnded;
- (void)_updateUI;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfSubitems;
- (void)setSubscriptionSpamDelegate:(id)arg1;
- (void)setURLToCheck:(id)arg1;
- (id)subscriptionSpamDelegate;

@end
