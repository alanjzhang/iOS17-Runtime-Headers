/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTROperationalCredentialsClusterAttestationRequestParams : NSObject <NSCopying> {
    NSData * _attestationNonce;
    NSNumber * _serverSideProcessingTimeout;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSData *attestationNonce;
@property (nonatomic, copy) NSNumber *serverSideProcessingTimeout;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

// MTROperationalCredentialsClusterAttestationRequestParams (null)

- (void).cxx_destruct;
- (id)attestationNonce;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)serverSideProcessingTimeout;
- (void)setAttestationNonce:(id)arg1;
- (void)setServerSideProcessingTimeout:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
