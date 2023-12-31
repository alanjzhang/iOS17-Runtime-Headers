/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKHistogram : NSObject <NSSecureCoding> {
    unsigned long long  _countOverAllValues;
    NSString * _customIdentifier;
    NSArray * _deviceIdentifiers;
    NSMutableDictionary * _histogram;
    NSUUID * _identifier;
    NSDateInterval * _interval;
    _DKEventStream * _stream;
}

@property (nonatomic) unsigned long long countOverAllValues;
@property (nonatomic, retain) NSString *customIdentifier;
@property (nonatomic, retain) NSArray *deviceIdentifiers;
@property (nonatomic, retain) NSDictionary *histogram;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) NSDateInterval *interval;
@property (nonatomic, retain) _DKEventStream *stream;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addPropertiesFrom:(id)arg1;
- (void)addHistogram:(id)arg1;
- (void)addHistogram:(id)arg1 decayingExistingCounts:(double)arg2;
- (void)addValue:(id)arg1;
- (void)addValue:(id)arg1 withCount:(double)arg2;
- (id)countDictionary;
- (unsigned long long)countForValue:(id)arg1;
- (double)countForValueDouble:(id)arg1;
- (unsigned long long)countOverAllValues;
- (id)customIdentifier;
- (id)description;
- (id)deviceIdentifiers;
- (void)encodeWithCoder:(id)arg1;
- (id)histogram;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHistogram:(id)arg1;
- (id)initWithValues:(id)arg1;
- (id)interval;
- (bool)isEqual:(id)arg1;
- (double)relativeFrequencyForValue:(id)arg1;
- (void)setCountOverAllValues:(unsigned long long)arg1;
- (void)setCustomIdentifier:(id)arg1;
- (void)setDeviceIdentifiers:(id)arg1;
- (void)setHistogram:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterval:(id)arg1;
- (void)setStream:(id)arg1;
- (id)stream;
- (void)subtractHistogram:(id)arg1;
- (void)subtractValue:(id)arg1;

// _DKHistogram (CoreData)

+ (id)entityName;

- (id)initWithManagedObject:(id)arg1;
- (id)insertInManagedObjectContext:(id)arg1;

@end
