/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKExtendEnrollTouchIDOperation : BKOperation {
    NSData * _credentialSet;
    BKIdentity * _identity;
}

@property (nonatomic, copy) NSData *credentialSet;
@property (nonatomic) <BKExtendEnrollTouchIDOperationDelegate> *delegate;
@property (nonatomic, retain) BKIdentity *identity;

- (void).cxx_destruct;
- (id)credentialSet;
- (id)identity;
- (void)setCredentialSet:(id)arg1;
- (void)setIdentity:(id)arg1;

@end
