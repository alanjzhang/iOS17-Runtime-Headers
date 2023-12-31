/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAlarmObject : SADomainObject

@property (nonatomic, retain) SADataSourceInfo *dataSourceInfo;
@property (nonatomic, copy) NSNumber *enabled;
@property (nonatomic, copy) NSNumber *firing;
@property (nonatomic, copy) NSArray *frequency;
@property (nonatomic, copy) NSNumber *hour;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSNumber *minute;
@property (nonatomic, copy) NSNumber *relativeOffsetMinutes;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;

- (id)dataSourceInfo;
- (id)enabled;
- (id)encodedClassName;
- (id)firing;
- (id)frequency;
- (id)groupIdentifier;
- (id)hour;
- (id)label;
- (id)minute;
- (id)relativeOffsetMinutes;
- (void)setDataSourceInfo:(id)arg1;
- (void)setEnabled:(id)arg1;
- (void)setFiring:(id)arg1;
- (void)setFrequency:(id)arg1;
- (void)setHour:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMinute:(id)arg1;
- (void)setRelativeOffsetMinutes:(id)arg1;

@end
