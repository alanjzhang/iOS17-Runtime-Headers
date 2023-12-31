/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapFeatureBuilding : NSObject {
    unsigned long long  _buildingID;
    GEOBuildingFootprintFeature * _feature;
    bool  _hasTerrainElevation;
    unsigned long long  _materialID;
    NSArray * _sections;
    GEOVectorTile * _tile;
    int  _tileSetStyle;
}

@property (nonatomic, readonly) unsigned long long buildingID;
@property (nonatomic, readonly) bool hasTerrainElevation;
@property (nonatomic, readonly) unsigned long long materialID;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) int tileSetStyle;

- (void).cxx_destruct;
- (unsigned long long)buildingID;
- (void)dealloc;
- (bool)hasTerrainElevation;
- (unsigned long long)materialID;
- (id)sections;
- (int)tileSetStyle;

// GEOMapFeatureBuilding (Private)

- (id)initWithDaVinciTile:(id)arg1 buildingIndex:(unsigned long long)arg2;
- (id)initWithFeature:(id)arg1;

@end
