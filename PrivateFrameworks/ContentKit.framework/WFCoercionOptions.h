/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFCoercionOptions : NSObject <NSCopying> {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) <WFContentPermissionRequestor> *permissionRequestor;
@property (nonatomic, readonly) bool shouldContinueLoadingWebContentIfExternalResourcesAreDenied;

+ (id)new;
+ (id)optionsWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)optionsByAddingContentsOfOptions:(id)arg1;

// WFCoercionOptions (DisallowedCoercionPaths)

+ (void)registerDefaultDisallowedCoercionPath:(id)arg1;

- (bool)coercionPathIsDisallowed:(id)arg1;

// WFCoercionOptions (ExternalResourcesDeniedBehavior)

- (bool)shouldContinueLoadingWebContentIfExternalResourcesAreDenied;

// WFCoercionOptions (PermissionRequestor)

- (id)permissionRequestor;

// WFCoercionOptions (TypePrioritization)

- (id)itemClassPrioritizationType;
- (id)preferredTypes;

@end