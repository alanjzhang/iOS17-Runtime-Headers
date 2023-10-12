/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionViewCompositionalLayout : UICollectionViewLayout <_UICollectionViewLayoutInteractionStateModuleHost> {
    <UITraitChangeRegistration> * _collectionViewTraitChangeRegistration;
    struct { 
        unsigned int deferringInitialSolveUntilPrepare : 1; 
        unsigned int shouldAdjustContentInsetModeForCollectionViewNeverMode : 1; 
        unsigned int forceFullResolveOnNextInvalidation : 1; 
        unsigned int skippingDeferredSolvesUntilUpdateOrReloadDataInvalidation : 1; 
    }  _compositionalLayoutFlags;
    UICollectionViewCompositionalLayoutConfiguration * _configuration;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentFrame;
    _UICollectionCompositionalLayoutSolverResolveResult * _currentResolveResult;
    _UICollectionCompositionalLayoutSolverUpdate * _currentUpdate;
    _UIDataSourceSnapshotter * _dataSourceSnapshotter;
    unsigned long long  _deferredResolveType;
    id /* block */  _dynamicsConfigurationHandler;
    unsigned long long  _edgesForSafeAreaPropagation;
    _UICollectionViewLayoutInteractionStateModule * _interactionStateModule;
    bool  _layoutRTL;
    id /* block */  _layoutSectionProvider;
    NSCollectionLayoutSection * _layoutSectionTemplate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _memoizedDynamicAnimatorWorldAdjustingInsets;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _memoizedPreviousLayoutMargins;
    struct CGSize { 
        double width; 
        double height; 
    }  _memoizedPreviousSolvedViewBoundsSize;
    bool  _roundsToScreenScale;
    _UICollectionCompositionalLayoutSolver * _solver;
    _UIUpdateVisibleCellsContext * _updateVisibleCellsContext;
}

@property (nonatomic, copy) UICollectionViewCompositionalLayoutConfiguration *configuration;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentFrame;
@property (nonatomic, retain) _UICollectionCompositionalLayoutSolverResolveResult *currentResolveResult;
@property (nonatomic, retain) _UICollectionCompositionalLayoutSolverUpdate *currentUpdate;
@property (nonatomic, retain) _UIDataSourceSnapshotter *dataSourceSnapshotter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ dynamicsConfigurationHandler;
@property (nonatomic) unsigned long long edgesForSafeAreaPropagation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool layoutRTL;
@property (nonatomic, copy) id /* block */ layoutSectionProvider;
@property (nonatomic, retain) NSCollectionLayoutSection *layoutSectionTemplate;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } memoizedDynamicAnimatorWorldAdjustingInsets;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } memoizedPreviousLayoutMargins;
@property (nonatomic) struct CGSize { double x1; double x2; } memoizedPreviousSolvedViewBoundsSize;
@property (nonatomic) bool roundsToScreenScale;
@property (nonatomic, retain) _UICollectionCompositionalLayoutSolver *solver;
@property (readonly) Class superclass;
@property (nonatomic, retain) _UIUpdateVisibleCellsContext *updateVisibleCellsContext;

