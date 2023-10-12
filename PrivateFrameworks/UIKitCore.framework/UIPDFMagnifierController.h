/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPDFMagnifierController : NSObject <CALayerDelegate> {
    struct CGSize { 
        double width; 
        double height; 
    }  _controlPointSize;
    double  _enlargementScale;
    struct CGColor { } * _grabberColor;
    CALayer * _hiLayer;
    CALayer * _imageContainer;
    CALayer * _imageLayer;
    CALayer * _leftBar;
    CALayer * _leftGrabber;
    CALayer * _loLayer;
    bool  _loupe;
    struct CGSize { 
        double width; 
        double height; 
    }  _magnifierSize;
    CALayer * _maskLayer;
    unsigned long long  _pageRotation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pointToMagnify;
    double  _power;
    CALayer * _rightBar;
    CALayer * _rightGrabber;
    CAShapeLayer * _selectionLayer;
    UIView * _textEffectsSubView;
    UIWindow * _textEffectsWindow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _touchPoint;
    bool  _visible;
    UIPDFPageView * pageView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIPDFPageView *pageView;
@property (readonly) Class superclass;

- (void)_show;
- (void)dealloc;
- (void)hide;
- (id)init;
- (void)move;
- (id)pageView;
- (void)setPageView:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1 viewPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)showLoupe;
- (void)showMagnifier;
- (bool)visible;

// UIPDFMagnifierController (grabbers)

- (void)addTextRangeHandles;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (void)setTextRangeHandlePositions;

// UIPDFMagnifierController (private)

- (void)addBling;
- (struct CGPoint { double x1; double x2; })convertPointToEnlargedSpace:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertPointToRotatedPage:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToEnlargedSpace:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToRotatedPage:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })convertViewPointToEnlargedSpace:(struct CGPoint { double x1; double x2; })arg1;
- (id)imageReceived:(id)arg1 data:(id)arg2;
- (bool)isSelectionUniformlyRotated:(double*)arg1;
- (void)placeImage;
- (struct CGPoint { double x1; double x2; })pointToMagnifyInPDFSpace;
- (void)setImageContainerMask;
- (void)setImageContainerPositionLoupe;
- (void)setImageContainerPositionMagnifier;
- (void)setLayerPositions;
- (void)setPower;
- (void)setSelectionPath;
- (void)setSelectionPath:(struct CGPath { }*)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3;
- (void)tearDownLayers;
- (struct CGPoint { double x1; double x2; })viewPointInTextEffectsSpace;

@end