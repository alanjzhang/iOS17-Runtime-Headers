/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKDevicePearl : BKDevice {
    long long  _pearlState;
}

@property (nonatomic) <BKDevicePearlDelegate> *delegate;
@property (nonatomic, readonly) long long pearlState;

- (bool)clearIdentityMigrationFailureForUser:(unsigned int)arg1 error:(id*)arg2;
- (long long)pearlState;
- (id)periocularMatchStateForUser:(unsigned int)arg1 error:(id*)arg2;
- (id)periocularMatchStateWithError:(id*)arg1;
- (id)queryIdentityMigrationFailureForUser:(unsigned int)arg1 error:(id*)arg2;
- (bool)removePeriocularEnrollmentsForUser:(unsigned int)arg1 removeAll:(bool)arg2 error:(id*)arg3;
- (void)removePeriocularEnrollmentsForUser:(unsigned int)arg1 removeAll:(bool)arg2 reply:(id /* block */)arg3;
- (bool)removePeriocularEnrollmentsFromIdentity:(id)arg1 removeAll:(bool)arg2 error:(id*)arg3;
- (void)removePeriocularEnrollmentsFromIdentity:(id)arg1 removeAll:(bool)arg2 reply:(id /* block */)arg3;
- (bool)setTemplate:(id)arg1 forIdentity:(id)arg2 error:(id*)arg3;
- (id)supportsPeriocularEnrollmentWithError:(id*)arg1;

@end