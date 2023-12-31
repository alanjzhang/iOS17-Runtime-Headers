/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentDeviceCheckinDownloadRecord : PKPaymentBackgroundDownloadRecord <NSSecureCoding> {
    NSUUID * _identifier;
    NSString * _region;
    NSData * _responseData;
}

@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSString *region;
@property (nonatomic, retain) NSData *responseData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)region;
- (id)responseData;
- (void)setIdentifier:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setResponseData:(id)arg1;

@end
