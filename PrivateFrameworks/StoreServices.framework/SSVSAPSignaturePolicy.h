/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVSAPSignaturePolicy : NSObject <NSCopying> {
    long long  _policyType;
    NSArray * _signatureComponents;
}

@property (nonatomic, readonly) long long policyType;
@property (nonatomic, readonly, copy) NSArray *signatureComponents;

- (void).cxx_destruct;
- (id)_dataToSignWithDataSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataToSignWithRequestProperties:(id)arg1;
- (id)dataToSignWithURLRequest:(id)arg1;
- (id)dataToSignWithURLResponse:(id)arg1 responseData:(id)arg2;
- (id)initWithPolicyType:(long long)arg1;
- (id)initWithPolicyType:(long long)arg1 signatureComponents:(id)arg2;
- (id)initWithSignedActionsDictionary:(id)arg1;
- (long long)policyType;
- (id)signatureComponents;

@end
