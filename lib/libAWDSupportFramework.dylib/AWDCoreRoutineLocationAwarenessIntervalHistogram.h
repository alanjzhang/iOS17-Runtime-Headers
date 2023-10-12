/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineLocationAwarenessIntervalHistogram : PBCodable <NSCopying> {
    NSMutableArray * _anyPositiveIntervalHistograms;
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _lessThan10mIntervalHistograms;
    NSMutableArray * _lessThan200mIntervalHistograms;
    NSMutableArray * _lessThan25mIntervalHistograms;
    NSMutableArray * _lessThan55mIntervalHistograms;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSMutableArray *anyPositiveIntervalHistograms;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *lessThan10mIntervalHistograms;
@property (nonatomic, retain) NSMutableArray *lessThan200mIntervalHistograms;
@property (nonatomic, retain) NSMutableArray *lessThan25mIntervalHistograms;
@property (nonatomic, retain) NSMutableArray *lessThan55mIntervalHistograms;
@property (nonatomic) unsigned long long timestamp;

+ (Class)anyPositiveIntervalHistogramType;
+ (Class)lessThan10mIntervalHistogramType;
+ (Class)lessThan200mIntervalHistogramType;
+ (Class)lessThan25mIntervalHistogramType;
+ (Class)lessThan55mIntervalHistogramType;

- (void)addAnyPositiveIntervalHistogram:(id)arg1;
- (void)addLessThan10mIntervalHistogram:(id)arg1;
- (void)addLessThan200mIntervalHistogram:(id)arg1;
- (void)addLessThan25mIntervalHistogram:(id)arg1;
- (void)addLessThan55mIntervalHistogram:(id)arg1;
- (id)anyPositiveIntervalHistogramAtIndex:(unsigned long long)arg1;
- (id)anyPositiveIntervalHistograms;
- (unsigned long long)anyPositiveIntervalHistogramsCount;
- (void)clearAnyPositiveIntervalHistograms;
- (void)clearLessThan10mIntervalHistograms;
- (void)clearLessThan200mIntervalHistograms;
- (void)clearLessThan25mIntervalHistograms;
- (void)clearLessThan55mIntervalHistograms;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (bool)hasDuration;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lessThan10mIntervalHistogramAtIndex:(unsigned long long)arg1;
- (id)lessThan10mIntervalHistograms;
- (unsigned long long)lessThan10mIntervalHistogramsCount;
- (id)lessThan200mIntervalHistogramAtIndex:(unsigned long long)arg1;
- (id)lessThan200mIntervalHistograms;
- (unsigned long long)lessThan200mIntervalHistogramsCount;
- (id)lessThan25mIntervalHistogramAtIndex:(unsigned long long)arg1;
- (id)lessThan25mIntervalHistograms;
- (unsigned long long)lessThan25mIntervalHistogramsCount;
- (id)lessThan55mIntervalHistogramAtIndex:(unsigned long long)arg1;
- (id)lessThan55mIntervalHistograms;
- (unsigned long long)lessThan55mIntervalHistogramsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAnyPositiveIntervalHistograms:(id)arg1;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLessThan10mIntervalHistograms:(id)arg1;
- (void)setLessThan200mIntervalHistograms:(id)arg1;
- (void)setLessThan25mIntervalHistograms:(id)arg1;
- (void)setLessThan55mIntervalHistograms:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
