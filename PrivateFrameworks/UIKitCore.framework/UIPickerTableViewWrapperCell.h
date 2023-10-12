/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPickerTableViewWrapperCell : UIPickerTableViewCell {
    UIView * _wrappedView;
    UIView * _wrappedViewContainer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _wrappedViewInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _wrappedViewSize;
}

@property (nonatomic, retain) UIView *wrappedView;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } wrappedViewInsets;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_anyDateLabel;
- (void)_setIsCenterCell:(bool)arg1 shouldModifyAlphaOfView:(bool)arg2;
- (void)_updateWrappedView;
- (void)_updateWrappedViewFrame;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)resizeSubviewsWithOldSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWrappedView:(id)arg1;
- (void)setWrappedViewInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)wrappedView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })wrappedViewInsets;

@end
