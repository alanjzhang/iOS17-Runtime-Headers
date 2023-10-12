/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableSleepSchedule : PBCodable <HDDecoding, NSCopying> {
    long long  _bedHour;
    long long  _bedMinute;
    bool  _friday;
    struct { 
        unsigned int bedHour : 1; 
        unsigned int bedMinute : 1; 
        unsigned int overrideDayIndex : 1; 
        unsigned int wakeHour : 1; 
        unsigned int wakeMinute : 1; 
        unsigned int friday : 1; 
        unsigned int monday : 1; 
        unsigned int saturday : 1; 
        unsigned int sunday : 1; 
        unsigned int thursday : 1; 
        unsigned int tuesday : 1; 
        unsigned int wednesday : 1; 
    }  _has;
    bool  _monday;
    long long  _overrideDayIndex;
    HDCodableSample * _sample;
    bool  _saturday;
    bool  _sunday;
    bool  _thursday;
    bool  _tuesday;
    long long  _wakeHour;
    long long  _wakeMinute;
    bool  _wednesday;
}

@property (nonatomic) long long bedHour;
@property (nonatomic) long long bedMinute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool friday;
@property (nonatomic) bool hasBedHour;
@property (nonatomic) bool hasBedMinute;
@property (nonatomic) bool hasFriday;
@property (nonatomic) bool hasMonday;
@property (nonatomic) bool hasOverrideDayIndex;
@property (nonatomic, readonly) bool hasSample;
@property (nonatomic) bool hasSaturday;
@property (nonatomic) bool hasSunday;
@property (nonatomic) bool hasThursday;
@property (nonatomic) bool hasTuesday;
@property (nonatomic) bool hasWakeHour;
@property (nonatomic) bool hasWakeMinute;
@property (nonatomic) bool hasWednesday;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool monday;
@property (nonatomic) long long overrideDayIndex;
@property (nonatomic, retain) HDCodableSample *sample;
@property (nonatomic) bool saturday;
@property (nonatomic) bool sunday;
@property (readonly) Class superclass;
@property (nonatomic) bool thursday;
@property (nonatomic) bool tuesday;
@property (nonatomic) long long wakeHour;
@property (nonatomic) long long wakeMinute;
@property (nonatomic) bool wednesday;

- (void).cxx_destruct;
- (long long)bedHour;
- (long long)bedMinute;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)friday;
- (bool)hasBedHour;
- (bool)hasBedMinute;
- (bool)hasFriday;
- (bool)hasMonday;
- (bool)hasOverrideDayIndex;
- (bool)hasSample;
- (bool)hasSaturday;
- (bool)hasSunday;
- (bool)hasThursday;
- (bool)hasTuesday;
- (bool)hasWakeHour;
- (bool)hasWakeMinute;
- (bool)hasWednesday;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)monday;
- (long long)overrideDayIndex;
- (bool)readFrom:(id)arg1;
- (id)sample;
- (bool)saturday;
- (void)setBedHour:(long long)arg1;
- (void)setBedMinute:(long long)arg1;
- (void)setFriday:(bool)arg1;
- (void)setHasBedHour:(bool)arg1;
- (void)setHasBedMinute:(bool)arg1;
- (void)setHasFriday:(bool)arg1;
- (void)setHasMonday:(bool)arg1;
- (void)setHasOverrideDayIndex:(bool)arg1;
- (void)setHasSaturday:(bool)arg1;
- (void)setHasSunday:(bool)arg1;
- (void)setHasThursday:(bool)arg1;
- (void)setHasTuesday:(bool)arg1;
- (void)setHasWakeHour:(bool)arg1;
- (void)setHasWakeMinute:(bool)arg1;
- (void)setHasWednesday:(bool)arg1;
- (void)setMonday:(bool)arg1;
- (void)setOverrideDayIndex:(long long)arg1;
- (void)setSample:(id)arg1;
- (void)setSaturday:(bool)arg1;
- (void)setSunday:(bool)arg1;
- (void)setThursday:(bool)arg1;
- (void)setTuesday:(bool)arg1;
- (void)setWakeHour:(long long)arg1;
- (void)setWakeMinute:(long long)arg1;
- (void)setWednesday:(bool)arg1;
- (bool)sunday;
- (bool)thursday;
- (bool)tuesday;
- (long long)wakeHour;
- (long long)wakeMinute;
- (bool)wednesday;
- (void)writeTo:(id)arg1;

// HDCodableSleepSchedule (HDCodingSupport)

- (bool)applyToObject:(id)arg1;
- (bool)applyToObject:(id)arg1 error:(out id*)arg2;

@end
