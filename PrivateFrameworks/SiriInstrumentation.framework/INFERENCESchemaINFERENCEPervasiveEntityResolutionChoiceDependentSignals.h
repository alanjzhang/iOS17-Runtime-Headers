/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface INFERENCESchemaINFERENCEPervasiveEntityResolutionChoiceDependentSignals : SISchemaInstrumentationMessage {
    long long  _choice;
    float  _frequencyPercentage;
    struct { 
        unsigned int choice : 1; 
        unsigned int isUserSelectedChoice : 1; 
        unsigned int isModelPredictedChoice : 1; 
        unsigned int frequencyPercentage : 1; 
        unsigned int recencySeconds : 1; 
        unsigned int recencyRank : 1; 
        unsigned int lastContiguousCount : 1; 
        unsigned int locationAffinity300Meters : 1; 
        unsigned int locationAffinity2500Meters : 1; 
        unsigned int locationAffinity156Kilometers : 1; 
        unsigned int locationFrequencyCount300Meters : 1; 
        unsigned int locationFrequencyCount2500Meters : 1; 
        unsigned int locationFrequencyCount156Kilometers : 1; 
    }  _has;
    int  _isModelPredictedChoice;
    int  _isUserSelectedChoice;
    int  _lastContiguousCount;
    float  _locationAffinity156Kilometers;
    float  _locationAffinity2500Meters;
    float  _locationAffinity300Meters;
    long long  _locationFrequencyCount156Kilometers;
    long long  _locationFrequencyCount2500Meters;
    long long  _locationFrequencyCount300Meters;
    int  _recencyRank;
    int  _recencySeconds;
}

@property (nonatomic) long long choice;
@property (nonatomic) float frequencyPercentage;
@property (nonatomic) bool hasChoice;
@property (nonatomic) bool hasFrequencyPercentage;
@property (nonatomic) bool hasIsModelPredictedChoice;
@property (nonatomic) bool hasIsUserSelectedChoice;
@property (nonatomic) bool hasLastContiguousCount;
@property (nonatomic) bool hasLocationAffinity156Kilometers;
@property (nonatomic) bool hasLocationAffinity2500Meters;
@property (nonatomic) bool hasLocationAffinity300Meters;
@property (nonatomic) bool hasLocationFrequencyCount156Kilometers;
@property (nonatomic) bool hasLocationFrequencyCount2500Meters;
@property (nonatomic) bool hasLocationFrequencyCount300Meters;
@property (nonatomic) bool hasRecencyRank;
@property (nonatomic) bool hasRecencySeconds;
@property (nonatomic) int isModelPredictedChoice;
@property (nonatomic) int isUserSelectedChoice;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int lastContiguousCount;
@property (nonatomic) float locationAffinity156Kilometers;
@property (nonatomic) float locationAffinity2500Meters;
@property (nonatomic) float locationAffinity300Meters;
@property (nonatomic) long long locationFrequencyCount156Kilometers;
@property (nonatomic) long long locationFrequencyCount2500Meters;
@property (nonatomic) long long locationFrequencyCount300Meters;
@property (nonatomic) int recencyRank;
@property (nonatomic) int recencySeconds;

- (long long)choice;
- (void)deleteChoice;
- (void)deleteFrequencyPercentage;
- (void)deleteIsModelPredictedChoice;
- (void)deleteIsUserSelectedChoice;
- (void)deleteLastContiguousCount;
- (void)deleteLocationAffinity156Kilometers;
- (void)deleteLocationAffinity2500Meters;
- (void)deleteLocationAffinity300Meters;
- (void)deleteLocationFrequencyCount156Kilometers;
- (void)deleteLocationFrequencyCount2500Meters;
- (void)deleteLocationFrequencyCount300Meters;
- (void)deleteRecencyRank;
- (void)deleteRecencySeconds;
- (id)dictionaryRepresentation;
- (float)frequencyPercentage;
- (bool)hasChoice;
- (bool)hasFrequencyPercentage;
- (bool)hasIsModelPredictedChoice;
- (bool)hasIsUserSelectedChoice;
- (bool)hasLastContiguousCount;
- (bool)hasLocationAffinity156Kilometers;
- (bool)hasLocationAffinity2500Meters;
- (bool)hasLocationAffinity300Meters;
- (bool)hasLocationFrequencyCount156Kilometers;
- (bool)hasLocationFrequencyCount2500Meters;
- (bool)hasLocationFrequencyCount300Meters;
- (bool)hasRecencyRank;
- (bool)hasRecencySeconds;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)isModelPredictedChoice;
- (int)isUserSelectedChoice;
- (id)jsonData;
- (int)lastContiguousCount;
- (float)locationAffinity156Kilometers;
- (float)locationAffinity2500Meters;
- (float)locationAffinity300Meters;
- (long long)locationFrequencyCount156Kilometers;
- (long long)locationFrequencyCount2500Meters;
- (long long)locationFrequencyCount300Meters;
- (bool)readFrom:(id)arg1;
- (int)recencyRank;
- (int)recencySeconds;
- (void)setChoice:(long long)arg1;
- (void)setFrequencyPercentage:(float)arg1;
- (void)setHasChoice:(bool)arg1;
- (void)setHasFrequencyPercentage:(bool)arg1;
- (void)setHasIsModelPredictedChoice:(bool)arg1;
- (void)setHasIsUserSelectedChoice:(bool)arg1;
- (void)setHasLastContiguousCount:(bool)arg1;
- (void)setHasLocationAffinity156Kilometers:(bool)arg1;
- (void)setHasLocationAffinity2500Meters:(bool)arg1;
- (void)setHasLocationAffinity300Meters:(bool)arg1;
- (void)setHasLocationFrequencyCount156Kilometers:(bool)arg1;
- (void)setHasLocationFrequencyCount2500Meters:(bool)arg1;
- (void)setHasLocationFrequencyCount300Meters:(bool)arg1;
- (void)setHasRecencyRank:(bool)arg1;
- (void)setHasRecencySeconds:(bool)arg1;
- (void)setIsModelPredictedChoice:(int)arg1;
- (void)setIsUserSelectedChoice:(int)arg1;
- (void)setLastContiguousCount:(int)arg1;
- (void)setLocationAffinity156Kilometers:(float)arg1;
- (void)setLocationAffinity2500Meters:(float)arg1;
- (void)setLocationAffinity300Meters:(float)arg1;
- (void)setLocationFrequencyCount156Kilometers:(long long)arg1;
- (void)setLocationFrequencyCount2500Meters:(long long)arg1;
- (void)setLocationFrequencyCount300Meters:(long long)arg1;
- (void)setRecencyRank:(int)arg1;
- (void)setRecencySeconds:(int)arg1;
- (void)writeTo:(id)arg1;

// INFERENCESchemaINFERENCEPervasiveEntityResolutionChoiceDependentSignals (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
