/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCurrencyAmount : PBCodable <NSCopying, NSSecureCoding, _INPBCurrencyAmount> {
    struct { }  _has;
    NSArray * _values;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (bool)supportsSecureCoding;
+ (Class)valueType;

- (void).cxx_destruct;
- (void)addValue:(id)arg1;
- (void)clearValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setValues:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)values;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
