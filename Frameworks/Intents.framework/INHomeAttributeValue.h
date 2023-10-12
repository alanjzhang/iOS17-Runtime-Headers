/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INHomeAttributeValue : NSObject <NSCopying, NSSecureCoding> {
    bool  _boolValue;
    double  _doubleValue;
    long long  _integerValue;
    long long  _limitValue;
    INHomeAttributeRange * _rangeValue;
    NSString * _stringValue;
    long long  _type;
    long long  _unit;
}

@property (nonatomic, readonly) bool boolValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly) long long limitValue;
@property (nonatomic, readonly) INHomeAttributeRange *rangeValue;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long unit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)boolValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBoolValue:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDoubleValue:(double)arg1 unit:(long long)arg2;
- (id)initWithIntegerValue:(long long)arg1 unit:(long long)arg2;
- (id)initWithLimitValue:(long long)arg1;
- (id)initWithRangeValue:(id)arg1;
- (id)initWithStringValue:(id)arg1 unit:(long long)arg2;
- (id)initWithType:(long long)arg1 boolValue:(bool)arg2 doubleValue:(double)arg3 integerValue:(long long)arg4 stringValue:(id)arg5 limitValue:(long long)arg6 unit:(long long)arg7 rangeValue:(id)arg8;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (long long)limitValue;
- (id)rangeValue;
- (id)stringValue;
- (long long)type;
- (long long)unit;

@end
