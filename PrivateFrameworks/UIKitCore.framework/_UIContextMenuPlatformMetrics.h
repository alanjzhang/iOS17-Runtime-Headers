/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuPlatformMetrics : NSObject <_UIVisualStyleProviding> {
    NSDictionary * _accessorySeparatedOptions;
    bool  _alignMenuHeaderAndItemContents;
    bool  _allowsItemHighlighting;
    id /* block */  _animateAlongsideTransition;
    bool  _applySubmenuScaling;
    struct CAPoint3D { 
        double x; 
        double y; 
        double z; 
    }  _baseMenuOffset;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _cellBackgroundInsets;
    id /* block */  _cellBackgroundProvider;
    id /* block */  _containerViewProvider;
    bool  _contentInsetsApplyToHeaders;
    id /* block */  _contentSpacingForContainer;
    id /* block */  _controlAttachmentYOffsetProvider;
    id /* block */  _convertPointBetweenViews;
    UIImageSymbolConfiguration * _decorationViewSymbolConfiguration;
    double  _defaultMenuWidth;
    double  _dynamicImageBoxWidth;
    bool  _enableFloatingFocusStyle;
    bool  _enableShadowsForStandardSizeMenus;
    bool  _forceUnpinnedHeader;
    _UIContextMenuGradientMaskingConfiguration * _gradientMaskingConfiguration;
    UIFont * _headerFont;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _headerPadding;
    UIColor * _headerPrimaryColor;
    id /* block */  _headerPrimaryCompositingFilterProvider;
    long long  _headerRenderingMode;
    long long  _headerTextAlignment;
    UIFont * _iconEmphasizedSymbolFont;
    UIFont * _iconSymbolFont;
    id /* block */  _itemBackgroundColorProvider;
    double  _itemBaselineToBaseline;
    id /* block */  _itemColoredSymbolImageUserInterfaceStyleOverrideProvider;
    double  _itemLastBaselineToBottom;
    double  _itemLastBaselineToBottomWithSubtitle;
    double  _itemPrimaryAlpha;
    UIColor * _itemPrimaryColor;
    id /* block */  _itemPrimaryColorProvider;
    id /* block */  _itemPrimaryCompositingFilterProvider;
    id /* block */  _itemPrimaryDestructiveColorProvider;
    UIVisualEffect * _itemSeparatorBackgroundEffect;
    UIColor * _itemSeparatorColor;
    double  _itemSeparatorHeight;
    UIColor * _itemSubtitleColor;
    id /* block */  _itemSubtitleCompositingFilterProvider;
    long long  _itemSubtitleRenderingMode;
    double  _itemTopToFirstBaseline;
    double  _itemTopToFirstBaselineWithSubtitle;
    double  _largePaletteWidthExtension;
    struct CAPoint3D { 
        double x; 
        double y; 
        double z; 
    }  _leadingCascadedSubmenuOffset;
    double  _leadingDecorationViewOffset;
    bool  _leadingIndentationContributesToWidth;
    double  _leadingIndentationWidth;
    double  _maxLiftScale;
    double  _maxLiftScaleUpPoints;
    UIColor * _menuBackgroundColor;
    UIVisualEffect * _menuBackgroundEffect;
    double  _menuCornerRadius;
    double  _menuGutterWidth;
    UIColor * _menuHighlightBackgroundColor;
    UIVisualEffect * _menuHighlightBackgroundEffect;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _menuItemInternalPadding;
    double  _menuMaximumHeight;
    double  _menuMinimumScale;
    bool  _menuTitleAlwaysShowsSeparator;
    UIFont * _menuTitleFont;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _menuTitlePadding;
    long long  _menuTitleTextAlignment;
    double  _minIntraItemSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _minimumContainerInsets;
    id /* block */  _overrideElementSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _paletteMinimumItemSize;
    id /* block */  _postDismissalHandler;
    id /* block */  _preDismissalHandler;
    id /* block */  _prefersWrapToSidesHandler;
    _UIClickPresentationFeedbackGeneratorConfiguration * _presentationFeedbackConfiguration;
    double  _previewActionsStyleDragZTearOffThreshold;
    double  _previewRotationMaxDegrees;
    double  _previewRubberbandingZCoefficient;
    _UIPlatterShadowSettings * _previewShadowSettings;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _sectionInsets;
    UIColor * _sectionSeparatorColor;
    double  _sectionSeparatorHeight;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _sectionSeparatorInsets;
    id /* block */  _shouldApplyClippingHandler;
    id /* block */  _shouldApplyShadowHandler;
    bool  _shouldDismissMenuOnSceneDeactivation;
    struct CAPoint3D { 
        double x; 
        double y; 
        double z; 
    }  _stackedSubmenuOffset;
    NSDictionary * _submenuSeparatedOptions;
    UIFont * _subtitleFont;
    bool  _supportsLargePaletteMenus;
    UIFont * _titleEmphasizedFont;
    UIFont * _titleFont;
    UIColor * _trailingAccessoryColor;
    struct CAPoint3D { 
        double x; 
        double y; 
        double z; 
    }  _trailingCascadedSubmenuOffset;
    double  _trailingDecorationViewOffset;
    bool  _wantsControlAlignmentWithHorizontalEdgeAdjustment;
}

