/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetContainerListChangeNotification : PLContainerChangeNotification {
    NSDictionary * _userInfo;
}

@property (nonatomic, readonly) NSObject<PLAlbumContainer> *albumList;
@property (nonatomic, readonly) <PLAssetContainerList> *assetContainerList;

- (void).cxx_destruct;
- (id)albumList;
- (id)assetContainerList;
- (id)description;
- (id)name;
- (id)userInfo;

// PLAssetContainerListChangeNotification (Internal)

+ (id)notificationWithContainerList:(id)arg1 snapshot:(id)arg2 changedContainers:(id)arg3;

- (id)_contentRelationshipName;

@end
