/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKHeaderView : TLKView <NUIContainerViewDelegate> {
    long long  _axis;
    TLKMultilineText * _footnote;
    TLKLabel * _footnoteLabel;
    TLKImage * _image;
    TLKImageView * _imageView;
    TLKStackView * _innerStackView;
    NSString * _roundedBorderText;
    TLKRoundedCornerLabel * _roundedCornerLabel;
    TLKRichText * _subtitle;
    TLKImage * _subtitleImage;
    TLKImageView * _subtitleImageView;
    bool  _subtitleIsEmphasized;
    TLKLabel * _subtitleLabel;
    TLKStackView * _subtitleStackView;
    TLKMultilineText * _title;
    TLKLabel * _titleLabel;
    TLKMultilineText * _trailingText;
    TLKLabel * _trailingTextLabel;
    bool  _useCompactWidth;
}

@property (nonatomic) long long axis;
@property (nonatomic, retain) TLKStackView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TLKMultilineText *footnote;
@property (nonatomic, retain) TLKLabel *footnoteLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKImage *image;
@property (nonatomic, retain) TLKImageView *imageView;
@property (nonatomic, retain) TLKStackView *innerStackView;
@property (nonatomic, retain) NSString *roundedBorderText;
@property (nonatomic, retain) TLKRoundedCornerLabel *roundedCornerLabel;
@property (nonatomic, retain) TLKRichText *subtitle;
@property (nonatomic, retain) TLKImage *subtitleImage;
@property (nonatomic, retain) TLKImageView *subtitleImageView;
@property (nonatomic) bool subtitleIsEmphasized;
@property (nonatomic, retain) TLKLabel *subtitleLabel;
@property (nonatomic, retain) TLKStackView *subtitleStackView;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKMultilineText *title;
@property (nonatomic, retain) TLKLabel *titleLabel;
@property (nonatomic, retain) TLKMultilineText *trailingText;
@property (nonatomic, retain) TLKLabel *trailingTextLabel;
@property (nonatomic) bool useCompactWidth;

- (void).cxx_destruct;
- (long long)axis;
- (void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(struct CGSize { double x1; double x2; })arg2 forReason:(long long)arg3;
- (void)didMoveToWindow;
- (id)footnote;
- (id)footnoteLabel;
- (id)footnoteLabelText;
- (id)hasImage;
- (id)image;
- (id)imageView;
- (id)innerStackView;
- (void)observedPropertiesChanged;
- (id)roundedBorderText;
- (id)roundedCornerLabel;
- (id)roundedCornerLabelText;
- (void)setAxis:(long long)arg1;
- (void)setFootnote:(id)arg1;
- (void)setFootnoteLabel:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setInnerStackView:(id)arg1;
- (void)setRoundedBorderText:(id)arg1;
- (void)setRoundedCornerLabel:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleImage:(id)arg1;
- (void)setSubtitleImageView:(id)arg1;
- (void)setSubtitleIsEmphasized:(bool)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setSubtitleStackView:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTrailingText:(id)arg1;
- (void)setTrailingTextLabel:(id)arg1;
- (void)setUseCompactWidth:(bool)arg1;
- (id)setupContentView;
- (id)subtitle;
- (id)subtitleImage;
- (id)subtitleImageView;
- (bool)subtitleIsEmphasized;
- (id)subtitleLabel;
- (id)subtitleStackView;
- (id)title;
- (id)titleLabel;
- (void)tlk_updateForAppearance:(id)arg1;
- (id)trailingText;
- (id)trailingTextLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)useCompactWidth;
- (bool)usesDefaultLayoutMargins;

@end
