/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWebFormSelectPeripheral : NSObject <UIFormPeripheral> {
    <UIWebFormControl> * _selectControl;
    DOMHTMLSelectElement * _selectionNode;
}

@property (nonatomic, retain) <UIWebFormControl> *_selectControl;
@property (nonatomic, retain) DOMHTMLSelectElement *_selectionNode;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)_selectControl;
- (id)_selectionNode;
- (id)assistantView;
- (void)beginEditing;
- (void)dealloc;
- (void)endEditing;
- (id)initWithDOMHTMLSelectElement:(id)arg1;
- (void)set_selectControl:(id)arg1;
- (void)set_selectionNode:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/AccessibilityBundles/UIKit.axbundle/UIKit

+ (id)createPeripheralWithDOMHTMLSelectElement:(id)arg1;

// UIWebFormSelectPeripheral (SafeCategory)

+ (Class)safeCategoryBaseClass;

@end
