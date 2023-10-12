/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemoteCloudStoreAssetManifestItem : PKRemoteAssetManifestItem <NSSecureCoding>

@property (nonatomic, readonly) NSString *recordName;

+ (bool)supportsSecureCoding;

- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadAssetWithCloudStoreCoordinatorDelegate:(id)arg1 tryCount:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (unsigned long long)itemType;
- (id)recordName;

@end
