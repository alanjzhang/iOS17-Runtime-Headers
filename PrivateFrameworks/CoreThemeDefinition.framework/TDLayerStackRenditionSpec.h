/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDLayerStackRenditionSpec : TDRenditionSpec {
    struct CGSize { 
        double width; 
        double height; 
    }  primitiveCanvasSize;
}

@property (nonatomic, retain) TDImageStackAsset *asset;
@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic, retain) NSString *canvasSizeString;
@property (nonatomic, retain) TDThemeCompressionType *compressionType;
@property (nonatomic, retain) NSOrderedSet *layerReferences;
@property (nonatomic) struct CGSize { double x1; double x2; } primitiveCanvasSize;

- (void)awakeFromFetch;
- (bool)canBePackedWithDocument:(id)arg1;
- (struct CGSize { double x1; double x2; })canvasSize;
- (id)createCSIRepresentationWithCompression:(bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)prepareForDeletion;
- (struct CGSize { double x1; double x2; })primitiveCanvasSize;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPrimitiveCanvasSize:(struct CGSize { double x1; double x2; })arg1;

@end
