/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Proximity.framework/Proximity
 */

@interface PRTrustedContact : NSObject <NSCopying, NSSecureCoding> {
    NSData * _contactKey;
}

@property (readonly) NSData *contactKey;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactKey;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContactKey:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
