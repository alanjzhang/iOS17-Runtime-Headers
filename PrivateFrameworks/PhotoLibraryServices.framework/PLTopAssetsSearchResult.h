/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLTopAssetsSearchResult : NSObject {
    NSArray * _assetUUIDsV2;
    PSITopAssetsResult * _topAssetsResults;
}

@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) NSArray *assetUUIDs;
@property (nonatomic, readonly) NSArray *assetUUIDsV2;
@property (nonatomic, readonly) PSITopAssetsResult *topAssetsResults;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (id)assetUUIDs;
- (id)assetUUIDsV2;
- (id)initWithAssetUUIDs:(id)arg1;
- (id)initWithTopAssetsResult:(id)arg1;
- (id)topAssetsResults;

@end