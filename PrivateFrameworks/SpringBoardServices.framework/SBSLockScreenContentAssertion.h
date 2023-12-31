/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@interface SBSLockScreenContentAssertion : NSObject {
    SBSLockScreenContentAction * _action;
    id  _configurationObject;
    id /* block */  _errorHandler;
    NSString * _identifier;
    NSString * _slot;
}

@property (nonatomic, retain) SBSLockScreenContentAction *action;
@property (nonatomic, retain) id configurationObject;
@property (getter=_errorHandler, setter=_setErrorHandler:, nonatomic, copy) id /* block */ errorHandler;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSString *slot;

+ (bool)_isRestrictedDevice;
+ (id)acquireContentProviderAssertionForType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4 errorHandler:(id /* block */)arg5;
+ (id)acquireContentProviderAssertionForType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 errorHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (void)_acquireAssertionWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4;
- (id /* block */)_errorHandler;
- (void)_setErrorHandler:(id /* block */)arg1;
- (bool)_supportsReacquisition;
- (id)action;
- (id)configurationObject;
- (void)dealloc;
- (id)identifier;
- (id)initWithType:(unsigned long long)arg1 slot:(id)arg2 identifier:(id)arg3 configurationObject:(id)arg4 errorHandler:(id /* block */)arg5;
- (void)invalidate;
- (void)setAction:(id)arg1;
- (void)setConfigurationObject:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSlot:(id)arg1;
- (id)slot;
- (unsigned long long)type;

@end
