/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RemoteManagementStore.framework/RemoteManagementStore
 */

@interface RMDeclarationManifestItem : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToManifestItem:(id)arg1;
- (id)version;

@end
