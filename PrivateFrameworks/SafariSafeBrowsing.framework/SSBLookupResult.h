/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
 */

@interface SSBLookupResult : NSObject <NSCopying, NSSecureCoding> {
    bool  _URLContainsUserInfo;
    NSArray * _serviceLookupResults;
}

@property (nonatomic, readonly) bool URLContainsUserInfo;
@property (getter=isKnownToBeUnsafe, nonatomic, readonly) bool knownToBeUnsafe;
@property (getter=isMalware, nonatomic, readonly) bool malware;
@property (getter=isPhishing, nonatomic, readonly) bool phishing;
@property (nonatomic, readonly) NSArray *serviceLookupResults;
@property (getter=isUnwantedSoftware, nonatomic, readonly) bool unwantedSoftware;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)URLContainsUserInfo;
- (id)_initWithServiceLookUpResults:(id)arg1;
- (id)_initWithServiceLookUpResults:(id)arg1 URLContainsUserInfo:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isKnownToBeUnsafe;
- (bool)isMalware;
- (bool)isPhishing;
- (bool)isUnwantedSoftware;
- (id)serviceLookupResults;

@end
