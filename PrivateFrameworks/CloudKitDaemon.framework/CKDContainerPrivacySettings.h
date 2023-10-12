/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDContainerPrivacySettings : NSObject {
    NSSet * _applicationBundleIDs;
    CKContainerID * _containerID;
    long long  _discoverable;
}

@property (nonatomic, readonly, copy) NSSet *applicationBundleIDs;
@property (nonatomic, readonly, copy) CKContainerID *containerID;
@property (nonatomic, readonly) long long discoverable;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)applicationBundleIDs;
- (id)containerID;
- (id)description;
- (long long)discoverable;
- (unsigned long long)hash;
- (id)initWithContainerID:(id)arg1 applicationBundleIDs:(id)arg2 discoverable:(long long)arg3;
- (bool)isEqual:(id)arg1;

@end
