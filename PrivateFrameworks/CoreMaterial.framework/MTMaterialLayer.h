/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

@interface MTMaterialLayer : CABackdropLayer {
    long long  _allowsInPlaceFiltering;
    id /* block */  _backdropScaleAdjustment;
    bool  _blurEnabled;
    bool  _contentReplacedWithSnapshot;
    NSString * _debugIdentifier;
    id /* block */  _defaultBackdropScaleAdjustment;
    struct { 
        unsigned int delegateManagesWeighting : 1; 
        unsigned int delegateImplementsManagingOpacity : 1; 
        unsigned int delegateImplementsManagingInterpolation : 1; 
    }  _materialLayerDelegateFlags;
    bool  _needsConfiguring;
    NSMutableDictionary * _pendingChange;
    MTMaterialSettingsInterpolator * _previousSettingsInterpolator;
    NSHashTable * _prunePromises;
    bool  _reduceMotionEnabled;
    bool  _reduceTransparencyEnabled;
    MTMaterialSettingsInterpolator * _settingsInterpolator;
    bool  _shouldCrossfade;
    NSMutableDictionary * _visualStyleCategoriesToProviders;
    bool  _zoomEnabled;
}

@property (getter=_backdropScale, nonatomic, readonly) double backdropScale;
@property (nonatomic, copy) id /* block */ backdropScaleAdjustment;
@property (getter=isBlurEnabled, nonatomic) bool blurEnabled;
@property (nonatomic, copy) id /* block */ blurRadiusTransformer;
@property (getter=isContentReplacedWithSnapshot, nonatomic) bool contentReplacedWithSnapshot;
@property (nonatomic, copy) NSString *debugIdentifier;
@property (nonatomic, copy) id /* block */ defaultBackdropScaleAdjustment;
@property (getter=_hasInoperativeAppearance, nonatomic, readonly) bool hasInoperativeAppearance;
@property (getter=_privateOpacity, nonatomic, readonly) double privateOpacity;
@property (nonatomic, copy) NSString *recipe;
@property (nonatomic, copy) NSString *recipeName;
@property (getter=_recipeSettings, setter=_setRecipeSettings:, nonatomic, retain) <MTRecipeMaterialSettingsProviding> *recipeSettings;
@property (getter=isReduceMotionEnabled, nonatomic) bool reduceMotionEnabled;
@property (getter=isReduceTransparencyEnabled, nonatomic) bool reduceTransparencyEnabled;
@property (nonatomic) bool shouldCrossfade;
@property (nonatomic) double weighting;
@property (getter=isZoomEnabled, nonatomic) bool zoomEnabled;

+ (id)_attributeKeys;
+ (id)_unserializedAttributeKeys;
+ (void)initialize;

- (void).cxx_destruct;
- (void)_adjustScaleOfBackdropLayer:(id)arg1 ifNecessaryWithSettingsInterpolator:(id)arg2;
- (void)_configureBackdropLayer:(id)arg1 withSettingsInterpolator:(id)arg2 preservingFiltersIfIdentity:(bool)arg3;
- (void)_configureBackdropLayerIfNecessaryWithSettingsInterpolator:(id)arg1;
- (void)_configureDelegateFlagsForDelegate:(id)arg1;
- (void)_configureIfNecessaryWithSettingsInterpolator:(id)arg1;
- (bool)_delegateManagesWeighting;
- (bool)_didValueChangeForKey:(id)arg1 withPendingChange:(id)arg2;
- (id)_effectiveDebugIdentifier;
- (bool)_isDelegateManagingInterpolation;
- (bool)_isDelegateManagingOpacity;
- (bool)_needsPruning;
- (void)_pruneAtCompletionOfCurrentTransaction;
- (void)_updateForChangeInRecipeAndConfiguration;
- (void)_updateForChangeInWeighting;
- (void)_updateVisualStylingProviders;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (bool)allowsInPlaceFiltering;
- (id)debugIdentifier;
- (id /* block */)defaultBackdropScaleAdjustment;
- (id)description;
- (void)didChangeValueForKey:(id)arg1;
- (id)init;
- (bool)isReduceMotionEnabled;
- (bool)isReduceTransparencyEnabled;
- (void)layoutSublayers;
- (void)prune;
- (void)setAllowsInPlaceFiltering:(bool)arg1;
- (void)setDebugIdentifier:(id)arg1;
- (void)setDefaultBackdropScaleAdjustment:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setReduceMotionEnabled:(bool)arg1;
- (void)setReduceTransparencyEnabled:(bool)arg1;
- (void)setUnsafeUnretainedDelegate:(id)arg1;
- (bool)shouldArchiveValueForKey:(id)arg1;
- (id)visualStylingProviderForCategory:(id)arg1;
- (void)willChangeValueForKey:(id)arg1;

// MTMaterialLayer (Internal)

- (bool)_hasInoperativeAppearance;
- (double)_privateOpacity;
- (void)_reevaluateDefaultShouldCrossfade;
- (void)_setHasInoperativeAppearance:(bool)arg1 removingIfIdentity:(bool)arg2;
- (void)_setNeedsConfiguring;
- (void)_setPrivateOpacity:(double)arg1 removingIfIdentity:(bool)arg2;

// MTMaterialLayer (Private)

+ (id)mt_animatableKeys;
+ (id)mt_implicitlyAnimatableKeys;

- (double)_backdropScale;
- (id /* block */)backdropScaleAdjustment;
- (id /* block */)blurRadiusTransformer;
- (bool)isBlurEnabled;
- (bool)isContentReplacedWithSnapshot;
- (bool)isZoomEnabled;
- (id)recipeName;
- (void)setBackdropScaleAdjustment:(id /* block */)arg1;
- (void)setBlurEnabled:(bool)arg1;
- (void)setBlurRadiusTransformer:(id /* block */)arg1;
- (void)setContentReplacedWithSnapshot:(bool)arg1;
- (void)setRecipeName:(id)arg1;
- (void)setRecipeName:(id)arg1 fromBundle:(id)arg2;
- (void)setShouldCrossfade:(bool)arg1;
- (void)setZoomEnabled:(bool)arg1;
- (bool)shouldCrossfade;

@end
