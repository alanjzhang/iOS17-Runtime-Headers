/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface _UIActivityGroupViewFlowLayout : UICollectionViewLayout {
    struct UIOffset { 
        double horizontal; 
        double vertical; 
    }  _draggingOffset;
    _UIActivityGroupActivityCell * _draggingView;
    UILongPressGestureRecognizer * _editingGestureRecognizer;
    struct CGSize { 
        double width; 
        double height; 
    }  _evaluatedContentSize;
    double  _evaluatedHorizontalItemOffset;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _evaluatedInset;
    struct CGSize { 
        double width; 
        double height; 
    }  _evaluatedItemSize;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _externalSafeInset;
    NSIndexPath * _indexPathForDraggedItem;
    NSArray * _preparedLayoutAttributes;
    NSArray * _preparedUpdateItems;
}

@property (nonatomic) struct UIOffset { double x1; double x2; } draggingOffset;
@property (nonatomic, retain) _UIActivityGroupActivityCell *draggingView;
@property (nonatomic, retain) UILongPressGestureRecognizer *editingGestureRecognizer;
@property (nonatomic) struct CGSize { double x1; double x2; } evaluatedContentSize;
@property (nonatomic) double evaluatedHorizontalItemOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } evaluatedInset;
@property (nonatomic) struct CGSize { double x1; double x2; } evaluatedItemSize;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } externalSafeInset;
@property (nonatomic, copy) NSIndexPath *indexPathForDraggedItem;
@property (nonatomic, copy) NSArray *preparedLayoutAttributes;
@property (nonatomic, copy) NSArray *preparedUpdateItems;

- (void).cxx_destruct;
- (double)_evaluateHorizontalItemOffsetForItemSize:(struct CGSize { double x1; double x2; })arg1 inset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2 offscreenPeekInFactor:(float)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_evaluateInsetForSectionAtIndex:(long long)arg1;
- (struct CGSize { double x1; double x2; })_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;
- (id)_indexPathsForItemsInSection:(long long)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(unsigned long long)arg2;
- (bool)_shouldScrollToContentBeginningInRightToLeft;
- (id)adjustLayoutAttributesForDraggingIfNeeded:(id)arg1;
- (void)beginDraggingForGesture:(id)arg1;
- (void)cancelDraggingForGesture:(id)arg1;
- (struct CGSize { double x1; double x2; })collectionViewContentSize;
- (struct UIOffset { double x1; double x2; })draggingOffset;
- (id)draggingView;
- (id)draggingViewForItemAtIndexPath:(id)arg1;
- (id)editingGestureRecognizer;
- (struct CGSize { double x1; double x2; })evaluatedContentSize;
- (double)evaluatedHorizontalItemOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })evaluatedInset;
- (struct CGSize { double x1; double x2; })evaluatedItemSize;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })externalSafeInset;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)handleEditingGesture:(id)arg1;
- (id)indexPathForDraggedItem;
- (id)indexPathForItemRecognizedByGesture:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)invalidateGroupViewLayoutAnimated:(bool)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (id)preparedLayoutAttributes;
- (id)preparedUpdateItems;
- (void)setDraggingOffset:(struct UIOffset { double x1; double x2; })arg1;
- (void)setDraggingView:(id)arg1;
- (void)setEditingGestureRecognizer:(id)arg1;
- (void)setEvaluatedContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setEvaluatedHorizontalItemOffset:(double)arg1;
- (void)setEvaluatedInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setEvaluatedItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setExternalSafeInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIndexPathForDraggedItem:(id)arg1;
- (void)setPreparedLayoutAttributes:(id)arg1;
- (void)setPreparedUpdateItems:(id)arg1;
- (bool)shouldCancelDraggingForGesture:(id)arg1;
- (bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)shouldReverseLayoutDirection;
- (void)updateDraggingViewForGesture:(id)arg1;

@end