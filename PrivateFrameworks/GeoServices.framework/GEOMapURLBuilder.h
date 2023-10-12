/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapURLBuilder : NSObject {
    GEOURLCollectionStorage * _collectionStorage;
    NSMutableDictionary * _dict;
    GEOEnrichmentInfo * _enrichmentInfo;
    GEOURLExtraStorage * _extraStorage;
    GEOMuninViewState * _muninViewState;
}

@property (nonatomic, retain) GEOURLCollectionStorage *collectionStorage;
@property (nonatomic, retain) GEOEnrichmentInfo *enrichmentInfo;
@property (nonatomic, retain) GEOURLExtraStorage *extraStorage;
@property (nonatomic, retain) GEOMuninViewState *muninViewState;

+ (id)URLForAddress:(id)arg1;
+ (id)URLForAddress:(id)arg1 label:(id)arg2;
+ (id)URLForCameraAt:(struct { double x1; double x2; })arg1 altitude:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 roll:(double)arg5;
+ (id)URLForCameraAt:(struct { double x1; double x2; })arg1 zoomLevel:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 roll:(double)arg5;
+ (id)URLForCollectionStorage:(id)arg1;
+ (id)URLForCoordinate:(struct { double x1; double x2; })arg1;
+ (id)URLForCoordinate:(struct { double x1; double x2; })arg1 address:(id)arg2 label:(id)arg3;
+ (id)URLForCoordinate:(struct { double x1; double x2; })arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4;
+ (id)URLForCoordinate:(struct { double x1; double x2; })arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4 useWebPlaceCard:(bool)arg5;
+ (id)URLForCoordinate:(struct { double x1; double x2; })arg1 address:(id)arg2 label:(id)arg3 extraStorage:(id)arg4 useWebPlaceCard:(bool)arg5 muninViewState:(id)arg6;
+ (id)URLForCoordinate:(struct { double x1; double x2; })arg1 label:(id)arg2;
+ (id)URLForCuratedCollection:(unsigned long long)arg1 provider:(int)arg2;
+ (id)URLForDirectionsFrom:(id)arg1 to:(id)arg2;
+ (id)URLForDirectionsFrom:(id)arg1 to:(id)arg2 transport:(int)arg3;
+ (id)URLForDirectionsFrom:(id)arg1 toDestinations:(id)arg2;
+ (id)URLForDirectionsFrom:(id)arg1 toDestinations:(id)arg2 transport:(int)arg3;
+ (id)URLForDirectionsFromHereTo:(id)arg1;
+ (id)URLForDirectionsFromHereTo:(id)arg1 label:(id)arg2 muid:(unsigned long long)arg3 provider:(int)arg4 transport:(int)arg5;
+ (id)URLForDirectionsFromHereTo:(id)arg1 transport:(int)arg2;
+ (id)URLForDirectionsFromHereToDestinations:(id)arg1;
+ (id)URLForDirectionsFromHereToDestinations:(id)arg1 transport:(int)arg2;
+ (id)URLForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct { double x1; double x2; })arg4 address:(id)arg5;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct { double x1; double x2; })arg4 address:(id)arg5 extraStorage:(id)arg6;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct { double x1; double x2; })arg4 address:(id)arg5 extraStorage:(id)arg6 useWebPlaceCard:(bool)arg7;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct { double x1; double x2; })arg4 address:(id)arg5 extraStorage:(id)arg6 useWebPlaceCard:(bool)arg7 enrichmentInfo:(id)arg8;
+ (id)URLForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3 coordinate:(struct { double x1; double x2; })arg4 address:(id)arg5 extraStorage:(id)arg6 useWebPlaceCard:(bool)arg7 muninViewState:(id)arg8;
+ (id)URLForPublisher:(unsigned long long)arg1 provider:(int)arg2;
+ (id)URLForSearch:(id)arg1;
+ (id)URLForSearch:(id)arg1 at:(struct { double x1; double x2; })arg2 span:(struct { double x1; double x2; })arg3;
+ (id)URLForSearch:(id)arg1 at:(struct { double x1; double x2; })arg2 zoomLevel:(double)arg3;
+ (id)URLForSearch:(id)arg1 near:(struct { double x1; double x2; })arg2;
+ (id)URLForShowFavoritesType:(long long)arg1;
+ (id)URLForTransitLine:(unsigned long long)arg1 withName:(id)arg2 mapRegion:(id)arg3;

- (void).cxx_destruct;
- (void)_removeParametersAllBut:(id)arg1;
- (id)_stringForCoordinate2DPointer:(struct { double x1; double x2; }*)arg1;
- (id)_stringForCoordinateSpanPointer:(struct { double x1; double x2; }*)arg1;
- (void)addCodable:(id)arg1 key:(id)arg2 compressedKey:(id)arg3;
- (id)build;
- (id)buildForCollections;
- (id)buildForWeb;
- (id)buildForWebPlaceCard;
- (id)collectionStorage;
- (id)enrichmentInfo;
- (id)extraStorage;
- (id)initForAddress:(id)arg1 label:(id)arg2;
- (id)initForCameraAt:(struct { double x1; double x2; })arg1 altitude:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 roll:(double)arg5;
- (id)initForCameraAt:(struct { double x1; double x2; })arg1 zoomLevel:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 roll:(double)arg5;
- (id)initForCollectionStorage:(id)arg1;
- (id)initForCoordinate:(struct { double x1; double x2; })arg1 address:(id)arg2 label:(id)arg3;
- (id)initForCoordinate:(struct { double x1; double x2; })arg1 label:(id)arg2;
- (id)initForCuratedCollection:(unsigned long long)arg1 provider:(int)arg2;
- (id)initForDirectionsTo:(id)arg1;
- (id)initForDirectionsToAddresses:(id)arg1;
- (id)initForExternalBusiness:(id)arg1 id:(id)arg2 ofContentProvider:(id)arg3;
- (id)initForInternalBusiness:(id)arg1 id:(unsigned long long)arg2 provider:(int)arg3;
- (id)initForPublisher:(unsigned long long)arg1 provider:(int)arg2;
- (id)initForSearch:(id)arg1;
- (id)initForShowFavoritesType:(long long)arg1;
- (id)initForTransitLine:(unsigned long long)arg1 withName:(id)arg2 mapRegion:(id)arg3;
- (id)muninViewState;
- (void)setBusinessAddress:(id)arg1;
- (void)setBusinessCoordinate:(struct { double x1; double x2; })arg1;
- (void)setCollectionStorage:(id)arg1;
- (void)setContentProvider:(id)arg1;
- (void)setDestinationLabel:(id)arg1;
- (void)setDestinationMUID:(unsigned long long)arg1 provider:(int)arg2;
- (void)setDisplayRegion:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEnrichmentInfo:(id)arg1;
- (void)setExtraStorage:(id)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setMapType:(int)arg1;
- (void)setMuninViewState:(id)arg1;
- (void)setNear:(struct { double x1; double x2; })arg1;
- (void)setSearchLocation:(struct { double x1; double x2; })arg1 span:(struct { double x1; double x2; })arg2;
- (void)setSearchLocation:(struct { double x1; double x2; })arg1 zoomLevel:(double)arg2;
- (void)setStartAddress:(id)arg1;
- (void)setTransportType:(int)arg1;

@end
