/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IntentsCore.framework/IntentsCore
 */

@interface INCExtensionPlugInBundle : NSObject {
    NSSet * _intentsRestrictedWhileLocked;
    NSSet * _intentsSupported;
    Class  _principalClass;
}

@property (nonatomic, readonly, copy) NSSet *intentsRestrictedWhileLocked;
@property (nonatomic, readonly, copy) NSSet *intentsSupported;
@property (nonatomic, readonly) Class principalClass;

- (void).cxx_destruct;
- (id)initWithPrincipalClass:(Class)arg1 intentsSupported:(id)arg2 intentsRestrictedWhileLocked:(id)arg3;
- (id)intentsRestrictedWhileLocked;
- (id)intentsSupported;
- (Class)principalClass;

@end
