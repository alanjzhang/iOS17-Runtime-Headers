/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIDocumentViewController : UIViewController <_UIDocumentViewControllerImplHost> {
    _UIDocumentViewControllerImpl * _impl;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIBarButtonItemGroup *undoRedoItemGroup;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (void)_updateContentUnavailableConfigurationUsingState:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libMainThreadChecker.dylib

- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (id)document;
- (void)documentDidChange;
- (void)documentDidOpen;
- (id)initWithCoder:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)keyCommands;
- (void)navigationItemDidUpdate;
- (void)openDocumentWithCompletionHandler:(id /* block */)arg1;
- (void)redo:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)undo:(id)arg1;
- (id)undoManager;
- (id)undoRedoItemGroup;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
