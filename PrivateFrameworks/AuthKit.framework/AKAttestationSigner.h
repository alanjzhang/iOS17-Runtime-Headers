/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKAttestationSigner : NSObject

+ (id)sharedSigner;

- (void)_baaSignatureForData:(id)arg1 completion:(id /* block */)arg2;
- (void)_baaSignaturesForData:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)signatureForData:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (void)signaturesForData:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;

@end
