/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOPlaceItem : GEOBaseMapItem <GEOMapItem> {
    GEOAddressObject * _addressObject;
    geo_isolater * _lazyIvarIsolater;
    GEOPlace * _place;
    GEOPlaceResult * _placeResult;
}

@property (getter=_additionalPlaceInfos, nonatomic, readonly) NSArray *additionalPlaceInfos;
@property (nonatomic, readonly) NSDictionary *addressDictionary;
@property (getter=_addressGeocodeAccuracy, nonatomic, readonly) int addressGeocodeAccuracy;
@property (getter=_allPhotoAttributions, nonatomic, readonly) NSArray *allPhotoAttributions;
@property (getter=_alternateSearchableNames, nonatomic, readonly) NSArray *alternateSearchableNames;
@property (getter=_amenities, nonatomic, readonly) NSArray *amenities;
@property (getter=_annotatedItemList, nonatomic, readonly) <GEOAnnotatedItemList> *annotatedItemList;
@property (getter=_appleRatings, nonatomic, readonly) NSArray *appleRatings;
@property (getter=_areaHighlightId, nonatomic, readonly) unsigned long long areaHighlightId;
@property (getter=_areaInMeters, nonatomic, readonly) double areaInMeters;
@property (nonatomic, readonly) NSArray *areasOfInterest;
@property (getter=_associatedApp, nonatomic, readonly) GEOAssociatedApp *associatedApp;
@property (getter=_attribution, nonatomic, readonly) GEOMapItemPlaceAttribution *attribution;
@property (getter=_bestAvailableCountryCode, nonatomic, readonly) NSString *bestAvailableCountryCode;
@property (getter=_brandMUID, nonatomic, readonly) unsigned long long brandMUID;
@property (getter=_browseCategories, nonatomic, readonly) NSArray *browseCategories;
@property (nonatomic, readonly) GEOBusinessAssets *businessAssets;
@property (getter=_businessHours, nonatomic, readonly) NSArray *businessHours;
@property (getter=_businessURL, nonatomic, readonly) NSString *businessURL;
@property (nonatomic, readonly) double cachingRadiusMeters;
@property (getter=_canDownloadMorePhotos, nonatomic, readonly) bool canDownloadMorePhotos;
@property (getter=_captionedPhotoAlbums, nonatomic, readonly) NSArray *captionedPhotoAlbums;
@property (nonatomic, readonly) struct { double x1; double x2; } centerCoordinate;
@property (getter=_childItems, nonatomic, readonly) NSArray *childItems;
@property (getter=_clientAttributes, nonatomic, readonly) GEOMapItemClientAttributes *clientAttributes;
@property (nonatomic, readonly) int contactAddressType;
@property (nonatomic, readonly) bool contactIsMe;
@property (nonatomic, readonly) NSString *contactName;
@property (nonatomic, readonly) NSString *contactSpokenName;
@property (getter=_containedPlace, nonatomic, readonly) GEOMapItemContainedPlace *containedPlace;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (getter=_customIconID, nonatomic, readonly) unsigned long long customIconID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOMapItemDetourInfo *detourInfo;
@property (getter=_disambiguationName, nonatomic, readonly) NSString *disambiguationName;
@property (nonatomic, readonly) GEOMapRegion *displayMapRegion;
@property (nonatomic, readonly) GEOMapRegion *displayMapRegionOrNil;
@property (nonatomic, readonly) float displayMaxZoom;
@property (nonatomic, readonly) float displayMinZoom;
@property (getter=isDisputed, nonatomic, readonly) bool disputed;
@property (getter=_enableRAPLightweightFeedback, nonatomic, readonly) bool enableRAPLightweightFeedback;
@property (getter=_enclosingPlace, nonatomic, readonly) GEOEnclosingPlace *enclosingPlace;
@property (nonatomic, readonly) NSData *encodedData;
@property (getter=_encyclopedicInfo, nonatomic, readonly) <GEOEncyclopedicInfo> *encyclopedicInfo;
@property (getter=_enhancedPlacement, nonatomic, readonly) GEOEnhancedPlacement *enhancedPlacement;
@property (getter=_enrichmentData, nonatomic, readonly) GEOEnrichmentData *enrichmentData;
@property (getter=_enrichmentInfo, nonatomic, readonly) GEOEnrichmentInfo *enrichmentInfo;
@property (getter=_evCharger, nonatomic, readonly) GEOEVCharger *evCharger;
@property (nonatomic, readonly) NSDate *eventDate;
@property (nonatomic, readonly) NSString *eventName;
@property (getter=_exploreGuides, nonatomic, readonly) GEOExploreGuides *exploreGuides;
@property (getter=_externalActionLinks, nonatomic, readonly) NSArray *externalActionLinks;
@property (nonatomic, readonly) NSData *externalTransitStationCode;
@property (getter=_featureLink, nonatomic, readonly) GEORestaurantFeaturesLink *featureLink;
@property (getter=_flyover, nonatomic, readonly) GEOPDFlyover *flyover;
@property (getter=_flyoverAnnouncementMessage, nonatomic, readonly) NSString *flyoverAnnouncementMessage;
@property (nonatomic, readonly) GEOAddress *geoAddress;
@property (nonatomic, readonly) GEOMapRegion *geoFenceMapRegion;
@property (nonatomic, readonly) GEOMapRegion *geoFenceMapRegionOrNil;
@property (getter=_groundViewLocationId, nonatomic, readonly) unsigned long long groundViewLocationId;
@property (getter=_hasAnyAmenities, nonatomic, readonly) bool hasAnyAmenities;
@property (getter=_hasAppleRatings, nonatomic, readonly) bool hasAppleRatings;
@property (getter=_hasAreaHighlightId, nonatomic, readonly) bool hasAreaHighlightId;
@property (getter=_hasAreaInMeters, nonatomic, readonly) bool hasAreaInMeters;
@property (getter=_hasBrandMUID, nonatomic, readonly) bool hasBrandMUID;
@property (getter=_hasBusinessHours, nonatomic, readonly) bool hasBusinessHours;
@property (getter=_hasCaptionedPhotoAlbum, nonatomic, readonly) bool hasCaptionedPhotoAlbum;
@property (getter=_hasCurrentOperatingHours, nonatomic, readonly) bool hasCurrentOperatingHours;
@property (nonatomic, readonly) bool hasDisplayMaxZoom;
@property (nonatomic, readonly) bool hasDisplayMinZoom;
@property (getter=_hasEVCharger, nonatomic, readonly) bool hasEVCharger;
@property (getter=_hasEnclosingPlace, nonatomic, readonly) bool hasEnclosingPlace;
@property (getter=_hasEncyclopedicInfo, nonatomic, readonly) bool hasEncyclopedicInfo;
@property (nonatomic, readonly) bool hasExpiredComponents;
@property (getter=_hasFeatureLink, nonatomic, readonly) bool hasFeatureLink;
@property (getter=_hasFlyover, nonatomic, readonly) bool hasFlyover;
@property (getter=_hasGroundViewLocationId, nonatomic, readonly) bool hasGroundViewLocationId;
@property (getter=_hasLinkedServices, nonatomic, readonly) bool hasLinkedServices;
@property (getter=_hasMUID, nonatomic, readonly) bool hasMUID;
@property (getter=_hasOperatingHours, nonatomic, readonly) bool hasOperatingHours;
@property (getter=_hasPOIClaim, nonatomic, readonly) bool hasPOIClaim;
@property (getter=_hasPlaceCollectionPullQuotes, nonatomic, readonly) bool hasPlaceCollectionPullQuotes;
@property (getter=_hasPlaceDescription, nonatomic, readonly) bool hasPlaceDescription;
@property (getter=_hasPlaceQuestionnaire, nonatomic, readonly) bool hasPlaceQuestionnaire;
@property (getter=_hasPriceRange, nonatomic, readonly) bool hasPriceRange;
@property (getter=_hasResolvablePartialInformation, nonatomic, readonly) bool hasResolvablePartialInformation;
@property (getter=_hasResultProviderID, nonatomic, readonly) bool hasResultProviderID;
@property (getter=_hasTelephone, nonatomic, readonly) bool hasTelephone;
@property (getter=_hasTransit, nonatomic, readonly) bool hasTransit;
@property (getter=_hasUserRatingScore, nonatomic, readonly) bool hasUserRatingScore;
@property (nonatomic, readonly) bool hasVenueCapacity;
@property (getter=_hasVenueFeatureType, nonatomic, readonly) bool hasVenueFeatureType;
@property (getter=_hasWifiFingerprintConfidence, nonatomic, readonly) bool hasWifiFingerprintConfidence;
@property (getter=_hasWifiFingerprintLabelStatusCode, nonatomic, readonly) bool hasWifiFingerprintLabelStatusCode;
@property (getter=_hasWifiFingerprintLabelType, nonatomic, readonly) bool hasWifiFingerprintLabelType;
@property (readonly) unsigned long long hash;
@property (getter=_identifier, nonatomic, readonly) GEOMapItemIdentifier *identifier;
@property (getter=_identifierHistory, nonatomic, readonly) NSArray *identifierHistory;
@property (getter=_isInLinkedPlaceRelationship, nonatomic, readonly) bool inLinkedPlaceRelationship;
@property (getter=_inlineRapEnablement, nonatomic, readonly) GEOInlineRapEnablement *inlineRapEnablement;
@property (nonatomic, readonly) bool isEventAllDay;
@property (getter=_isStandaloneBrand, nonatomic, readonly) bool isStandAloneBrand;
@property (getter=_isTransitDisplayFeature, nonatomic, readonly) bool isTransitDisplayFeature;
@property (getter=_iso3166CountryCode, nonatomic, readonly) NSString *iso3166CountryCode;
@property (getter=_iso3166SubdivisionCode, nonatomic, readonly) NSString *iso3166SubdivisionCode;
@property (nonatomic, readonly) struct { double x1; double x2; } labelCoordinate;
@property (getter=_labelGeometry, nonatomic, readonly) GEOLabelGeometry *labelGeometry;
@property (getter=_linkedServices, nonatomic, readonly) NSArray *linkedServices;
@property (getter=_mapsCategoryId, nonatomic, readonly) NSString *mapsCategoryId;
@property (getter=_maxScoreForPriceRange, nonatomic, readonly) unsigned int maxScoreForPriceRange;
@property (getter=_messageLink, nonatomic, readonly) GEOMessageLink *messageLink;
@property (getter=_miniBrowseCategories, nonatomic, readonly) GEOMiniBrowseCategories *miniBrowseCategories;
@property (getter=_muid, nonatomic, readonly) unsigned long long muid;
@property (getter=_muninViewState, nonatomic, readonly) GEOMuninViewState *muninViewState;
@property (nonatomic, readonly) NSString *name;
@property (getter=_needsAttribution, nonatomic, readonly) bool needsAttribution;
@property (getter=_normalizedUserRatingScore, nonatomic, readonly) float normalizedUserRatingScore;
@property (nonatomic, readonly) GEOMapRegion *offlineDownloadRegion;
@property (getter=_openingHoursOptions, nonatomic, readonly) unsigned long long openingHoursOptions;
@property (getter=_optsOutOfTelephoneAds, nonatomic, readonly) bool optsOutOfTelephoneAds;
@property (getter=_overallAppleRating, nonatomic, readonly) GEOAppleRating *overallRating;
@property (getter=_parsecSectionType, nonatomic, readonly) int parsecSectionType;
@property (getter=_photos, nonatomic, readonly) NSArray *photos;
@property (getter=_photosAttribution, nonatomic, readonly) GEOMapItemPhotosAttribution *photosAttribution;
@property (getter=_photosMemoryScore, nonatomic, readonly) float photosMemoryScore;
@property (getter=_place, nonatomic, readonly) GEOPlace *place;
@property (getter=_placeCategoryType, nonatomic, readonly) int placeCategoryType;
@property (getter=_placeCollectionPullQuotes, nonatomic, readonly) NSArray *placeCollectionPullQuotes;
@property (getter=_placeCollections, nonatomic, readonly) NSArray *placeCollections;
@property (getter=_placeCollectionsIds, nonatomic, readonly) NSArray *placeCollectionsIds;
@property (getter=_placeData, nonatomic, readonly) GEOPDPlace *placeData;
@property (getter=_placeDataAsData, nonatomic, readonly) NSData *placeDataAsData;
@property (getter=_placeDescription, nonatomic, readonly) NSString *placeDescription;
@property (getter=_placeDisplayStyle, nonatomic, readonly) int placeDisplayStyle;
@property (getter=_placeDisplayType, nonatomic, readonly) int placeDisplayType;
@property (getter=_placeQuestionnaire, nonatomic, readonly) GEOPlaceQuestionnaire *placeQuestionnaire;
@property (getter=_placeResult, nonatomic, readonly) GEOPlaceResult *placeResult;
@property (getter=_placeType, nonatomic, readonly) int placeType;
@property (getter=_placecardLayoutData, nonatomic, readonly) GEOPlacecardLayoutData *placecardLayoutData;
@property (getter=_poiCategory, nonatomic, readonly) NSString *poiCategory;
@property (getter=_poiClaim, nonatomic, readonly) GEOPOIClaim *poiClaim;
@property (getter=_poiPinpointURLString, nonatomic, readonly) NSString *poiPinpointURLString;
@property (getter=_poiSurveyURLString, nonatomic, readonly) NSString *poiSurveyURLString;
@property (getter=_priceDescription, nonatomic, readonly) GEOPriceDescription *priceDescription;
@property (getter=_priceRange, nonatomic, readonly) unsigned int priceRange;
@property (getter=_providerURL, nonatomic, readonly, copy) NSURL *providerURL;
@property (getter=_quickLinks, nonatomic, readonly) NSArray *quickLinks;
@property (nonatomic, readonly) int referenceFrame;
@property (getter=_relatedPlaceLists, nonatomic, readonly) NSArray *relatedPlaceLists;
@property (getter=_responseStatusIsIncomplete, nonatomic, readonly) bool responseStatusIncomplete;
@property (getter=_resultProviderID, nonatomic, readonly) int resultProviderID;
@property (getter=_resultSnippetDistanceDisplayThreshold, nonatomic, readonly) unsigned int resultSnippetDistanceDisplayThreshold;
@property (getter=_resultSnippetLocationString, nonatomic, readonly) NSString *resultSnippetLocationString;
@property (getter=_reviews, nonatomic, readonly) NSArray *reviews;
@property (getter=_reviewsAttribution, nonatomic, readonly) GEOMapItemReviewsAttribution *reviewsAttribution;
@property (getter=_roadAccessPoints, nonatomic, readonly) NSArray *roadAccessPoints;
@property (getter=_sampleSizeForUserRatingScore, nonatomic, readonly) unsigned int sampleSizeForUserRatingScore;
@property (nonatomic, readonly) NSString *secondaryName;
@property (getter=_secondaryQuickLinks, nonatomic, readonly) NSArray *secondaryQuickLinks;
@property (nonatomic, readonly) NSString *secondarySpokenName;
@property (getter=_showSuggestAnEditButton, nonatomic, readonly) bool showSuggestAnEditButton;
@property (nonatomic, readonly) NSArray *spatialMappedCategories;
@property (nonatomic, readonly) NSArray *spatialMappedPlaceCategories;
@property (getter=_storefrontInfo, nonatomic, readonly) GEOStorefrontInfo *storefrontInfo;
@property (getter=_storefrontPresentationInfo, nonatomic, readonly) GEOStorefrontPresentationInfo *storefrontPresentationInfo;
@property (getter=_styleAttributes, nonatomic, readonly) GEOFeatureStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedTransitPaymentMethods;
@property (nonatomic, readonly) bool supportsOfflineMaps;
@property (getter=_telephone, nonatomic, readonly) NSString *telephone;
@property (nonatomic, readonly) NSTimeZone *timezone;
@property (getter=_tips, nonatomic, readonly) NSArray *tips;
@property (getter=_tooltip, nonatomic, readonly) GEOTooltip *tooltip;
@property (getter=_totalPhotoCount, nonatomic, readonly) unsigned long long totalPhotoCount;
@property (getter=_trailHead, nonatomic, readonly) GEOTrailHead *trailHead;
@property (getter=_transitAttribution, nonatomic, readonly) <GEOTransitAttribution> *transitAttribution;
@property (getter=_transitInfo, nonatomic, readonly) <GEOMapItemTransitInfo> *transitInfo;
@property (nonatomic, readonly) NSArray *transitPaymentMethodSuggestions;
@property (nonatomic, readonly) GEOMapItemIdentifier *transitStationIdentifier;
@property (getter=_transitVehiclePosition, nonatomic, readonly) <GEOTransitVehiclePosition> *transitVehiclePosition;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (getter=_vendorID, nonatomic, readonly, copy) NSString *vendorID;
@property (nonatomic, readonly) long long venueCapacity;
@property (getter=_venueFeatureType, nonatomic, readonly) int venueFeatureType;
@property (getter=_venueInfo, nonatomic, readonly) <GEOMapItemVenueInfo> *venueInfo;
@property (getter=_viewportFrame, nonatomic, readonly) GEOViewportFrame *viewportFrame;
@property (getter=_walletCategoryIdentifier, nonatomic, readonly) NSString *walletCategoryIdentifier;
@property (getter=_walletCategoryLocalizedString, nonatomic, readonly) NSString *walletCategoryLocalizedString;
@property (getter=_walletCategoryLocalizedStringLocale, nonatomic, readonly) NSString *walletCategoryLocalizedStringLocale;
@property (getter=_walletCategoryStyling, nonatomic, readonly) GEOStyleAttributes *walletCategoryStyling;
@property (getter=_walletMapsCategoryIdentifier, nonatomic, readonly) NSString *walletMapsCategoryIdentifier;
@property (getter=_walletPlaceLocalizedString, nonatomic, readonly) NSString *walletPlaceLocalizedString;
@property (getter=_walletPlaceLocalizedStringLocale, nonatomic, readonly) NSString *walletPlaceLocalizedStringLocale;
@property (getter=_walletPlaceStyling, nonatomic, readonly) GEOStyleAttributes *walletPlaceStyling;
@property (getter=_webURL, nonatomic, readonly, copy) NSURL *webURL;
@property (getter=_wifiFingerprintConfidence, nonatomic, readonly) unsigned int wifiFingerprintConfidence;
@property (getter=_wifiFingerprintLabelStatusCode, nonatomic, readonly) int wifiFingerprintLabelStatusCode;
@property (getter=_wifiFingerprintLabelType, nonatomic, readonly) int wifiFingerprintLabelType;

