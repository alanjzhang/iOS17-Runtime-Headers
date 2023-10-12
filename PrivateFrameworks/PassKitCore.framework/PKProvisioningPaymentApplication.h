/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProvisioningPaymentApplication : NSObject {
    NSString * _appletTypeIdentifier;
    NSString * _applicationIdentifier;
    unsigned long long  _paymentType;
}

@property (nonatomic, readonly, copy) NSString *appletTypeIdentifier;
@property (nonatomic, readonly, copy) NSString *applicationIdentifier;
@property (nonatomic, readonly) unsigned long long paymentType;

- (void).cxx_destruct;
- (id)appletTypeIdentifier;
- (id)applicationIdentifier;
- (id)initWithAppletTypeIdentifier:(id)arg1 paymentType:(unsigned long long)arg2;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)paymentType;

@end
