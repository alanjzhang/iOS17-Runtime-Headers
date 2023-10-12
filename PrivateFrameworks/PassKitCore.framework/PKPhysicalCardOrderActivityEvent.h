/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPhysicalCardOrderActivityEvent : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _activity;
    NSDate * _date;
    NSString * _localizedReason;
}

@property (nonatomic) unsigned long long activity;
@property (nonatomic, retain) NSDate *date;
@property (nonatomic, readonly, copy) NSString *localizedReason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)activity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedReason;
- (void)setActivity:(unsigned long long)arg1;
- (void)setDate:(id)arg1;

@end
