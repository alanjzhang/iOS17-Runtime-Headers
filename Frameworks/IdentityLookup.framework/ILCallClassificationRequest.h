/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/IdentityLookup.framework/IdentityLookup
 */

@interface ILCallClassificationRequest : ILClassificationRequest <NSSecureCoding> {
    NSArray * _callCommunications;
}

@property (nonatomic, readonly, copy) NSArray *callCommunications;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callCommunications;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCallCommunications:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRequest:(id)arg1;

@end