@property (nonatomic, retain) NSDictionary *accessorySeparatedOptions;
@property (nonatomic) bool alignMenuHeaderAndItemContents;
@property (nonatomic) bool allowsItemHighlighting;
@property (nonatomic, copy) id /* block */ animateAlongsideTransition;
@property (nonatomic) bool applySubmenuScaling;
@property (nonatomic) struct CAPoint3D { double x1; double x2; double x3; } baseMenuOffset;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } cellBackgroundInsets;
@property (nonatomic, copy) id /* block */ cellBackgroundProvider;
@property (nonatomic, copy) id /* block */ containerViewProvider;
@property (nonatomic) bool contentInsetsApplyToHeaders;
@property (nonatomic, copy) id /* block */ contentSpacingForContainer;
@property (nonatomic, copy) id /* block */ controlAttachmentYOffsetProvider;
@property (nonatomic, copy) id /* block */ convertPointBetweenViews;
@property (nonatomic, copy) UIImageSymbolConfiguration *decorationViewSymbolConfiguration;
@property (nonatomic) double defaultMenuWidth;
@property (nonatomic) double dynamicImageBoxWidth;
@property (nonatomic) bool enableFloatingFocusStyle;
@property (nonatomic) bool enableShadowsForStandardSizeMenus;
@property (nonatomic) bool forceUnpinnedHeader;
@property (nonatomic, retain) _UIContextMenuGradientMaskingConfiguration *gradientMaskingConfiguration;
@property (nonatomic, retain) UIFont *headerFont;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } headerPadding;
@property (nonatomic, retain) UIColor *headerPrimaryColor;
@property (nonatomic, copy) id /* block */ headerPrimaryCompositingFilterProvider;
@property (nonatomic) long long headerRenderingMode;
@property (nonatomic) long long headerTextAlignment;
@property (nonatomic, retain) UIFont *iconEmphasizedSymbolFont;
@property (nonatomic, retain) UIFont *iconSymbolFont;
@property (nonatomic, copy) id /* block */ itemBackgroundColorProvider;
@property (nonatomic) double itemBaselineToBaseline;
@property (nonatomic, copy) id /* block */ itemColoredSymbolImageUserInterfaceStyleOverrideProvider;
@property (nonatomic) double itemLastBaselineToBottom;
@property (nonatomic) double itemLastBaselineToBottomWithSubtitle;
@property (nonatomic) double itemPrimaryAlpha;
@property (nonatomic, retain) UIColor *itemPrimaryColor;
@property (nonatomic, copy) id /* block */ itemPrimaryColorProvider;
@property (nonatomic, copy) id /* block */ itemPrimaryCompositingFilterProvider;
@property (nonatomic, copy) id /* block */ itemPrimaryDestructiveColorProvider;
@property (nonatomic, retain) UIVisualEffect *itemSeparatorBackgroundEffect;
@property (nonatomic, retain) UIColor *itemSeparatorColor;
@property (nonatomic) double itemSeparatorHeight;
@property (nonatomic, retain) UIColor *itemSubtitleColor;
@property (nonatomic, copy) id /* block */ itemSubtitleCompositingFilterProvider;
@property (nonatomic) long long itemSubtitleRenderingMode;
@property (nonatomic) double itemTopToFirstBaseline;
@property (nonatomic) double itemTopToFirstBaselineWithSubtitle;
@property (nonatomic) double largePaletteWidthExtension;
@property (nonatomic) struct CAPoint3D { double x1; double x2; double x3; } leadingCascadedSubmenuOffset;
@property (nonatomic) double leadingDecorationViewOffset;
@property (nonatomic) bool leadingIndentationContributesToWidth;
@property (nonatomic) double leadingIndentationWidth;
@property (nonatomic) double maxLiftScale;
@property (nonatomic) double maxLiftScaleUpPoints;
@property (nonatomic, retain) UIColor *menuBackgroundColor;
@property (nonatomic, retain) UIVisualEffect *menuBackgroundEffect;
@property (nonatomic) double menuCornerRadius;
@property (nonatomic) double menuGutterWidth;
@property (nonatomic, retain) UIColor *menuHighlightBackgroundColor;
@property (nonatomic, retain) UIVisualEffect *menuHighlightBackgroundEffect;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } menuItemInternalPadding;
@property (nonatomic) double menuMaximumHeight;
@property (nonatomic) double menuMinimumScale;
@property (nonatomic) bool menuTitleAlwaysShowsSeparator;
@property (nonatomic, retain) UIFont *menuTitleFont;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } menuTitlePadding;
@property (nonatomic) long long menuTitleTextAlignment;
@property (nonatomic) double minIntraItemSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } minimumContainerInsets;
@property (nonatomic, copy) id /* block */ overrideElementSize;
@property (nonatomic) struct CGSize { double x1; double x2; } paletteMinimumItemSize;
@property (nonatomic, copy) id /* block */ postDismissalHandler;
@property (nonatomic, copy) id /* block */ preDismissalHandler;
@property (nonatomic, copy) id /* block */ prefersWrapToSidesHandler;
@property (nonatomic, retain) _UIClickPresentationFeedbackGeneratorConfiguration *presentationFeedbackConfiguration;
@property (nonatomic) double previewActionsStyleDragTearOffThreshold;
@property (nonatomic) double previewActionsStyleDragZTearOffThreshold;
@property (nonatomic) double previewRotationMaxDegrees;
@property (nonatomic) double previewRubberbandingCoefficient;
@property (nonatomic) double previewRubberbandingZCoefficient;
@property (nonatomic, retain) _UIPlatterShadowSettings *previewShadowSettings;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } sectionInsets;
@property (nonatomic, retain) UIColor *sectionSeparatorColor;
@property (nonatomic) double sectionSeparatorHeight;
@property (nonatomic) struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; } sectionSeparatorInsets;
@property (nonatomic, copy) id /* block */ shouldApplyClippingHandler;
@property (nonatomic, copy) id /* block */ shouldApplyShadowHandler;
@property (nonatomic) bool shouldDismissMenuOnSceneDeactivation;
@property (nonatomic) struct CAPoint3D { double x1; double x2; double x3; } stackedSubmenuOffset;
@property (nonatomic, retain) NSDictionary *submenuSeparatedOptions;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (nonatomic) bool supportsLargePaletteMenus;
@property (nonatomic, retain) UIFont *titleEmphasizedFont;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UIColor *trailingAccessoryColor;
@property (nonatomic) struct CAPoint3D { double x1; double x2; double x3; } trailingCascadedSubmenuOffset;
@property (nonatomic) double trailingDecorationViewOffset;
@property (nonatomic) bool wantsControlAlignmentWithHorizontalEdgeAdjustment;

