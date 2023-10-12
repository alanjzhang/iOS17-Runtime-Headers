/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceCollectionItem : NSObject {
    GEOPDPlaceCollectionItem * _placeCollectionItem;
}

@property (nonatomic, readonly) GEOQuickLink *appClip;
@property (nonatomic, readonly) bool disableAppClipFallback;
@property (nonatomic, readonly) NSString *itemDescription;
@property (nonatomic, readonly) NSString *itemHTMLDescription;
@property (nonatomic, readonly) GEOMapItemIdentifier *itemIdentifier;
@property (nonatomic, readonly) NSArray *photos;
@property (nonatomic, readonly) NSString *reviewText;
@property (nonatomic, readonly) NSURL *reviewUrl;
@property (nonatomic, readonly) bool supportsPhotoFallback;

- (void).cxx_destruct;
- (id)appClip;
- (id)description;
- (bool)disableAppClipFallback;
- (id)initWithPlaceCollectionItem:(id)arg1;
- (id)itemDescription;
- (id)itemHTMLDescription;
- (id)itemIdentifier;
- (id)photos;
- (id)reviewText;
- (id)reviewUrl;
- (bool)supportsPhotoFallback;

@end
