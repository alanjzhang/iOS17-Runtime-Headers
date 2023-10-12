/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDEffectRenditionSpec : TDRenditionSpec

@property (nonatomic, readonly, retain) TDEffectComponent *CUIShapeEffectOutputOpacity;
@property (nonatomic, readonly, retain) TDEffectComponent *CUIShapeEffectShapeOpacity;
@property (nonatomic, retain) NSOrderedSet *components;
@property (nonatomic, retain) NSNumber *effectScale;

+ (id)keyPathsForValuesAffectingCUIShapeEffectOutputOpacity;
+ (id)keyPathsForValuesAffectingCUIShapeEffectShapeOpacity;

- (id)CUIShapeEffectOutputOpacity;
- (id)CUIShapeEffectShapeOpacity;
- (bool)canBePackedWithDocument:(id)arg1;
- (id)componentOfType:(unsigned int)arg1;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (id)effectPreset;
- (void)replaceComponentsWithComponentsFromEffectRendition:(id)arg1 withDocument:(id)arg2;
- (void)setComponentsFromEffectPreset:(id)arg1 withDocument:(id)arg2;

@end
