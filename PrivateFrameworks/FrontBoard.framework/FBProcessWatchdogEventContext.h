/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessWatchdogEventContext : NSObject <BSDescriptionProviding> {
    long long  _event;
    FBSSceneSettings * _sceneSettings;
    FBSSceneTransitionContext * _sceneTransitionContext;
    FBSceneUpdateContext * _sceneUpdateContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long event;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSSceneSettings *sceneSettings;
@property (nonatomic, readonly) FBSSceneTransitionContext *sceneTransitionContext;
@property (nonatomic, readonly) FBSceneUpdateContext *sceneUpdateContext;
@property (readonly) Class superclass;

+ (id)contextForEvent:(long long)arg1 settings:(id)arg2 transitionContext:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (long long)event;
- (id)sceneSettings;
- (id)sceneTransitionContext;
- (id)sceneUpdateContext;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
