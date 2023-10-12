/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailAttendeesCell : EKEventDetailCell {
    NSObject<EKEventDetailAttendeeCellDelegate> * _attendeeCellDelegate;
    EKEventDetailAttendeesListView * _attendeesListView;
    NSArray * _cachedAttendeesWithoutOrganizerAndLocations;
    UILabel * _countLabel;
    UIImageView * _disclosure;
    NSLayoutConstraint * _listHeight;
    bool  _loadingAttendees;
    NSObject<OS_dispatch_queue> * _sortAttendeesQueue;
    UILabel * _titleLabel;
    UIViewController * _viewController;
}

@property NSObject<EKEventDetailAttendeeCellDelegate> *attendeeCellDelegate;
@property (nonatomic, readonly) bool loadingAttendees;
@property UIViewController *viewController;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKitUI.framework/EventKitUI

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_attendeesDidFinishLoadingForTest;
- (id)_attendeesListView;
- (id)_attendeesWithoutOrganizerAndLocations;
- (void)_setAttendees:(id)arg1;
- (id)attendeeCellDelegate;
- (double)displayHeight;
- (double)footerInset;
- (double)headerInset;
- (id)initWithEvent:(id)arg1 editable:(bool)arg2;
- (void)layoutForWidth:(double)arg1 position:(int)arg2;
- (double)listToTitle;
- (bool)loadingAttendees;
- (void)setAttendeeCellDelegate:(id)arg1;
- (void)setViewController:(id)arg1;
- (bool)update;
- (id)viewController;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/EventKitUIFramework.axbundle/EventKitUIFramework

- (id)_axStringForParticipants:(id)arg1;
- (id)accessibilityLabel;
- (id)accessibilityValue;

// EKEventDetailAttendeesCell (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
