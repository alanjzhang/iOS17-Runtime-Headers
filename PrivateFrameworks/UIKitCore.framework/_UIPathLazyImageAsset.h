/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPathLazyImageAsset : UIImageAsset {
    bool  _haveCGCacheImages;
    NSArray * _imagePaths;
    struct { 
        unsigned int haveCGCacheImages : 1; 
        unsigned int imagesHaveBeenLoaded : 1; 
    }  _plaFlags;
}

@property (nonatomic, readonly) bool haveCGCacheImages;
@property (nonatomic, readonly, copy) NSArray *imagePaths;

- (void).cxx_destruct;
- (void)_clearResolvedImageResources;
- (bool)_containsImagesInPath:(id)arg1;
- (id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2;
- (id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2 imagePaths:(id)arg3 haveCGCacheImages:(bool)arg4;
- (id)_initWithAssetName:(id)arg1 forManager:(id)arg2;
- (bool)haveCGCacheImages;
- (id)imagePaths;
- (id)imageWithConfiguration:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
