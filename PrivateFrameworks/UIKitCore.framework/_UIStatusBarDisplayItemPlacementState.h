/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatusBarDisplayItemPlacementState : NSObject <_UIStatusBarPrioritized> {
    _UIStatusBarDisplayItemPlacement * _placement;
    _UIStatusBarRegion * _region;
    NSMutableArray * _relations;
}

@property (nonatomic, readonly) bool canBeEnabled;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) _UIStatusBarDisplayItemPlacement *placement;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) _UIStatusBarRegion *region;
@property (nonatomic, retain) NSMutableArray *relations;
@property (getter=areRelationsFulfilled, nonatomic, readonly) bool relationsFulfilled;

+ (id)stateForDisplayItemPlacement:(id)arg1 region:(id)arg2;

- (void).cxx_destruct;
- (bool)areRelationsFulfilled;
- (bool)canBeEnabled;
- (id)description;
- (bool)isEnabled;
- (id)placement;
- (long long)priority;
- (id)region;
- (id)relations;
- (void)setRelations:(id)arg1;

@end
