/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

@interface NGMFTVoucherSignatureFormatter : NSObject <SignatureFormatter> {
    NSData * _signedData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *signedData;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithApplicationData:(id)arg1;
- (void)setSignedData:(id)arg1;
- (id)signedData;

@end
