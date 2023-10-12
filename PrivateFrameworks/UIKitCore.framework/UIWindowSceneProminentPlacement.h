/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWindowSceneProminentPlacement : UIWindowScenePlacement {
    bool  _prefersLargeSize;
}

@property (setter=_setPrefersLargeSize:, nonatomic) bool _prefersLargeSize;

+ (id)_largeProminentPlacement;
+ (unsigned long long)_placementType;
+ (id)prominentPlacement;

- (id)_createConfigurationWithError:(id*)arg1;
- (id)_init;
- (bool)_prefersLargeSize;
- (bool)_requestCenterSlot;
- (bool)_requestFullscreen;
- (void)_setPrefersLargeSize:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
