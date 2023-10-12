/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface CNDonationExtensionRequestHandler : NSObject <NSExtensionRequestHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (unsigned long long)donationVersioningNumber;
- (void)redonateAllValuesWithReason:(unsigned long long)arg1;
- (void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(id /* block */)arg2;
- (void)userDidRejectDonatedValue:(id)arg1;

@end
