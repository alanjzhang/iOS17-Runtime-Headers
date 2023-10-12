/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libViewDebuggerSupport.dylib
 */

@interface DBGViewDebuggerSupport_iOS : DBGViewDebuggerSupport <DBGViewDebuggerSubclass>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isEffectView:(id)arg1;
+ (id)_messagesUIExtensionViews;
+ (id)_renderEffectViewUsingDrawHierarchyInRect:(id)arg1;
+ (bool)_viewHasAmbiguousLayout:(id)arg1;
+ (void)addFrameBasics:(id)arg1 toDict:(id)arg2;
+ (void)addLayoutInfoForView:(id)arg1 toDict:(id)arg2;
+ (void)addViewBasics:(id)arg1 toDict:(id)arg2;
+ (id)additionalRootLevelViewsToArchive;
+ (unsigned long long)ambiguityStatusMaskForView:(id)arg1;
+ (id)appWindows;
+ (id)displayNameForView:(id)arg1;
+ (double)firstBaselineOffsetFromTopForView:(id)arg1;
+ (bool)ibShouldIgnoreScrollableContentHeightAmbiguityForRepresentationOfItem:(id)arg1;
+ (bool)ibShouldIgnoreScrollableContentWidthAmbiguityForRepresentationOfItem:(id)arg1;
+ (bool)isHiddenForWindow:(id)arg1;
+ (bool)isViewSubclass:(id)arg1;
+ (bool)isWindowSubclass:(id)arg1;
+ (double)lastBaselineOffsetFromBottomForView:(id)arg1;
+ (id)layerForView:(id)arg1;
+ (id)primaryWindowFromWindows:(id)arg1;
+ (double)screenBackingScaleForView:(id)arg1;
+ (double)screenBackingScaleForWindow:(id)arg1;
+ (id)snapshotMethodForView:(id)arg1;
+ (id)snapshotView:(id)arg1 errorString:(id*)arg2;
+ (id)subviewsForView:(id)arg1;
+ (id)titleForWindow:(id)arg1;
+ (id)viewForFirstBaselineLayoutPointerForView:(id)arg1;
+ (id)viewForLastBaselineLayoutPointerForView:(id)arg1;
+ (id)windowContentViewForWindow:(id)arg1;

@end
