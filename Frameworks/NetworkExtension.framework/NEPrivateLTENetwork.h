/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEPrivateLTENetwork : NSObject <NSCopying, NSSecureCoding> {
    NSString * _mobileCountryCode;
    NSString * _mobileNetworkCode;
    NSString * _trackingAreaCode;
}

@property (copy) NSString *mobileCountryCode;
@property (copy) NSString *mobileNetworkCode;
@property (copy) NSString *trackingAreaCode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mobileCountryCode;
- (id)mobileNetworkCode;
- (void)setMobileCountryCode:(id)arg1;
- (void)setMobileNetworkCode:(id)arg1;
- (void)setTrackingAreaCode:(id)arg1;
- (id)trackingAreaCode;

@end
