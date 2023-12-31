/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAppletSubcredentialAccountAttestationRequest : PKAccountAttestationRequest {
    NSData * _sharingTokenHash;
    NSData * _subCASEResidencyAttestation;
}

@property (nonatomic, copy) NSData *sharingTokenHash;
@property (nonatomic, copy) NSData *subCASEResidencyAttestation;

- (void).cxx_destruct;
- (id)initWithRequestData:(id)arg1;
- (void)setSharingTokenHash:(id)arg1;
- (void)setSubCASEResidencyAttestation:(id)arg1;
- (id)sharingTokenHash;
- (id)subCASEResidencyAttestation;

@end
