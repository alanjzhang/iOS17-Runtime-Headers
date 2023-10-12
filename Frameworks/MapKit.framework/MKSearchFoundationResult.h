/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKSearchFoundationResult : SFSearchResult <MKLocationManagerObserver> {
    SFActionItem * _action;
    id  _attributionObserver;
    NSBundle * _bundle;
    NSString * _bundleID;
    NSArray * _descriptions;
    MKSearchFoundationRichText * _fourthLineDisplayedText;
    unsigned long long  _iconSize;
    MKLocationManager * _locationManager;
    MKMapItem * _mapItem;
    NSData * _mapsData;
    unsigned long long  _mksfResultType;
    bool  _optionSmallerScreen;
    MKSearchFoundationRichText * _secondLineDisplayedText;
    MKSearchFoundationBusinessHoursAndDistanceRichText * _thirdLineDisplayedText;
    NSMutableArray * _thirdLineText;
    SFImage * _thumbnail;
    SFText * _title;
}

@property (nonatomic, retain) id attributionObserver;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, copy) NSString *bundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) MKSearchFoundationRichText *fourthLineDisplayedText;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic, retain) MKLocationManager *locationManager;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic, retain) NSData *mapsData;
@property (nonatomic) unsigned long long mksfResultType;
@property (nonatomic) bool optionSmallerScreen;
@property (nonatomic, retain) MKSearchFoundationRichText *secondLineDisplayedText;
@property (readonly) Class superclass;
@property (nonatomic, retain) MKSearchFoundationBusinessHoursAndDistanceRichText *thirdLineDisplayedText;
@property (nonatomic, retain) NSMutableArray *thirdLineText;

+ (id)styledStringFromStringArray:(id)arg1;

- (void).cxx_destruct;
- (id)_appleRatingsDescription;
- (id)_brandURL;
- (id)_businessAddress;
- (id)_businessCategory;
- (id)_businessHoursAndDistance;
- (id)_businessReviewText;
- (void)_commonInit;
- (id)_defaultRichTextItems;
- (bool)_isSmallerScreen;
- (void)_locationApprovalDidChange;
- (id)_populateAppClipData:(id)arg1;
- (id)_populateButtonItem:(id)arg1 imageName:(id)arg2 command:(id)arg3;
- (id)_populateButtonItemsAndCommands;
- (id)action;
- (id)attributionObserver;
- (id)bundle;
- (id)bundleID;
- (void)dealloc;
- (id)descriptions;
- (id)fourthLineDisplayedText;
- (unsigned long long)iconSize;
- (id)initWithMapsData:(id)arg1 iconSize:(unsigned long long)arg2 bundleID:(id)arg3;
- (id)locationManager;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)mapItem;
- (id)mapsData;
- (unsigned long long)mksfResultType;
- (bool)optionSmallerScreen;
- (id)secondLineDisplayedText;
- (void)setAction:(id)arg1;
- (void)setAttributionObserver:(id)arg1;
- (void)setBundle:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDescriptions:(id)arg1;
- (void)setFourthLineDisplayedText:(id)arg1;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setLocationManager:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setMksfResultType:(unsigned long long)arg1;
- (void)setOptionSmallerScreen:(bool)arg1;
- (void)setSecondLineDisplayedText:(id)arg1;
- (void)setThirdLineDisplayedText:(id)arg1;
- (void)setThirdLineText:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)thirdLineDisplayedText;
- (id)thirdLineText;
- (id)thumbnail;
- (id)title;

@end