- (void).cxx_destruct;
- (id)_additionalPlaceInfos;
- (int)_addressGeocodeAccuracy;
- (id)_amenities;
- (double)_areaInMeters;
- (id)_arrivalMapRegionForTransportType:(int)arg1;
- (id)_asPlaceInfo;
- (id)_associatedApp;
- (id)_attribution;
- (id)_businessClaim;
- (id)_businessURL;
- (id)_clientAttributes;
- (unsigned long long)_customIconID;
- (id)_disambiguationName;
- (id)_encyclopedicInfo;
- (id)_featureLink;
- (id)_flyover;
- (id)_flyoverAnnouncementMessage;
- (bool)_hasAnyAmenities;
- (bool)_hasAreaInMeters;
- (bool)_hasBusinessClaim;
- (bool)_hasCurrentOperatingHours;
- (bool)_hasEncyclopedicInfo;
- (bool)_hasFeatureLink;
- (bool)_hasFlyover;
- (bool)_hasLocalizedCategoryNamesForType:(unsigned int)arg1;
- (bool)_hasMUID;
- (bool)_hasOperatingHours;
- (bool)_hasPriceRange;
- (bool)_hasResolvablePartialInformation;
- (bool)_hasResultProviderID;
- (bool)_hasTelephone;
- (bool)_hasTransit;
- (bool)_hasTravelTimeForTransportType:(int)arg1;
- (bool)_hasUserRatingScore;
- (id)_identifier;
- (id)_localizedCategoryNamesForType:(unsigned int)arg1;
- (id)_mapItemByStrippingOptionalData;
- (id)_messageLink;
- (unsigned long long)_muid;
- (bool)_needsAttribution;
- (float)_normalizedUserRatingScore;
- (unsigned long long)_openingHoursOptions;
- (bool)_optsOutOfTelephoneAds;
- (int)_parsecSectionType;
- (id)_photos;
- (id)_photosAttribution;
- (id)_place;
- (id)_placeCollections;
- (id)_placeData;
- (id)_placeDataAsData;
- (id)_placeResult;
- (int)_placeType;
- (id)_placecardLayoutConfiguration;
- (id)_poiPinpointURLString;
- (id)_poiSurveyURLString;
- (id)_priceDescription;
- (unsigned int)_priceRange;
- (id)_providerURL;
- (id)_quickLinks;
- (int)_recommendedTransportType;
- (id)_relatedPlaceListForComponentIdentifier:(int)arg1;
- (id)_relatedPlaceLists;
- (bool)_responseStatusIsIncomplete;
- (int)_resultProviderID;
- (unsigned int)_resultSnippetDistanceDisplayThreshold;
- (id)_resultSnippetLocationString;
- (id)_reviews;
- (id)_reviewsAttribution;
- (id)_roadAccessPoints;
- (unsigned int)_sampleSizeForUserRatingScore;
- (id)_secondaryQuickLinks;
- (id)_spokenAddressForLocale:(id)arg1;
- (id)_styleAttributes;
- (id)_telephone;
- (id)_tips;
- (id)_transitAttribution;
- (id)_transitInfo;
- (id)_transitVehiclePosition;
- (unsigned int)_travelDistanceForTransportType:(int)arg1;
- (unsigned int)_travelTimeForTransportType:(int)arg1;
- (id)_urlForPhotoWithUID:(id)arg1;
- (id)_urlForReview:(id)arg1;
- (id)_urlForWritingAReview;
- (id)_vendorID;
- (id)_webURL;
- (id)_yelpID;
- (id)addressDictionary;
- (id)addressObject;
- (id)areasOfInterest;
- (struct { double x1; double x2; })centerCoordinate;
- (int)contactAddressType;
- (bool)contactIsMe;
- (id)contactName;
- (id)contactSpokenName;
- (struct { double x1; double x2; })coordinate;
- (id)description;
- (id)detourInfo;
- (id)displayMapRegion;
- (id)displayMapRegionOrNil;
- (id)encodedData;
- (id)eventDate;
- (id)eventName;
- (id)externalTransitStationCode;
- (id)geoAddress;
- (id)geoFenceMapRegion;
- (id)geoFenceMapRegionOrNil;
- (bool)hasExpiredComponents;
- (unsigned long long)hash;
- (id)initWithPlace:(id)arg1;
- (id)initWithPlaceResult:(id)arg1;
- (bool)isDisputed;
- (bool)isEqualToMapItem:(id)arg1;
- (bool)isEventAllDay;
- (bool)isValid;
- (id)name;
- (int)referenceFrame;
- (id)spatialMappedCategories;
- (id)spokenNameForLocale:(id)arg1;
- (id)timezone;
- (id)weatherDisplayName;

@end
