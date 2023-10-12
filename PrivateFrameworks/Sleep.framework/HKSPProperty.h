/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Sleep.framework/Sleep
 */

@interface HKSPProperty : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _propertyName;
}

@property (nonatomic, readonly) NSArray *allowedInnerClassesForSecureCoding;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isRelationshipProperty;
@property (nonatomic, readonly, copy) NSString *propertyName;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 propertyName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)propertyName;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// HKSPProperty (SecureCoding)

+ (id)allowedSubclassesForSecureCoding;

- (id)allowedInnerClassesForSecureCoding;

// HKSPProperty (Subclasses)

- (void)copyValueFromObject:(id)arg1 toObject:(id)arg2;
- (void)decodeValueForObject:(id)arg1 fromCoder:(id)arg2;
- (void)encodeValueForObject:(id)arg1 fromCoder:(id)arg2;
- (bool)isRelationshipProperty;

@end