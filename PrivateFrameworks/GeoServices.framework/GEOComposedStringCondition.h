/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedStringCondition : NSObject <NSCopying, NSSecureCoding> {
    int  _conditionType;
    NSDate * _expirationDate;
    NSArray * _subConditions;
}

@property (nonatomic, readonly) int conditionType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)conditionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGeoCondition:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isValid;

@end
