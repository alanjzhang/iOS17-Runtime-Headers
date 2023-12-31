/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAllGuidesLocationsSection : NSObject {
    NSDictionary * _entriesDictionary;
    bool  _isWorldwideSection;
    NSArray * _mapsResults;
    GEOPDPlace * _place;
    GEOPDAllGuidesLocationsSection * _section;
    NSString * _sectionTitle;
}

@property (nonatomic, readonly) NSArray *guideLocationIdentifiers;
@property (nonatomic, readonly) NSArray *guideLocations;
@property (nonatomic, readonly) bool isWorldwideSection;
@property (nonatomic, readonly) NSDictionary *pdGuideLocationEntries;
@property (nonatomic, readonly) NSString *sectionTitle;

- (void).cxx_destruct;
- (id)guideLocationIdentifiers;
- (id)guideLocations;
- (id)initWithAllGuidesLocationSection:(id)arg1 mapsResults:(id)arg2;
- (bool)isWorldwideSection;
- (id)pdGuideLocationEntries;
- (id)placeResultForSection:(id)arg1 mapsResults:(id)arg2;
- (id)sectionTitle;

@end
