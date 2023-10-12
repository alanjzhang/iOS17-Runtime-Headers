/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UITextCursorBlinkAnimation : NSObject <_UITextCursorAnimation> {
    CAKeyframeAnimation * _caretBlinkAnimation;
    _UIShapeView * _cursorShapeView;
    bool  _enabled;
}

@property (nonatomic, readonly) _UIShapeView *cursorShapeView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cursorShapeView;
- (id)initWithCursorShapeView:(id)arg1;
- (bool)isEnabled;
- (void)reset;
- (void)setEnabled:(bool)arg1;

@end