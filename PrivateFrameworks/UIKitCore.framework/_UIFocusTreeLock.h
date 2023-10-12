/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIFocusTreeLock : NSObject {
    NSMapTable * _lockedEnvironments;
    NSTimer * _validationTimer;
}

@property (nonatomic, readonly) NSMapTable *lockedEnvironments;
@property (nonatomic, readonly) NSTimer *validationTimer;

- (void).cxx_destruct;
- (void)_validateLockedEnvironments;
- (id)description;
- (id)init;
- (bool)isEnvironmentLocked:(id)arg1;
- (void)lockEnvironmentTree:(id)arg1;
- (id)lockedEnvironments;
- (bool)unlockEnvironmentTree:(id)arg1;
- (id)validationTimer;

@end