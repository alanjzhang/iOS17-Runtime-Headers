/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
 */

@interface SPLocationProvider : NSObject <NSCopying, NSSecureCoding> {
    SPHandle * _provider;
    NSDate * _timestamp;
}

@property (nonatomic, copy) SPHandle *provider;
@property (nonatomic, copy) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(id)arg1 provider:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)provider;
- (void)setProvider:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end
