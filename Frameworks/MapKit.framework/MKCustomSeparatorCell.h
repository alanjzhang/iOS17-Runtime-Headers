/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCustomSeparatorCell : MKTableViewCell {
    double  _leftSeparatorInset;
    double  _rightSeparatorInset;
}

@property (nonatomic) double leadingSeparatorInset;
@property (nonatomic) double leftSeparatorInset;
@property (nonatomic) double rightSeparatorInset;
@property (getter=isSeparatorHidden, nonatomic) bool separatorHidden;
@property (nonatomic) double trailingSeparatorInset;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_separatorFrame;
- (void)_updateSeparatorInset;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isSeparatorHidden;
- (double)leadingSeparatorInset;
- (double)leftSeparatorInset;
- (double)rightSeparatorInset;
- (void)setLeadingSeparatorInset:(double)arg1;
- (void)setLeftSeparatorInset:(double)arg1;
- (void)setRightSeparatorInset:(double)arg1;
- (void)setSeparatorHidden:(bool)arg1;
- (void)setTrailingSeparatorInset:(double)arg1;
- (double)trailingSeparatorInset;

@end
