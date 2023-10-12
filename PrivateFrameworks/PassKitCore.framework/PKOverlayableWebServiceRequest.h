/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKOverlayableWebServiceRequest : PKWebServiceRequest <NSSecureCoding> {
    NSMutableDictionary * _overlayParameters;
    NSArray * _overridenKeys;
    bool  _requiresConfigurationForRedirect;
    bool  _requiresConfigurationForRetry;
    NSMutableDictionary * _secureOverlayParameters;
}

@property (nonatomic, readonly) PKZeroingDataContainer *archivedData;
@property (nonatomic, copy) NSDictionary *overlayParameters;
@property (nonatomic) bool requiresConfigurationForRedirect;
@property (nonatomic) bool requiresConfigurationForRetry;
@property (nonatomic, copy) NSDictionary *secureOverlayParameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyOverlayToDictionary:(id)arg1;
- (void)_applySecureOverlayToDictionary:(id)arg1;
- (void)_setOverriddenKeys:(id)arg1;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(id /* block */)arg4;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(id /* block */)arg4;
- (id)archivedData;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasOverlayParameters;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)overlayParameters;
- (id)overlayValueForKey:(id)arg1;
- (bool)requiresConfigurationForRedirect;
- (bool)requiresConfigurationForRetry;
- (id)secureOverlayParameters;
- (id)secureOverlayValueForKey:(id)arg1;
- (void)setOverlayParameters:(id)arg1;
- (void)setOverlayValue:(id)arg1 forKey:(id)arg2;
- (void)setRequiresConfigurationForRedirect:(bool)arg1;
- (void)setRequiresConfigurationForRetry:(bool)arg1;
- (void)setSecureOverlayParameters:(id)arg1;
- (void)setSecureOverlayValue:(id)arg1 forKey:(id)arg2;

@end
