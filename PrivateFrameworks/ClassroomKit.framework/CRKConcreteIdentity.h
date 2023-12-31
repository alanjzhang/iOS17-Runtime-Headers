/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKConcreteIdentity : NSObject <CRKIdentity> {
    struct __SecIdentity { } * _underlyingIdentity;
}

@property (nonatomic, readonly) <CRKCertificate> *certificate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CRKPrivateKey> *privateKey;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct __SecIdentity { }*underlyingIdentity;

+ (id)identityWithCertificate:(id)arg1 privateKey:(id)arg2;
+ (id)identityWithConfiguration:(id)arg1;

- (id)certificate;
- (void)dealloc;
- (id)description;
- (id)initWithIdentity:(struct __SecIdentity { }*)arg1;
- (id)privateKey;
- (struct __SecIdentity { }*)underlyingIdentity;

@end