- (void).cxx_destruct;
- (id)accessorySeparatedOptions;
- (bool)alignMenuHeaderAndItemContents;
- (bool)allowsItemHighlighting;
- (id /* block */)animateAlongsideTransition;
- (bool)applySubmenuScaling;
- (struct CAPoint3D { double x1; double x2; double x3; })baseMenuOffset;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })cellBackgroundInsets;
- (id /* block */)cellBackgroundProvider;
- (id /* block */)containerViewProvider;
- (bool)contentInsetsApplyToHeaders;
- (id /* block */)contentSpacingForContainer;
- (id /* block */)controlAttachmentYOffsetProvider;
- (id /* block */)convertPointBetweenViews;
- (id)decorationViewSymbolConfiguration;
- (double)defaultMenuWidth;
- (double)dynamicImageBoxWidth;
- (bool)enableFloatingFocusStyle;
- (bool)enableShadowsForStandardSizeMenus;
- (bool)forceUnpinnedHeader;
- (id)gradientMaskingConfiguration;
- (id)headerFont;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })headerPadding;
- (id)headerPrimaryColor;
- (id /* block */)headerPrimaryCompositingFilterProvider;
- (long long)headerRenderingMode;
- (long long)headerTextAlignment;
- (id)iconEmphasizedSymbolFont;
- (id)iconSymbolFont;
- (id)init;
- (id /* block */)itemBackgroundColorProvider;
- (double)itemBaselineToBaseline;
- (id /* block */)itemColoredSymbolImageUserInterfaceStyleOverrideProvider;
- (double)itemLastBaselineToBottom;
- (double)itemLastBaselineToBottomWithSubtitle;
- (double)itemPrimaryAlpha;
- (id)itemPrimaryColor;
- (id /* block */)itemPrimaryColorProvider;
- (id /* block */)itemPrimaryCompositingFilterProvider;
- (id /* block */)itemPrimaryDestructiveColorProvider;
- (id)itemSeparatorBackgroundEffect;
- (id)itemSeparatorColor;
- (double)itemSeparatorHeight;
- (id)itemSubtitleColor;
- (id /* block */)itemSubtitleCompositingFilterProvider;
- (long long)itemSubtitleRenderingMode;
- (double)itemTopToFirstBaseline;
- (double)itemTopToFirstBaselineWithSubtitle;
- (double)largePaletteWidthExtension;
- (struct CAPoint3D { double x1; double x2; double x3; })leadingCascadedSubmenuOffset;
- (double)leadingDecorationViewOffset;
- (bool)leadingIndentationContributesToWidth;
- (double)leadingIndentationWidth;
- (double)maxLiftScale;
- (double)maxLiftScaleUpPoints;
- (id)menuBackgroundColor;
- (id)menuBackgroundEffect;
- (double)menuCornerRadius;
- (double)menuGutterWidth;
- (id)menuHighlightBackgroundColor;
- (id)menuHighlightBackgroundEffect;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })menuItemInternalPadding;
- (double)menuMaximumHeight;
- (double)menuMinimumScale;
- (bool)menuTitleAlwaysShowsSeparator;
- (id)menuTitleFont;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })menuTitlePadding;
- (long long)menuTitleTextAlignment;
- (double)minIntraItemSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })minimumContainerInsets;
- (id /* block */)overrideElementSize;
- (struct CGSize { double x1; double x2; })paletteMinimumItemSize;
- (id /* block */)postDismissalHandler;
- (id /* block */)preDismissalHandler;
- (id /* block */)prefersWrapToSidesHandler;
- (id)presentationFeedbackConfiguration;
- (double)previewActionsStyleDragTearOffThreshold;
- (double)previewActionsStyleDragZTearOffThreshold;
- (double)previewRotationMaxDegrees;
- (double)previewRubberbandingCoefficient;
- (double)previewRubberbandingZCoefficient;
- (id)previewShadowSettings;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })sectionInsets;
- (id)sectionSeparatorColor;
- (double)sectionSeparatorHeight;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })sectionSeparatorInsets;
- (void)setAccessorySeparatedOptions:(id)arg1;
- (void)setAlignMenuHeaderAndItemContents:(bool)arg1;
- (void)setAllowsItemHighlighting:(bool)arg1;
- (void)setAnimateAlongsideTransition:(id /* block */)arg1;
- (void)setApplySubmenuScaling:(bool)arg1;
- (void)setBaseMenuOffset:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
- (void)setCellBackgroundInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCellBackgroundProvider:(id /* block */)arg1;
- (void)setContainerViewProvider:(id /* block */)arg1;
- (void)setContentInsetsApplyToHeaders:(bool)arg1;
- (void)setContentSpacingForContainer:(id /* block */)arg1;
- (void)setControlAttachmentYOffsetProvider:(id /* block */)arg1;
- (void)setConvertPointBetweenViews:(id /* block */)arg1;
- (void)setDecorationViewSymbolConfiguration:(id)arg1;
- (void)setDefaultMenuWidth:(double)arg1;
- (void)setDynamicImageBoxWidth:(double)arg1;
- (void)setEnableFloatingFocusStyle:(bool)arg1;
- (void)setEnableShadowsForStandardSizeMenus:(bool)arg1;
- (void)setForceUnpinnedHeader:(bool)arg1;
- (void)setGradientMaskingConfiguration:(id)arg1;
- (void)setHeaderFont:(id)arg1;
- (void)setHeaderPadding:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setHeaderPrimaryColor:(id)arg1;
- (void)setHeaderPrimaryCompositingFilterProvider:(id /* block */)arg1;
- (void)setHeaderRenderingMode:(long long)arg1;
- (void)setHeaderTextAlignment:(long long)arg1;
- (void)setIconEmphasizedSymbolFont:(id)arg1;
- (void)setIconSymbolFont:(id)arg1;
- (void)setItemBackgroundColorProvider:(id /* block */)arg1;
- (void)setItemBaselineToBaseline:(double)arg1;
- (void)setItemColoredSymbolImageUserInterfaceStyleOverrideProvider:(id /* block */)arg1;
- (void)setItemLastBaselineToBottom:(double)arg1;
- (void)setItemLastBaselineToBottomWithSubtitle:(double)arg1;
- (void)setItemPrimaryAlpha:(double)arg1;
- (void)setItemPrimaryColor:(id)arg1;
- (void)setItemPrimaryColorProvider:(id /* block */)arg1;
- (void)setItemPrimaryCompositingFilterProvider:(id /* block */)arg1;
- (void)setItemPrimaryDestructiveColorProvider:(id /* block */)arg1;
- (void)setItemSeparatorBackgroundEffect:(id)arg1;
- (void)setItemSeparatorColor:(id)arg1;
- (void)setItemSeparatorHeight:(double)arg1;
- (void)setItemSubtitleColor:(id)arg1;
- (void)setItemSubtitleCompositingFilterProvider:(id /* block */)arg1;
- (void)setItemSubtitleRenderingMode:(long long)arg1;
- (void)setItemTopToFirstBaseline:(double)arg1;
- (void)setItemTopToFirstBaselineWithSubtitle:(double)arg1;
- (void)setLargePaletteWidthExtension:(double)arg1;
- (void)setLeadingCascadedSubmenuOffset:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
- (void)setLeadingDecorationViewOffset:(double)arg1;
- (void)setLeadingIndentationContributesToWidth:(bool)arg1;
- (void)setLeadingIndentationWidth:(double)arg1;
- (void)setMaxLiftScale:(double)arg1;
- (void)setMaxLiftScaleUpPoints:(double)arg1;
- (void)setMenuBackgroundColor:(id)arg1;
- (void)setMenuBackgroundEffect:(id)arg1;
- (void)setMenuCornerRadius:(double)arg1;
- (void)setMenuGutterWidth:(double)arg1;
- (void)setMenuHighlightBackgroundColor:(id)arg1;
- (void)setMenuHighlightBackgroundEffect:(id)arg1;
- (void)setMenuItemInternalPadding:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMenuMaximumHeight:(double)arg1;
- (void)setMenuMinimumScale:(double)arg1;
- (void)setMenuTitleAlwaysShowsSeparator:(bool)arg1;
- (void)setMenuTitleFont:(id)arg1;
- (void)setMenuTitlePadding:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMenuTitleTextAlignment:(long long)arg1;
- (void)setMinIntraItemSpacing:(double)arg1;
- (void)setMinimumContainerInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setOverrideElementSize:(id /* block */)arg1;
- (void)setPaletteMinimumItemSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPostDismissalHandler:(id /* block */)arg1;
- (void)setPreDismissalHandler:(id /* block */)arg1;
- (void)setPrefersWrapToSidesHandler:(id /* block */)arg1;
- (void)setPresentationFeedbackConfiguration:(id)arg1;
- (void)setPreviewActionsStyleDragTearOffThreshold:(double)arg1;
- (void)setPreviewActionsStyleDragZTearOffThreshold:(double)arg1;
- (void)setPreviewRotationMaxDegrees:(double)arg1;
- (void)setPreviewRubberbandingCoefficient:(double)arg1;
- (void)setPreviewRubberbandingZCoefficient:(double)arg1;
- (void)setPreviewShadowSettings:(id)arg1;
- (void)setSectionInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setSectionSeparatorColor:(id)arg1;
- (void)setSectionSeparatorHeight:(double)arg1;
- (void)setSectionSeparatorInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setShouldApplyClippingHandler:(id /* block */)arg1;
- (void)setShouldApplyShadowHandler:(id /* block */)arg1;
- (void)setShouldDismissMenuOnSceneDeactivation:(bool)arg1;
- (void)setStackedSubmenuOffset:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
- (void)setSubmenuSeparatedOptions:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setSupportsLargePaletteMenus:(bool)arg1;
- (void)setTitleEmphasizedFont:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTrailingAccessoryColor:(id)arg1;
- (void)setTrailingCascadedSubmenuOffset:(struct CAPoint3D { double x1; double x2; double x3; })arg1;
- (void)setTrailingDecorationViewOffset:(double)arg1;
- (void)setWantsControlAlignmentWithHorizontalEdgeAdjustment:(bool)arg1;
- (id /* block */)shouldApplyClippingHandler;
- (id /* block */)shouldApplyShadowHandler;
- (bool)shouldDismissMenuOnSceneDeactivation;
- (struct CAPoint3D { double x1; double x2; double x3; })stackedSubmenuOffset;
- (id)submenuSeparatedOptions;
- (id)subtitleFont;
- (bool)supportsLargePaletteMenus;
- (id)titleEmphasizedFont;
- (id)titleFont;
- (id)trailingAccessoryColor;
- (struct CAPoint3D { double x1; double x2; double x3; })trailingCascadedSubmenuOffset;
- (double)trailingDecorationViewOffset;
- (bool)wantsControlAlignmentWithHorizontalEdgeAdjustment;

@end