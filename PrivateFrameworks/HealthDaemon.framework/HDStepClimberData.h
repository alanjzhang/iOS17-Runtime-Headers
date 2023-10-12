/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDStepClimberData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering> {
    HDFitnessMachineCharacteristicUInt16Field * _averageStepRateField;
    HDFitnessMachineCharacteristicUInt16Field * _elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field * _energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field * _energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt16Field * _floorsField;
    HDFitnessMachineCharacteristicUInt8Field * _heartRateField;
    HDFitnessMachineCharacteristicUInt8Field * _metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field * _positiveElevationGainField;
    HDFitnessMachineCharacteristicUInt16Field * _remainingTimeField;
    HDFitnessMachineCharacteristicUInt16Field * _stepCountField;
    HDFitnessMachineCharacteristicUInt16Field * _stepPerMinuteField;
    HDFitnessMachineCharacteristicUInt16Field * _totalEnergyField;
}

@property (nonatomic, readonly) unsigned short averageStepRate;
@property (nonatomic, readonly) bool averageStepRateIsSet;
@property (nonatomic, readonly) unsigned short elapsedTime;
@property (nonatomic, readonly) bool elapsedTimeIsSet;
@property (nonatomic, readonly) unsigned short energyPerHour;
@property (nonatomic, readonly) bool energyPerHourIsSet;
@property (nonatomic, readonly) unsigned char energyPerMinute;
@property (nonatomic, readonly) bool energyPerMinuteIsSet;
@property (nonatomic, readonly) unsigned short floors;
@property (nonatomic, readonly) bool floorsIsSet;
@property (nonatomic, readonly) unsigned char heartRate;
@property (nonatomic, readonly) bool heartRateIsSet;
@property (nonatomic, readonly) unsigned char metabolicEquivalent;
@property (nonatomic, readonly) bool metabolicEquivalentIsSet;
@property (nonatomic, readonly) unsigned short positiveElevationGain;
@property (nonatomic, readonly) bool positiveElevationGainIsSet;
@property (nonatomic, readonly) unsigned short remainingTime;
@property (nonatomic, readonly) bool remainingTimeIsSet;
@property (nonatomic, readonly) unsigned short stepCount;
@property (nonatomic, readonly) bool stepCountIsSet;
@property (nonatomic, readonly) unsigned short stepPerMinute;
@property (nonatomic, readonly) bool stepPerMinuteIsSet;
@property (nonatomic, readonly) unsigned short totalEnergy;
@property (nonatomic, readonly) bool totalEnergyIsSet;
@property (nonatomic, readonly) NSDate *updateTime;

+ (unsigned char)flagFieldLength;
+ (id)uuid;

- (void).cxx_destruct;
- (id)_init;
- (id)allFields;
- (unsigned short)averageStepRate;
- (bool)averageStepRateIsSet;
- (id)description;
- (unsigned short)elapsedTime;
- (bool)elapsedTimeIsSet;
- (unsigned short)energyPerHour;
- (bool)energyPerHourIsSet;
- (unsigned char)energyPerMinute;
- (bool)energyPerMinuteIsSet;
- (unsigned short)floors;
- (bool)floorsIsSet;
- (unsigned char)heartRate;
- (bool)heartRateIsSet;
- (unsigned char)metabolicEquivalent;
- (bool)metabolicEquivalentIsSet;
- (unsigned short)positiveElevationGain;
- (bool)positiveElevationGainIsSet;
- (unsigned short)remainingTime;
- (bool)remainingTimeIsSet;
- (unsigned short)stepCount;
- (bool)stepCountIsSet;
- (unsigned short)stepPerMinute;
- (bool)stepPerMinuteIsSet;
- (unsigned short)totalEnergy;
- (bool)totalEnergyIsSet;

// HDStepClimberData (HDDatumRendering)

- (id)generateDatums:(id)arg1;

@end
