/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata
 */

@interface LNQuerySortingOptionMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _entityType;
    NSString * _propertyIdentifier;
}

@property (nonatomic, readonly, copy) NSString *entityType;
@property (nonatomic, readonly, copy) NSString *propertyIdentifier;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyIdentifier:(id)arg1 entityType:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)propertyIdentifier;

// LNQuerySortingOptionMetadata (Deprecated)

- (id)initWithTitle:(id)arg1 propertyIdentifier:(id)arg2 entityType:(id)arg3;
- (id)title;

@end