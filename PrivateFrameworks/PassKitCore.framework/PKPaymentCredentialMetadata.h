/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentCredentialMetadata : NSObject {
    NSString * _localizedDisplayName;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, readonly, copy) NSString *value;

+ (Class)classForValueType:(id)arg1;
+ (id)paymentCredentialMetadataWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (bool)_isEqualToMetadata:(id)arg1;
- (id)displayString;
- (unsigned long long)hash;
- (id)initWithConfiguration:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedDisplayName;
- (id)value;

@end
