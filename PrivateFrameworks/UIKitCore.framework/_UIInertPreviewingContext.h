/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIInertPreviewingContext : NSObject <UIViewControllerPreviewing_Internal> {
    UIView * _customViewForInteractiveHighlight;
    <UIViewControllerPreviewingDelegate> * _delegate;
    UIGestureRecognizer * _failureRelationshipGestureRecognizer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sourceRect;
    UIView * _sourceView;
}

@property (nonatomic, retain) UIView *customViewForInteractiveHighlight;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIViewControllerPreviewingDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } sourceRect;
@property (nonatomic, retain) UIView *sourceView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)customViewForInteractiveHighlight;
- (id)delegate;
- (id)initWithSourceView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })preferredSourceViewRectInCoordinateSpace:(id)arg1;
- (id)previewingGestureRecognizerForFailureRelationship;
- (void)setCustomViewForInteractiveHighlight:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setSourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSourceView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })sourceRect;
- (id)sourceView;
- (void)unregister;

@end
