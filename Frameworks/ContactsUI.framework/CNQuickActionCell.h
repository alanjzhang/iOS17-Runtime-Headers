/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNQuickActionCell : UICollectionViewCell {
    CNQuickActionButton * _button;
    bool  _showBackgroundPlatter;
    bool  _showTitle;
}

@property (nonatomic, retain) CNQuickActionButton *button;
@property (nonatomic) bool showBackgroundPlatter;
@property (nonatomic) bool showTitle;

- (void).cxx_destruct;
- (id)button;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setButton:(id)arg1;
- (void)setShowBackgroundPlatter:(bool)arg1;
- (void)setShowTitle:(bool)arg1;
- (bool)showBackgroundPlatter;
- (bool)showTitle;

@end
