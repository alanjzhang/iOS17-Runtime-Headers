/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionTableIndexOverlaySelectionViewCollectionViewCell : UICollectionViewCell {
    UIButton * _button;
    double  _rightMargin;
    bool  _rightMarginAdjusted;
    SEL  _tapAction;
    id  _tapTarget;
}

@property (readonly) UIButton *button;
@property (readonly) UILabel *label;
@property (nonatomic) double rightMargin;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) long long textAlignment;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (double)rightMargin;
- (void)setRightMargin:(double)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(long long)arg1;
- (id)text;
- (long long)textAlignment;
- (void)tintColorDidChange;

@end
