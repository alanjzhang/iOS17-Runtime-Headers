/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAllCollectionsViewResultFilter : NSObject {
    NSArray * _places;
    GEOPDAllCollectionsViewResultFilter * _resultFilter;
}

@property (nonatomic, readonly) GEOAllCollectionsViewResultFilterTypeAddress *addressFilter;
@property (nonatomic, readonly) long long filterType;
@property (nonatomic, readonly) GEOAllCollectionsViewResultFilterTypeKeyword *keywordFilter;

- (void).cxx_destruct;
- (id)addressFilter;
- (long long)filterType;
- (id)initWithAllCollectionsViewResultFilter:(id)arg1 withPlaces:(id)arg2;
- (id)keywordFilter;

@end
