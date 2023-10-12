/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

@interface UISUISecurityContext : NSObject <NSSecureCoding> {
    NSMutableArray * _URLsBeingAccessed;
    long long  _activationCount;
    NSArray * _securityScopedResources;
}

@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) NSArray *securityScopedResources;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibleURLs;
- (void)activate;
- (void)deactivate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecurityScopedResources:(id)arg1;
- (bool)isActive;
- (id)securityScopedResources;
- (id)securityScopedResourcesMatchingPredicate:(id /* block */)arg1;

@end
