/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
 */

@interface STTelephonyMobileEquipmentInfo : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    NSString * _CSN;
    NSString * _ICCID;
    NSString * _IMEI;
    NSString * _MEID;
    NSString * _bootstrapICCID;
}

@property (nonatomic, readonly, copy) NSString *CSN;
@property (nonatomic, readonly, copy) NSString *ICCID;
@property (nonatomic, readonly, copy) NSString *IMEI;
@property (nonatomic, readonly, copy) NSString *MEID;
@property (nonatomic, readonly, copy) NSString *bootstrapICCID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isOnBootstrap, nonatomic, readonly) bool onBootstrap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CSN;
- (id)ICCID;
- (id)IMEI;
- (id)MEID;
- (id)bootstrapICCID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (bool)isOnBootstrap;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
