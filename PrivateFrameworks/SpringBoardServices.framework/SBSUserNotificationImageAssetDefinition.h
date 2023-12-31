/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSUserNotificationImageAssetDefinition : SBSUserNotificationImageDefinition {
    NSString * _catalogImageKey;
    NSString * _catalogPath;
    NSString * _imagePath;
}

@property (nonatomic, readonly, copy) NSString *catalogImageKey;
@property (nonatomic, readonly, copy) NSString *catalogPath;
@property (nonatomic, readonly, copy) NSString *imagePath;

+ (id)_definitionType;

- (void).cxx_destruct;
- (id)_initWithDictionary:(id)arg1;
- (id)_initWithImagePath:(id)arg1 imageCatalogPath:(id)arg2 catalogImageKey:(id)arg3;
- (id)build;
- (id)catalogImageKey;
- (id)catalogPath;
- (id)imagePath;
- (id)initWithImageCatalogPath:(id)arg1 catalogImageKey:(id)arg2;
- (id)initWithImagePath:(id)arg1;

@end
