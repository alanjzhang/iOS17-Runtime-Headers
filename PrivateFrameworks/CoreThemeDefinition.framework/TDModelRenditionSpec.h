/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDModelRenditionSpec : TDRenditionSpec

@property (nonatomic, retain) TDModelAsset *asset;
@property (nonatomic, retain) NSSet *childRenditions;
@property (nonatomic) int modelAssetIndex;

- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)processMesh:(id)arg1 withAssetMeshIndex:(unsigned int*)arg2 assetKeySpec:(id)arg3 inDocument:(id)arg4;
- (void)processModelObjectsInDocument:(id)arg1;

// TDModelRenditionSpec (CoreDataProperties)

+ (id)fetchRequest;

@end
