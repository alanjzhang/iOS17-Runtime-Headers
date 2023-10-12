/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceActionManager : NSObject <MKPlaceActionItemAppearanceDataProvider, MKPlaceActionItemFooterBuilder, MKPlaceActionManagerProtocol> {
    <_MKInfoCardAnalyticsDelegate> * _analyticsDelegate;
    MKPlaceCardActionItem * _brandStoreActionItem;
    MKPlaceCardActionItem * _callActionItem;
    TUCallProvider * _callProvider;
    MKPlaceCardActionItem * _collectionActionItem;
    MKPlaceActionDataProvider * _dataProvider;
    MKPlaceCardActionItem * _favoriteActionItem;
    MKPlaceCardActionItem * _homeActionItem;
    bool  _isCurrentLocation;
    id  _placeCardDelegate;
    bool  _placeInBookmarks;
    bool  _placeInCollections;
    bool  _placeInShortcuts;
    bool  _showContactActions;
    MKPlaceCardActionItem * _websiteActionItem;
}

@property (nonatomic) <_MKInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic, readonly) MKPlaceCardActionItem *callActionItem;
@property (nonatomic, readonly) MKPlaceCardActionItem *claimBusinessActionItem;
@property (nonatomic, readonly) MKPlaceCardActionItem *collectionActionItem;
@property (nonatomic, readonly) MKPlaceActionDataProvider *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MKPlaceCardActionItem *favoriteActionItem;
@property (nonatomic, readonly) MKPlaceCardActionItem *flyoverActionItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MKPlaceCardActionItem *homeActionItem;
@property (nonatomic) bool isCurrentLocation;
@property (nonatomic, readonly) MKPlaceCardActionItem *messageActionItem;
@property (nonatomic) id placeCardDelegate;
@property (nonatomic) bool placeInBookmarks;
@property (nonatomic) bool placeInCollections;
@property (nonatomic) bool placeInShortcuts;
@property (nonatomic, readonly) MKPlaceCardActionItem *removeMarkerItem;
@property (nonatomic, readonly) MKPlaceCardActionItem *reportAProblemAddPlaceFooterAction;
@property (nonatomic, readonly) MKPlaceCardActionItem *reportAProblemFooterAction;
@property (nonatomic, readonly) MKPlaceCardActionItem *shareActionItem;
@property (nonatomic) bool showContactActions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MKPlaceCardActionItem *websiteActionItem;

- (void).cxx_destruct;
- (void)_addInternalOnlyActions:(id)arg1;
- (bool)_canClaimThisBusiness;
- (void)_canMakeCalls:(id /* block */)arg1;
- (bool)_canShowCallAction;
- (bool)_canShowReportAProblem;
- (void)_enableStoreAction;
- (bool)_isCurrentLocationOrDroppedPin;
- (void)_launchMaps;
- (bool)_showAddPlaceFooterAction;
- (bool)_showCollectionItem;
- (bool)_showHomeShortcutItem;
- (bool)_showMapItemIdentifier;
- (bool)_showReportAProblem;
- (bool)_showReportAProblemFooterAction;
- (bool)_showWebsite;
- (id)actionItemForButtonItem:(id)arg1;
- (void)addLayoutInfoIfNeeded:(id)arg1;
- (id)addToHomeItem;
- (id)analyticsDelegate;
- (id)callActionItem;
- (id)claimBusinessActionItem;
- (id)collectionActionItem;
- (id)contact;
- (id)createContactActions;
- (id)createFooterActions;
- (id)createMenuActions;
- (id)createRowActionsWithStyle:(unsigned long long)arg1;
- (id)createSearchAlongRouteActions;
- (id)dataProvider;
- (id)delegate;
- (id)favoriteActionItem;
- (id)favoriteItemForFooter;
- (id)flyoverActionItem;
- (id)homeActionItem;
- (id)initWithDataProvider:(id)arg1;
- (bool)isCurrentLocation;
- (id)mapItem;
- (id)messageActionItem;
- (void)openURL:(id)arg1;
- (unsigned long long)options;
- (void)performAction:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)placeCardDelegate;
- (bool)placeInBookmarks;
- (bool)placeInCollections;
- (bool)placeInCollectionsForAppearance:(id)arg1;
- (bool)placeInShortcuts;
- (id)placeItem;
- (unsigned long long)placeMUIDForAppearance:(id)arg1;
- (id)removeMarkerItem;
- (id)reportAProblemAddPlaceFooterAction;
- (id)reportAProblemFooterAction;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setIsCurrentLocation:(bool)arg1;
- (void)setPlaceCardDelegate:(id)arg1;
- (void)setPlaceInBookmarks:(bool)arg1;
- (void)setPlaceInCollections:(bool)arg1;
- (void)setPlaceInShortcuts:(bool)arg1;
- (void)setShowContactActions:(bool)arg1;
- (id)shareActionItem;
- (id)shortPlacecardFooterActions;
- (bool)showContactActions;
- (id)websiteActionItem;

@end
