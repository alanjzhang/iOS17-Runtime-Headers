/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataGenerator : NSObject {
    HDDemoDataActivitySampleGenerator * _activitySampleGenerator;
    HDDemoDataAlcoholSampleGenerator * _alcoholSampleGenerator;
    NSMutableDictionary * _appProvenances;
    HDDemoDataAudioExposureSampleGenerator * _audioExposureSampleGenerator;
    HDDemoDataAudiogramSampleGenerator * _audiogramSampleGenerator;
    HDDemoDataBodySampleGenerator * _bodySampleGenerator;
    HDDemoDataGeneratorConfiguration * _configuration;
    NSArray * _dataGeneratorClassesFromPlugins;
    NSArray * _dataGeneratorsFromPlugins;
    NSArray * _demoDataGenerators;
    HDDemoDataPerson * _demoPerson;
    HDDemoDataFoodSampleGenerator * _foodSampleGenerator;
    HDDemoDataGeneratorState * _generatorState;
    NSCalendar * _gregorianCalendar;
    HDDemoDataHealthDocumentSampleGenerator * _healthDocumentSampleGenerator;
    HDDemoDataHeartSampleGenerator * _heartSampleGenerator;
    bool  _isGeneratingDemoData;
    HDDemoDataMindfulnessSampleGenerator * _mindfulnessSampleGenerator;
    HDDemoDataMobilitySampleGenerator * _mobilitySampleGenerator;
    long long  _numHKSamples;
    HDDemoDataOtherAndAdditionalSampleGenerator * _otherAndAdditionalSampleGenerator;
    HDDemoDataPathologySampleGenerator * _pathologySampleGenerator;
    HDProfile * _profile;
    NSObject<OS_dispatch_queue> * _queue;
    HDDemoDataReproductiveHealthSampleGenerator * _reproductiveHealthSampleGenerator;
    HDDemoDataSleepSampleGenerator * _sleepSampleGenerator;
    HDDemoDataStatisticsSampleGenerator * _statisticsSampleGenerator;
    HDDemoDataSymptomsSampleGenerator * _symptomsSampleGenerator;
    HDDemoDataVitalsSampleGenerator * _vitalsSampleGenerator;
}

@property (nonatomic, retain) HDDemoDataActivitySampleGenerator *activitySampleGenerator;
@property (nonatomic, retain) HDDemoDataAlcoholSampleGenerator *alcoholSampleGenerator;
@property (nonatomic, retain) HDDemoDataAudioExposureSampleGenerator *audioExposureSampleGenerator;
@property (nonatomic, retain) HDDemoDataAudiogramSampleGenerator *audiogramSampleGenerator;
@property (nonatomic, retain) HDDemoDataBodySampleGenerator *bodySampleGenerator;
@property (nonatomic, retain) HDDemoDataGeneratorConfiguration *configuration;
@property (nonatomic, retain) HDDemoDataPerson *demoPerson;
@property (nonatomic, retain) HDDemoDataFoodSampleGenerator *foodSampleGenerator;
@property (nonatomic, readonly) HDDemoDataGeneratorState *generatorState;
@property (nonatomic, retain) HDDemoDataHealthDocumentSampleGenerator *healthDocumentSampleGenerator;
@property (nonatomic, retain) HDDemoDataHeartSampleGenerator *heartSampleGenerator;
@property (nonatomic, retain) HDDemoDataMindfulnessSampleGenerator *mindfulnessSampleGenerator;
@property (nonatomic, retain) HDDemoDataMobilitySampleGenerator *mobilitySampleGenerator;
@property (nonatomic, retain) HDDemoDataOtherAndAdditionalSampleGenerator *otherAndAdditionalSampleGenerator;
@property (nonatomic, retain) HDDemoDataPathologySampleGenerator *pathologySampleGenerator;
@property (nonatomic, readonly) HDProfile *profile;
@property (nonatomic, retain) HDDemoDataReproductiveHealthSampleGenerator *reproductiveHealthSampleGenerator;
@property (nonatomic, retain) HDDemoDataSleepSampleGenerator *sleepSampleGenerator;
@property (nonatomic, retain) HDDemoDataStatisticsSampleGenerator *statisticsSampleGenerator;
@property (nonatomic, retain) HDDemoDataSymptomsSampleGenerator *symptomsSampleGenerator;
@property (nonatomic, retain) HDDemoDataVitalsSampleGenerator *vitalsSampleGenerator;

- (void).cxx_destruct;
- (id)activitySampleGenerator;
- (id)alcoholSampleGenerator;
- (id)audioExposureSampleGenerator;
- (id)audiogramSampleGenerator;
- (id)bodySampleGenerator;
- (id)configuration;
- (id)currentDateFromCurrentTime:(double)arg1;
- (id)demoPerson;
- (id)firstSampleDate;
- (long long)firstSampleDayOfYear;
- (id)foodSampleGenerator;
- (void)generateThroughEndDate:(id)arg1 completion:(id /* block */)arg2;
- (id)generatorState;
- (id)gregorianCalendar;
- (id)healthDocumentSampleGenerator;
- (id)heartSampleGenerator;
- (id)init;
- (id)initWithProfile:(id)arg1 configuration:(id)arg2 queue:(id)arg3;
- (id)initWithProfile:(id)arg1 queue:(id)arg2;
- (bool)isDemoDataTimeInWeekend:(double)arg1 calendar:(id)arg2;
- (id)mindfulnessSampleGenerator;
- (id)mobilitySampleGenerator;
- (id)otherAndAdditionalSampleGenerator;
- (id)pathologySampleGenerator;
- (id)profile;
- (id)reproductiveHealthSampleGenerator;
- (void)setActivitySampleGenerator:(id)arg1;
- (void)setAlcoholSampleGenerator:(id)arg1;
- (void)setAudioExposureSampleGenerator:(id)arg1;
- (void)setAudiogramSampleGenerator:(id)arg1;
- (void)setBodySampleGenerator:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDemoPerson:(id)arg1;
- (void)setFoodSampleGenerator:(id)arg1;
- (void)setHealthDocumentSampleGenerator:(id)arg1;
- (void)setHeartSampleGenerator:(id)arg1;
- (void)setMindfulnessSampleGenerator:(id)arg1;
- (void)setMobilitySampleGenerator:(id)arg1;
- (void)setOtherAndAdditionalSampleGenerator:(id)arg1;
- (void)setPathologySampleGenerator:(id)arg1;
- (void)setReproductiveHealthSampleGenerator:(id)arg1;
- (void)setSleepSampleGenerator:(id)arg1;
- (void)setStatisticsSampleGenerator:(id)arg1;
- (void)setSymptomsSampleGenerator:(id)arg1;
- (void)setVitalsSampleGenerator:(id)arg1;
- (id)sleepSampleGenerator;
- (id)statisticsSampleGenerator;
- (id)symptomsSampleGenerator;
- (id)vitalsSampleGenerator;

@end
