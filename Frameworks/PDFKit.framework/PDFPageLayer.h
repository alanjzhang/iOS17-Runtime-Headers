/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageLayer : CALayer <PDFPageLayerInterface> {
    PDFPageLayerPrivate * _private;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_forceTileUpdate;
- (bool)_hasTileWithFrameInLayer:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_hideTileLayer:(bool)arg1;
- (bool)_isTile:(id)arg1 occludedByTiles:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layerTileToRootViewBounds:(id)arg1;
- (void)_pageChangedPageRef:(id)arg1;
- (void)_pageDidRotate:(id)arg1;
- (id)_pageLayerEffects;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_pageLayerVisibleRect;
- (void)_printRectsArray:(id)arg1;
- (void)_releasePageLayerEffects;
- (void)_releaseTiles;
- (void)_renderingPropertyUpdate:(id)arg1;
- (void)_setEnablePageShadows:(bool)arg1;
- (id)_subtractRectB:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromRectA:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_tileUpdateComplete;
- (void)_updateLayerEffect:(id)arg1 withPageTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
- (void)_updateTiles;
- (void)addPageLayerEffect:(id)arg1;
- (void)applyTileLayoutScale:(double)arg1;
- (void)clearTiles;
- (void)dealloc;
- (long long)displayBox;
- (bool)enablesTileUpdates;
- (void)forceTileUpdate;
- (id)geometryInterface;
- (id)initWithPage:(id)arg1 geometryInterface:(id)arg2 andRenderingProperties:(id)arg3;
- (bool)isVisible;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })layerEffectTransform;
- (void)layoutSublayers;
- (id)page;
- (id)pageLayerEffectForID:(id)arg1;
- (void)removePageLayerEffectForID:(id)arg1;
- (id)renderingProperties;
- (void)restoreOriginalTileLayout;
- (void)saveOriginalTileLayout;
- (void)scalePageLayerEffects:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEnableTileUpdates:(bool)arg1;
- (void)setNeedsTilesUpdate;
- (void)setVisibilityDelegateIndex:(unsigned long long)arg1;
- (void)tileDrawingComplete:(id)arg1;
- (void)updatePageLayerEffectForID:(id)arg1;
- (void)updatePageLayerEffects;
- (unsigned long long)visibilityDelegateIndex;
- (void)willEndStartLiveResize;
- (void)willStartLiveResize;

@end
