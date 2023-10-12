/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIRootWindowScenePresentationBinder : UIScenePresentationBinder {
    FBSDisplayConfiguration * _displayConfiguration;
    NSMutableSet * _presentedScenes;
    UIRootSceneWindow * _rootSceneWindow;
    bool  _shouldManageWindowLifecycle;
}

@property (nonatomic, readonly) UIMutableTransformer *sceneTransformer;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 priority:(long long)arg2 appearanceStyle:(unsigned long long)arg3 rootWindow:(id)arg4;
- (void)_noteDidStopPresentingScene:(id)arg1;
- (void)_noteWillStartPresentingScene:(id)arg1;
- (id)_rootView;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithIdentifier:(id)arg1 priority:(long long)arg2 appearanceStyle:(unsigned long long)arg3 rootWindow:(id)arg4;
- (id)initWithPriority:(long long)arg1 displayConfiguration:(id)arg2;
- (void)invalidate;
- (id)sceneTransformer;

@end