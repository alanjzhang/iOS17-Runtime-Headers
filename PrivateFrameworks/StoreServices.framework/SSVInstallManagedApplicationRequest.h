/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVInstallManagedApplicationRequest : SSRequest <SSXPCCoding> {
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    NSNumber * _externalVersionIdentifier;
    NSString * _itemIdentifier;
    bool  _skipDownloads;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSNumber *externalVersionIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic) bool skipDownloads;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)copyXPCEncoding;
- (id)externalVersionIdentifier;
- (id)initWithItemIdentifer:(id)arg1 externalVersionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 bundleVersion:(id)arg4;
- (id)initWithItemIdentifer:(id)arg1 externalVersionIdentifier:(id)arg2 bundleIdentifier:(id)arg3 bundleVersion:(id)arg4 skipDownloads:(bool)arg5;
- (id)initWithXPCEncoding:(id)arg1;
- (id)itemIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setExternalVersionIdentifier:(id)arg1;
- (void)setItemIdentifier:(id)arg1;
- (void)setSkipDownloads:(bool)arg1;
- (bool)skipDownloads;
- (void)startWithDetailedResponseBlock:(id /* block */)arg1;
- (void)startWithMetadataResponseBlock:(id /* block */)arg1;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
