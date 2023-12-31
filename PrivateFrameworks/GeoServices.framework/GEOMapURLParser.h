/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapURLParser : NSObject {
    NSString * _abAddressID;
    NSString * _abRecordID;
    NSString * _addressString;
    double  _altitude;
    struct { 
        double latitude; 
        double longitude; 
    }  _centerCoordinate;
    NSString * _cnAddressIdentifier;
    NSString * _cnContactIdentifier;
    GEOURLCollectionStorage * _collectionStorage;
    NSString * _contentProvider;
    NSString * _contentProviderID;
    unsigned long long  _curatedCollectionMUID;
    NSArray * _directionsDestinationAddressStrings;
    NSString * _directionsSourceAddressString;
    GEOEnrichmentInfo * _enrichmentInfo;
    bool  _exactPositionSpecified;
    GEOURLExtraStorage * _extraStorage;
    long long  _favoritesType;
    NSString * _label;
    unsigned long long  _lineMUID;
    NSString * _lineName;
    int  _mapType;
    GEOMuninViewState * _muninViewState;
    GEOMapRegion * _offlineDownloadRegion;
    unsigned long long  _publisherMUID;
    double  _roll;
    double  _rotation;
    struct { 
        double latitude; 
        double longitude; 
    }  _searchCoordinate;
    int  _searchProviderID;
    NSString * _searchQuery;
    struct { 
        struct { 
            double latitude; 
            double longitude; 
        } center; 
        struct { 
            double latitudeDelta; 
            double longitudeDelta; 
        } span; 
    }  _searchRegion;
    unsigned long long  _searchUID;
    bool  _showAllCuratedCollections;
    bool  _showCarDestinations;
    struct { 
        double latitudeDelta; 
        double longitudeDelta; 
    }  _span;
    bool  _tester;
    double  _tilt;
    int  _trackingMode;
    bool  _trackingModeSpecified;
    int  _transportType;
    NSURL * _url;
    GEOUserSessionEntity * _userSessionEntity;
    float  _zoomLevel;
}

@property (nonatomic, readonly) NSString *abAddressID;
@property (nonatomic, readonly) NSString *abRecordID;
@property (nonatomic, readonly) NSString *addressString;
@property (nonatomic, readonly) double altitude;
@property (nonatomic, readonly) struct { double x1; double x2; } centerCoordinate;
@property (nonatomic, readonly) NSString *cnAddressIdentifier;
@property (nonatomic, readonly) NSString *cnContactIdentifier;
@property (nonatomic, readonly) GEOURLCollectionStorage *collectionStorage;
@property (nonatomic, readonly) NSString *contentProvider;
@property (nonatomic, readonly) NSString *contentProviderID;
@property (nonatomic, readonly) unsigned long long curatedCollectionMUID;
@property (nonatomic, readonly) NSString *directionsDestinationAddressString;
@property (nonatomic, readonly) NSArray *directionsDestinationAddressStrings;
@property (nonatomic, readonly) NSString *directionsSourceAddressString;
@property (nonatomic, readonly) GEOEnrichmentInfo *enrichmentInfo;
@property (nonatomic, readonly) bool exactPositionSpecified;
@property (nonatomic, readonly) GEOURLExtraStorage *extraStorage;
@property (nonatomic, readonly) long long favoritesType;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long lineMUID;
@property (nonatomic, readonly, copy) NSString *lineName;
@property (nonatomic, readonly) int mapType;
@property (nonatomic, readonly) GEOMuninViewState *muninViewState;
@property (nonatomic, readonly) GEOMapRegion *offlineDownloadRegion;
@property (nonatomic, readonly) unsigned long long publisherMUID;
@property (nonatomic, readonly) double roll;
@property (nonatomic, readonly) double rotation;
@property (nonatomic, readonly) struct { double x1; double x2; } searchCoordinate;
@property (nonatomic, readonly) int searchProviderID;
@property (nonatomic, readonly) NSString *searchQuery;
@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } searchRegion;
@property (nonatomic, readonly) unsigned long long searchUID;
@property (nonatomic, readonly) bool showAllCuratedCollections;
@property (nonatomic, readonly) bool showCarDestinations;
@property (nonatomic, readonly) struct { double x1; double x2; } span;
@property (nonatomic, readonly) bool tester;
@property (nonatomic, readonly) double tilt;
@property (nonatomic, readonly) int trackingMode;
@property (nonatomic, readonly) bool trackingModeSpecified;
@property (nonatomic, readonly) int transportType;
@property (nonatomic, readonly) GEOUserSessionEntity *userSessionEntity;
@property (nonatomic, readonly) float zoomLevel;

+ (bool)isValidMapURL:(id)arg1;
+ (bool)isValidMapsCategoryURL:(id)arg1;
+ (bool)isValidMapsURLForAppendingSharedSessionID:(id)arg1;

- (void).cxx_destruct;
- (id)abAddressID;
- (id)abRecordID;
- (id)addressString;
- (double)altitude;
- (struct { double x1; double x2; })centerCoordinate;
- (id)cnAddressIdentifier;
- (id)cnContactIdentifier;
- (id)collectionStorage;
- (id)contentProvider;
- (id)contentProviderID;
- (unsigned long long)curatedCollectionMUID;
- (id)directionsDestinationAddressString;
- (id)directionsDestinationAddressStrings;
- (id)directionsSourceAddressString;
- (id)enrichmentInfo;
- (bool)exactPositionSpecified;
- (id)extraStorage;
- (long long)favoritesType;
- (id)initWithURL:(id)arg1;
- (id)label;
- (unsigned long long)lineMUID;
- (id)lineName;
- (int)mapType;
- (id)muninViewState;
- (id)offlineDownloadRegion;
- (bool)parseIncludingCustomParameters:(bool)arg1;
- (unsigned long long)publisherMUID;
- (id)restoreCodableOfClass:(Class)arg1 queryItem:(id)arg2 key:(id)arg3 compressedKey:(id)arg4;
- (double)roll;
- (double)rotation;
- (struct { double x1; double x2; })searchCoordinate;
- (int)searchProviderID;
- (id)searchQuery;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })searchRegion;
- (unsigned long long)searchUID;
- (bool)showAllCuratedCollections;
- (bool)showCarDestinations;
- (struct { double x1; double x2; })span;
- (bool)tester;
- (double)tilt;
- (int)trackingMode;
- (bool)trackingModeSpecified;
- (int)transportType;
- (id)userSessionEntity;
- (float)zoomLevel;

@end
