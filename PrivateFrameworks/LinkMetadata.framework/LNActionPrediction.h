/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata
 */

@interface LNActionPrediction : NSObject <NSCopying, NSSecureCoding> {
    LNDisplayRepresentation * _displayRepresentation;
    NSArray * _parameterIdentifiers;
}

@property (nonatomic, readonly, copy) LNDisplayRepresentation *displayRepresentation;
@property (nonatomic, readonly, copy) NSArray *parameterIdentifiers;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameterIdentifiers:(id)arg1 displayRepresentation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parameterIdentifiers;

@end