- (void).cxx_destruct;
- (bool)_adjustCollectionViewContentInsetBehaviorForLayoutAxisIfNeeded:(unsigned long long)arg1 container:(id)arg2;
- (double)_alignedContentMarginGivenMargin:(double)arg1;
- (bool)_allowsItemInteractionsToBegin;
- (bool)_allowsPanningAcrossConstrainedAxisToBeginMultiSelectInteractionInSection:(long long)arg1;
- (long long)_anchorForAuxiliaryElementOfKind:(id)arg1;
- (id)_boundsChangeResolve;
- (bool)_boundsSizeChangedFromLastSolvedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_cellBackgroundOrBottomSeparatorChangedAtIndexPath:(id)arg1 separatorOnly:(bool)arg2;
- (bool)_cellsShouldConferWithAutolayoutEngineForSizingInfo;
- (void)_collectionViewWillPerformPendingLayoutBeforeUpdate;
- (void)_computeAndUpdateAdjustedContentFrame;
- (id)_containerFromCollectionView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_contentFrameForSection:(long long)arg1;
- (id)_contentInsetsEnvironmentFromCollectionViewForInsetsReference:(long long)arg1;
- (void)_createSwipeActionsModuleIfNeeded;
- (id)_customContainerSectionIndexes;
- (id)_dataSourceSnapshotter;
- (void)_didEndSwiping;
- (void)_didPerformUpdateVisibleCellsPassWithLayoutOffset:(struct CGPoint { double x1; double x2; })arg1;
- (bool)_disallowsFadeCellsForBoundsChange;
- (unsigned long long)_edgesForSafeAreaPropagationToDescendants;
- (bool)_estimatesSizes;
- (bool)_estimatesSupplementaryItems;
- (id)_extendedAttributesQueryIncludingOrthogonalScrollingRegions:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_finalizeCollectionViewUpdate:(id)arg1;
- (void)_fullResolve;
- (void)_handleEndInteractiveReorderingWithContext:(id)arg1;
- (void)_handlePreferredSizingDataInvalidation:(id)arg1;
- (void)_handleSwipeActionsInvalidationWithContext:(id)arg1;
- (bool)_hasOrthogonalScrollingSections;
- (id)_interactionStateModule:(id)arg1 layoutSectionForIndex:(long long)arg2;
- (double)_interactionStateModule:(id)arg1 spacingAfterLayoutSection:(long long)arg2;
- (id)_invalidationContextForUpdatedLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_invokeVisibleBoundsUpdateForDynamicAnimatorForNewVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 preparingLayout:(bool)arg2;
- (id)_invokeVisibleItemsInvalidationHandlerIfNeededForVisibleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_layoutAttributesForIndelibleElements;
- (unsigned long long)_layoutAxis;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_layoutFrameForSection:(long long)arg1;
- (id)_layoutSectionForSectionIndex:(unsigned long long)arg1;
- (id)_leadingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (id)_marginsChangeResolve;
- (struct CGPoint { double x1; double x2; })_offsetForOrthogonalScrollingSection:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_orthogonalFrameWithOffsetElidedForItemWithLayoutAttributes:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (unsigned long long)_orthogonalScrollingAxis;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_orthogonalScrollingContentRectForSection:(long long)arg1;
- (double)_orthogonalScrollingDecelerationRateForSection:(long long)arg1;
- (bool)_orthogonalScrollingElementShouldAppearAboveForAttributes:(id)arg1;
- (bool)_orthogonalScrollingElementShouldAppearBelowForAttributes:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_orthogonalScrollingLayoutRectForSection:(long long)arg1;
- (id)_orthogonalScrollingSections;
- (bool)_overridesSafeAreaPropagationToDescendants;
- (void)_postProcessPreferredAttributes:(id)arg1 forView:(id)arg2;
- (id)_preferredAttributesResolveWithInvalidatedPreferredAttributes:(id)arg1 layoutOffset:(struct CGPoint { double x1; double x2; })arg2 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)_prepareForCollectionViewUpdates:(id)arg1 withDataSourceTranslator:(id)arg2;
- (void)_prepareForPreferredAttributesQueryForView:(id)arg1 withLayoutAttributes:(id)arg2;
- (void)_prepareForTransitionToLayout:(id)arg1;
- (void)_prepareLayout;
- (bool)_preparedForBoundsChanges;
- (id)_propertyAnimatorForCollectionViewUpdates:(id)arg1 withCustomAnimator:(id)arg2;
- (void)_queueDeferredResolveForInvalidationWithContext:(id)arg1;
- (void)_resolveImmediatelyForInvalidationWithContext:(id)arg1;
- (id)_scrollViewAdjustmentsChangeResolve;
- (void)_scrollViewLayoutAdjustmentsChanged;
- (id)_sectionDescriptorForSectionIndex:(long long)arg1;
- (id)_sectionsDescription;
- (void)_setCollectionView:(id)arg1;
- (void)_setOffset:(struct CGPoint { double x1; double x2; })arg1 forOrthogonalScrollingSection:(long long)arg2;
- (bool)_shouldAddElementToSectionContainer:(id)arg1;
- (bool)_shouldAdjustTargetContentOffsetToValidateContentExtents;
- (bool)_shouldInvalidateLayoutForDataSourceChange;
- (bool)_shouldInvalidateLayoutForOldInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 newInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)_shouldInvalidateLayoutForUpdatedLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 fromOldMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)_shouldInvalidateLayoutForUpdatedSafeAreaInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 fromOldInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)_shouldOrthogonalScrollingSectionDecorationScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (bool)_shouldOrthogonalScrollingSectionSupplementaryScrollWithContentForIndexPath:(id)arg1 elementKind:(id)arg2;
- (void)_solveForPinnedSupplementaryItemsIfNeededWithContext:(id)arg1;
- (void)_solverObservedTraitsDidChange;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_supplementaryViewInsetsForScrollingToItemAtIndexPath:(id)arg1;
- (bool)_supportsPrefetchingWithEstimatedSizes;
- (bool)_supportsSwipeActionsForIndexPath:(id)arg1;
- (struct CGPoint { double x1; double x2; })_targetPositionForInteractiveMovementOfItemAtIndexPath:(id)arg1 withProposedTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)_trailingSwipeActionsConfigurationForIndexPath:(id)arg1;
- (void)_transformCellLayoutAttributes:(id)arg1;
- (void)_transformDecorationLayoutAttributes:(id)arg1;
- (void)_transformSupplementaryLayoutAttributes:(id)arg1;
- (void)_updateCollectionViewBackgroundColor;
- (id)_updatePinnedSectionSupplementaryItemsForCurrentVisibleBounds;
- (id)_updateResolve;
- (void)_updateStyleForSwipeActionsConfiguration:(id)arg1 indexPath:(id)arg2;
- (bool)_viewBoundsPermitsLayout:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_wantsAnimationsForOffscreenAuxillaries;
- (bool)_wantsBandSelectionVisualsInSection:(long long)arg1;
- (bool)_wantsCustomSectionContainers;
- (bool)_wantsInvalidateLayoutForPreferredLayoutAttributes;
- (bool)_wantsUntrackedAnimationCleanupForAuxillaryItems;
- (bool)_wantsUpdateVisibleCellsPassNotifications;
- (void)_willBeginSwiping;
- (void)_willPerformUpdateVisibleCellsPass;
- (id)boundarySupplementaryItems;
- (bool)canBeEdited;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (id)configuration;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentFrame;
- (id)currentResolveResult;
- (id)currentUpdate;
- (id)dataSourceSnapshotter;
- (id /* block */)dynamicsConfigurationHandler;
- (unsigned long long)edgesForSafeAreaPropagation;
- (id)finalLayoutAttributesForDisappearingDecorationElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToDeleteForSupplementaryViewOfKind:(id)arg1;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)arg1;
- (id)indexPathsToInsertForSupplementaryViewOfKind:(id)arg1;
- (id)initWithLayoutSection:(id)arg1;
- (id)initWithLayoutSection:(id)arg1 scrollDirection:(long long)arg2;
- (id)initWithSection:(id)arg1;
- (id)initWithSection:(id)arg1 configuration:(id)arg2;
- (id)initWithSection:(id)arg1 sectionProvider:(id /* block */)arg2 configuration:(id)arg3;
- (id)initWithSectionProvider:(id /* block */)arg1;
- (id)initWithSectionProvider:(id /* block */)arg1 configuration:(id)arg2;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (bool)isEditing;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForInteractivelyMovingItemAtIndexPath:(id)arg1 withTargetPosition:(struct CGPoint { double x1; double x2; })arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (bool)layoutRTL;
- (id /* block */)layoutSectionProvider;
- (id)layoutSectionTemplate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })memoizedDynamicAnimatorWorldAdjustingInsets;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })memoizedPreviousLayoutMargins;
- (struct CGSize { double x1; double x2; })memoizedPreviousSolvedViewBoundsSize;
- (void)prepareLayout;
- (bool)roundsToScreenScale;
- (long long)scrollDirection;
- (void)setBoundarySupplementaryItems:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setContentFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentResolveResult:(id)arg1;
- (void)setCurrentUpdate:(id)arg1;
- (void)setDataSourceSnapshotter:(id)arg1;
- (void)setDynamicsConfigurationHandler:(id /* block */)arg1;
- (void)setEdgesForSafeAreaPropagation:(unsigned long long)arg1;
- (void)setEditing:(bool)arg1;
- (void)setLayoutRTL:(bool)arg1;
- (void)setLayoutSectionProvider:(id /* block */)arg1;
- (void)setLayoutSectionTemplate:(id)arg1;
- (void)setMemoizedDynamicAnimatorWorldAdjustingInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMemoizedPreviousLayoutMargins:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMemoizedPreviousSolvedViewBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRoundsToScreenScale:(bool)arg1;
- (void)setSolver:(id)arg1;
- (void)setUpdateVisibleCellsContext:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)solver;
- (id)updateVisibleCellsContext;

// UICollectionViewCompositionalLayout (UICollectionLayoutListSection)

+ (id)layoutWithListConfiguration:(id)arg1;

@end
