/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuStackedHierarchyLayout : NSObject <_UIContextMenuHierarchyLayout> {
    _UIContextMenuView * _menuView;
}

@property (nonatomic) _UIContextMenuView *menuView;

- (void).cxx_destruct;
- (id)_metrics;
- (struct CGSize { double x1; double x2; })encompassingSize;
- (id)initWithMenuView:(id)arg1;
- (id)menuView;
- (void)navigateDownFromNode:(id)arg1 toNode:(id)arg2 alongsideAnimations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)navigateUpFromNode:(id)arg1 toNode:(id)arg2 alongsideAnimations:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)performLayoutForComputingPreferredContentSize:(bool)arg1 withMaxContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setMenuView:(id)arg1;

@end
