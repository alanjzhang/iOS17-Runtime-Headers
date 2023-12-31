/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UISlidingBarState : NSObject <NSCopying> {
    long long  __collapsedState;
    double  __keyboardAdjustment;
    double  __leadingOverlayWidth;
    double  __rubberBandInset;
    double  __supplementaryOverlayWidth;
    double  __trailingOverlayWidth;
    bool  __treatLeadingHiddenAsOverlaps;
    bool  __treatSupplementaryHiddenAsOverlaps;
    bool  __treatTrailingHiddenAsOverlaps;
    UISlidingBarConfiguration * _configuration;
    double  _leadingDragOffset;
    double  _leadingOffscreenWidth;
    double  _leadingWidth;
    double  _mainWidth;
    double  _supplementaryDragOffset;
    double  _supplementaryOffscreenWidth;
    double  _supplementaryWidth;
    double  _trailingDragOffset;
    double  _trailingOffscreenWidth;
    double  _trailingWidth;
}

@property (setter=_setCollapsedState:, nonatomic) long long _collapsedState;
@property (nonatomic) double _keyboardAdjustment;
@property (setter=_setLeadingOverlayWidth:, nonatomic) double _leadingOverlayWidth;
@property (nonatomic) double _rubberBandInset;
@property (setter=_setSupplementaryOverlayWidth:, nonatomic) double _supplementaryOverlayWidth;
@property (setter=_setTrailingOverlayWidth:, nonatomic) double _trailingOverlayWidth;
@property (setter=_setTreatLeadingHiddenAsOverlaps:, nonatomic) bool _treatLeadingHiddenAsOverlaps;
@property (setter=_setTreatSupplementaryHiddenAsOverlaps:, nonatomic) bool _treatSupplementaryHiddenAsOverlaps;
@property (setter=_setTreatTrailingHiddenAsOverlaps:, nonatomic) bool _treatTrailingHiddenAsOverlaps;
@property (getter=isCollapsed, nonatomic, readonly) bool collapsed;
@property (nonatomic, retain) UISlidingBarConfiguration *configuration;
@property (nonatomic, readonly) bool isLeadingVisible;
@property (nonatomic, readonly) bool isSupplementaryVisible;
@property (nonatomic, readonly) bool isTrailingVisible;
@property (nonatomic) double leadingDragOffset;
@property (nonatomic) double leadingOffscreenWidth;
@property (nonatomic, readonly) bool leadingOverlapsMain;
@property (nonatomic) double leadingWidth;
@property (nonatomic) double mainWidth;
@property (nonatomic) double supplementaryDragOffset;
@property (nonatomic) double supplementaryOffscreenWidth;
@property (nonatomic, readonly) bool supplementaryOverlapsMain;
@property (nonatomic) double supplementaryWidth;
@property (nonatomic) double trailingDragOffset;
@property (nonatomic) double trailingOffscreenWidth;
@property (nonatomic, readonly) bool trailingOverlapsMain;
@property (nonatomic) double trailingWidth;

- (void).cxx_destruct;
- (double)_absoluteDistanceFromRequest:(id)arg1;
- (long long)_collapsedState;
- (id)_configuration;
- (double)_distanceFromRequest:(id)arg1;
- (id)_interactiveStateRequest;
- (double)_keyboardAdjustment;
- (bool)_leadingEntirelyOverlapsMain;
- (double)_leadingOverlayWidth;
- (double)_rubberBandInset;
- (void)_setCollapsedState:(long long)arg1;
- (void)_setLeadingOverlayWidth:(double)arg1;
- (void)_setSupplementaryOverlayWidth:(double)arg1;
- (void)_setTrailingOverlayWidth:(double)arg1;
- (void)_setTreatLeadingHiddenAsOverlaps:(bool)arg1;
- (void)_setTreatSupplementaryHiddenAsOverlaps:(bool)arg1;
- (void)_setTreatTrailingHiddenAsOverlaps:(bool)arg1;
- (bool)_shouldUseSlidingBars;
- (bool)_supplementaryEntirelyOverlapsMain;
- (double)_supplementaryOverlayWidth;
- (bool)_trailingEntirelyOverlapsMain;
- (double)_trailingOverlayWidth;
- (bool)_treatLeadingHiddenAsOverlaps;
- (bool)_treatSupplementaryHiddenAsOverlaps;
- (bool)_treatTrailingHiddenAsOverlaps;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isCollapsed;
- (bool)isEqual:(id)arg1;
- (bool)isLeadingVisible;
- (bool)isSupplementaryVisible;
- (bool)isTrailingVisible;
- (double)leadingDragOffset;
- (double)leadingOffscreenWidth;
- (bool)leadingOverlapsMain;
- (double)leadingWidth;
- (double)mainWidth;
- (bool)matchesRequest:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setLeadingDragOffset:(double)arg1;
- (void)setLeadingOffscreenWidth:(double)arg1;
- (void)setLeadingWidth:(double)arg1;
- (void)setMainWidth:(double)arg1;
- (void)setSupplementaryDragOffset:(double)arg1;
- (void)setSupplementaryOffscreenWidth:(double)arg1;
- (void)setSupplementaryWidth:(double)arg1;
- (void)setTrailingDragOffset:(double)arg1;
- (void)setTrailingOffscreenWidth:(double)arg1;
- (void)setTrailingWidth:(double)arg1;
- (void)set_keyboardAdjustment:(double)arg1;
- (void)set_rubberBandInset:(double)arg1;
- (id)stateRequest;
- (double)supplementaryDragOffset;
- (double)supplementaryOffscreenWidth;
- (bool)supplementaryOverlapsMain;
- (double)supplementaryWidth;
- (double)trailingDragOffset;
- (double)trailingOffscreenWidth;
- (bool)trailingOverlapsMain;
- (double)trailingWidth;

@end
