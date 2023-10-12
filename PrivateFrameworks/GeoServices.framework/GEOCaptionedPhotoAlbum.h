/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCaptionedPhotoAlbum : NSObject {
    NSMapTable * _attributionMap;
    GEOPDCategorizedPhotos * _categorizedPhotos;
    NSArray * _photoList;
}

@property (nonatomic, readonly) NSString *categoryId;
@property (nonatomic, readonly) NSString *categoryName;
@property (nonatomic, readonly) NSArray *photoList;
@property (nonatomic, readonly) unsigned long long totalNumberOfPhotosAvailable;

- (void).cxx_destruct;
- (void)_buildPhotoList;
- (id)categoryId;
- (id)categoryName;
- (id)description;
- (id)initWithCaptionedPhotoCategory:(id)arg1 attributionMap:(id)arg2;
- (id)photoList;
- (unsigned long long)totalNumberOfPhotosAvailable;

@end