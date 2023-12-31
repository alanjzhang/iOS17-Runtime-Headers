/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEDNSProxyProviderProtocol : NEVPNProtocol {
    NSString * _designatedRequirement;
    NSString * _pluginType;
    NSString * _providerBundleIdentifier;
    NSDictionary * _providerConfiguration;
}

@property (copy) NSString *designatedRequirement;
@property (copy) NSString *pluginType;
@property (copy) NSString *providerBundleIdentifier;
@property (copy) NSDictionary *providerConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)designatedRequirement;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPluginType:(id)arg1;
- (id)pluginType;
- (id)providerBundleIdentifier;
- (id)providerConfiguration;
- (void)setDesignatedRequirement:(id)arg1;
- (void)setPluginType:(id)arg1;
- (void)setProviderBundleIdentifier:(id)arg1;
- (void)setProviderConfiguration:(id)arg1;

@end
