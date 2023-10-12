/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSUnit : NSObject <NSCopying, NSSecureCoding> {
    NSString * _symbol;
}

@property (readonly) Class _effectiveUnitClass;
@property (readonly, copy) NSString *symbol;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation

+ (id)new;
+ (bool)supportsSecureCoding;

- (Class)_effectiveUnitClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbol:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)symbol;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

// NSUnit (HKUnit)

+ (double)hk_conversionCoefficient:(id)arg1;
+ (double)hk_conversionConstant:(id)arg1;
+ (bool)hk_equalCoefficient:(double)arg1 forUnit:(id)arg2;
+ (bool)hk_equalConstant:(double)arg1 forUnit:(id)arg2;
+ (bool)hk_isSIUnit:(id)arg1;
+ (id)hk_prefixForCoefficient:(double)arg1;

- (id)hk_convertQuantityWithValue:(double)arg1 constant:(double)arg2 coefficient:(double)arg3;
- (id)hk_equivalentBaseUnit;
- (id)hk_equivalentQuantityWithValue:(double)arg1;
- (id)hk_equivalentUnit;
- (id)hk_equivalentUnitWithConstant:(double)arg1 coefficient:(double)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents

// NSUnit (Intents)

- (id)_intents_stringRepresentation;

@end
