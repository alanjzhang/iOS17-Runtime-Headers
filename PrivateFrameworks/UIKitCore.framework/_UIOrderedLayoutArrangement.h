/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIOrderedLayoutArrangement : _UILayoutArrangement <_UIOLAPropertySource> {
    bool  _baselineRelativeArrangement;
    NSMapTable * _customSpacings;
    long long  _distribution;
    NSMapTable * _edgeToEdgeConstraintsForHiddenItems;
    NSMapTable * _edgeToEdgeConstraintsForVisibleItems;
    NSMapTable * _hidingDimensionConstraints;
    bool  _itemFittingSizeChanged;
    bool  _itemOrderingChanged;
    NSMapTable * _multilineTextWidthDisambiguationConstraints;
    double  _proportionalFillDenominator;
    NSMapTable * _relatedDimensionConstraints;
    double  _spacing;
    NSMapTable * _spacingOrCenteringGuides;
}

@property (setter=_setItemFittingSizeChanged:, nonatomic) bool _itemFittingSizeChanged;
@property (setter=_setItemOrderingChanged:, nonatomic) bool _itemOrderingChanged;
@property (nonatomic, readonly) NSSet *_newlyHiddenItems;
@property (nonatomic, readonly) NSSet *_newlyUnhiddenItems;
@property (nonatomic) long long axis;
@property (getter=isBaselineRelativeArrangement, nonatomic) bool baselineRelativeArrangement;
@property (nonatomic, readonly) NSMapTable *customSpacings;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long distribution;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *invalidBaselineConstraints;
@property (nonatomic) bool layoutFillsCanvas;
@property (nonatomic) bool layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic) double spacing;
@property (readonly) Class superclass;

+ (Class)_configurationHistoryClass;

- (void).cxx_destruct;
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(bool)arg3 isFollowedByVisibleItem:(bool)arg4 isHidden:(bool)arg5;
- (void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenSpanningLayoutGuide:(id)arg1 hiddenItem:(id)arg2;
- (void)_adjustConstraintConstantsIfPossible;
- (id)_baselineViewVendTallest:(bool)arg1 forFirstBaseline:(bool)arg2;
- (double)_calculatedIntrinsicHeight;
- (bool)_canvasConnectionConstraintsNeedUpdatePass;
- (void)_cleanUpEdgeToEdgeConstraintsForHiddenItemsForItem:(id)arg1 atIndex:(unsigned long long)arg2 processAdjacentHiddenItems:(bool)arg3;
- (void)_cleanUpEdgeToEdgeConstraintsForVisibleItemsForItem:(id)arg1 atIndex:(unsigned long long)arg2 processPrecedingVisibleItem:(bool)arg3;
- (void)_cleanUpGuideAtGapFollowingItem:(id)arg1;
- (void)_cleanUpGuides;
- (void)_cleanUpWithoutResettingKeepAliveWorkaround;
- (void)_clearAllConstraintsArrays;
- (bool)_configurationRequiresCanvasConnectionFittingConstraint;
- (double)_constantForMultilineTextWidthDisambiguationConstraintWithNumberOfRelevantItems:(unsigned long long)arg1;
- (bool)_customSpacingChanged;
- (void)_didEvaluateMultilineHeightForView:(id)arg1;
- (id)_dimensionRefItemFromConstraint:(id)arg1;
- (id)_edgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(bool)arg3 isFollowedByVisibleItem:(bool)arg4;
- (double)_expectedEdgeToEdgeSpacingForPrecedingItem:(id)arg1 followingItem:(id)arg2 isPrecededByVisibleItem:(bool)arg3 isFollowedByVisibleItem:(bool)arg4;
- (id)_firstVisibleItem;
- (bool)_hasStaleConfiguration;
- (bool)_hasStaleSpacing;
- (id)_identifierForSpanningLayoutGuide;
- (unsigned long long)_indexOfItemForLocationAttribute:(long long)arg1;
- (void)_insertIndividualGuidesAndConstraintsAsNecessary;
- (void)_intrinsicContentSizeInvalidatedForItem:(id)arg1;
- (bool)_itemCountChanged;
- (bool)_itemFittingSizeChanged;
- (bool)_itemOrderingChanged;
- (id)_lastVisibleItem;
- (long long)_maxAttributeForGapConstraintRespectingBaselineRelative:(bool)arg1;
- (long long)_minAttributeForGapConstraint;
- (long long)_minAttributeForGapConstraintRespectingBaselineRelative:(bool)arg1;
- (bool)_monitorsSystemLayoutFittingSizeForItem:(id)arg1;
- (void)_notifyCanvasesBaselineParametersDidChange;
- (id)_orderedConfigurationHistory;
- (id)_orderedPropertySource;
- (long long)_precedingLocationAttributeForGuideConstraint;
- (id)_preparedFaultyCompatibleMultilineTextWidthDisambiguationConstraintForItem:(id)arg1;
- (id)_preparedImprovedMultilineTextWidthDisambiguationConstraintForItem:(id)arg1 numberOfVisibleMultilineItems:(unsigned long long)arg2;
- (void)_removeGuideAndConstraintGroupsAsNecessary;
- (void)_removeIndividualGuidesAndConstraintsAsNecessary;
- (void)_setItemFittingSizeChanged:(bool)arg1;
- (void)_setItemOrderingChanged:(bool)arg1;
- (void)_setUpDimensionConstraintForItem:(id)arg1 referenceItem:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)_setUpHidingDimensionConstraintForItem:(id)arg1;
- (void)_setUpMultilineTextWidthDisambiguationConstraintForItem:(id)arg1 numberOfVisibleMultilineItems:(unsigned long long)arg2;
- (id)_setUpSpacingOrCenteringGuideForGapIndex:(unsigned long long)arg1;
- (void)_systemLayoutFittingSizeDidChangeForItem:(id)arg1;
- (id)_tallestItem;
- (void)_trackChangesAffectingExternalBaselineConstraints:(id /* block */)arg1;
- (void)_updateArrangementConstraints;
- (void)_updateConfigurationHistory;
- (void)_visibilityParameterChangedForItem:(id)arg1;
- (id)_visibleItemAtEndWithEnumerationOptions:(unsigned long long)arg1;
- (bool)_wantsProportionalDistribution;
- (double)customSpacingAfterItem:(id)arg1;
- (id)customSpacings;
- (void)dealloc;
- (id)description;
- (long long)distribution;
- (void)insertItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isBaselineRelativeArrangement;
- (void)removeItem:(id)arg1;
- (void)setAxis:(long long)arg1;
- (void)setBaselineRelativeArrangement:(bool)arg1;
- (void)setCustomSpacing:(double)arg1 afterItem:(id)arg2;
- (void)setDistribution:(long long)arg1;
- (void)setLayoutFillsCanvas:(bool)arg1;
- (void)setLayoutUsesCanvasMarginsWhenFilling:(bool)arg1;
- (void)setSpacing:(double)arg1;
- (double)spacing;

@end