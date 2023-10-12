/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings <BLSBacklightSceneClientSettings, FBSMutableSettings>

@property (getter=bls_hasDelegate, setter=bls_setHasDelegate:, nonatomic) bool bls_hasDelegate;
@property (setter=bls_setOptsOutOfProcessAssertions:, nonatomic) bool bls_optsOutOfProcessAssertions;
@property (setter=bls_setSupportsAlwaysOn:, nonatomic) bool bls_supportsAlwaysOn;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSOrderedSet *layers;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (nonatomic) double preferredLevel;
@property (nonatomic, copy) NSString *preferredSceneHostIdentifier;
@property (nonatomic, copy) FBSSceneIdentityToken *preferredSceneHostIdentity;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

- (void)_applySafeValuesFromUntrustedSettings:(id)arg1;
- (void)addLayer:(id)arg1;
- (void)removeAllLayers;
- (void)removeLayer:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BacklightServices.framework/BacklightServices

// FBSMutableSceneClientSettings (BacklightServices)

- (void)bls_setHasDelegate:(bool)arg1;
- (void)bls_setOptsOutOfProcessAssertions:(bool)arg1;
- (void)bls_setSupportsAlwaysOn:(bool)arg1;

@end
