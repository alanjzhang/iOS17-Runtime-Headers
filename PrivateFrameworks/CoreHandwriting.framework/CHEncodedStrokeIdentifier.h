/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHEncodedStrokeIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSData * _encodedStrokeIdentifier;
    unsigned long long  _savedHash;
}

@property (nonatomic, readonly) NSData *encodedStrokeIdentifier;

// CHEncodedStrokeIdentifier (null)

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedStrokeIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
