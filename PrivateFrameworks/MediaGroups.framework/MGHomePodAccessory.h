/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaGroups.framework/MediaGroups
 */

@interface MGHomePodAccessory : MGSoloDevice <MGAdvertisementInfoProtocol, MGHomeKitAccessoryProtocol>

@property (nonatomic, readonly, copy) NSNumber *HomePodVariant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *productColor;
@property (readonly) Class superclass;

+ (void)HomePodAccessoryWithConnectionProvider:(id)arg1 HomeKitAccessory:(id)arg2 completion:(id /* block */)arg3;
+ (void)HomePodAccessoryWithHomeKitAccessory:(id)arg1 completion:(id /* block */)arg2;
+ (bool)supportsSecureCoding;
+ (id)type;

- (id)HomeKitAccesoryIdentifier;
- (id)HomeKitAccessoryWithHomeManager:(id)arg1;
- (id)HomePodVariant;
- (id)deviceIdentifier;
- (id)productColor;

@end