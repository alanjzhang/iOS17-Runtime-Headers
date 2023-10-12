/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface AKApplicationMetadataInfo : NSObject <NSSecureCoding> {
    NSString * _authorizedAppListVersion;
    NSDictionary * _teams;
}

@property (nonatomic, readonly, copy) NSString *authorizedAppListVersion;
@property (nonatomic, readonly, copy) NSDictionary *teams;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authorizedAppListVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseInfo:(id)arg1;
- (id)teams;

@end
