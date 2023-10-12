/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSLazyApplicationInfoProvider : NSObject <FBSApplicationInfoProvider> {
    Class  _applicationInfoSubclass;
}

@property (nonatomic) Class applicationInfoSubclass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)applicationInfoForAuditToken:(id)arg1;
- (id)applicationInfoForBundleIdentifier:(id)arg1;
- (Class)applicationInfoSubclass;
- (id)init;
- (void)setApplicationInfoSubclass:(Class)arg1;

@end
