/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartWorkoutIntent : PBCodable <NSCopying, NSSecureCoding, _INPBStartWorkoutIntent> {
    NSArray * _associatedItems;
    _INPBWorkoutCustomization * _customization;
    _INPBDouble * _goalValue;
    struct { 
        unsigned int isBuiltInWorkoutType : 1; 
        unsigned int isOpenEnded : 1; 
        unsigned int isVoiceOnly : 1; 
        unsigned int sequenceLabel : 1; 
        unsigned int workoutGoalUnitType : 1; 
        unsigned int workoutLocationType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    bool  _isBuiltInWorkoutType;
    bool  _isOpenEnded;
    bool  _isVoiceOnly;
    int  _sequenceLabel;
    int  _workoutGoalUnitType;
    int  _workoutLocationType;
    _INPBDataString * _workoutName;
}

@property (nonatomic, copy) NSArray *associatedItems;
@property (nonatomic, readonly) unsigned long long associatedItemsCount;
@property (nonatomic, retain) _INPBWorkoutCustomization *customization;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDouble *goalValue;
@property (nonatomic, readonly) bool hasCustomization;
@property (nonatomic, readonly) bool hasGoalValue;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasIsBuiltInWorkoutType;
@property (nonatomic) bool hasIsOpenEnded;
@property (nonatomic) bool hasIsVoiceOnly;
@property (nonatomic) bool hasSequenceLabel;
@property (nonatomic) bool hasWorkoutGoalUnitType;
@property (nonatomic) bool hasWorkoutLocationType;
@property (nonatomic, readonly) bool hasWorkoutName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) bool isBuiltInWorkoutType;
@property (nonatomic) bool isOpenEnded;
@property (nonatomic) bool isVoiceOnly;
@property (nonatomic) int sequenceLabel;
@property (readonly) Class superclass;
@property (nonatomic) int workoutGoalUnitType;
@property (nonatomic) int workoutLocationType;
@property (nonatomic, retain) _INPBDataString *workoutName;

+ (Class)associatedItemsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsSequenceLabel:(id)arg1;
- (int)StringAsWorkoutGoalUnitType:(id)arg1;
- (int)StringAsWorkoutLocationType:(id)arg1;
- (void)addAssociatedItems:(id)arg1;
- (id)associatedItems;
- (id)associatedItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)associatedItemsCount;
- (void)clearAssociatedItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customization;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)goalValue;
- (bool)hasCustomization;
- (bool)hasGoalValue;
- (bool)hasIntentMetadata;
- (bool)hasIsBuiltInWorkoutType;
- (bool)hasIsOpenEnded;
- (bool)hasIsVoiceOnly;
- (bool)hasSequenceLabel;
- (bool)hasWorkoutGoalUnitType;
- (bool)hasWorkoutLocationType;
- (bool)hasWorkoutName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isBuiltInWorkoutType;
- (bool)isEqual:(id)arg1;
- (bool)isOpenEnded;
- (bool)isVoiceOnly;
- (bool)readFrom:(id)arg1;
- (int)sequenceLabel;
- (id)sequenceLabelAsString:(int)arg1;
- (void)setAssociatedItems:(id)arg1;
- (void)setCustomization:(id)arg1;
- (void)setGoalValue:(id)arg1;
- (void)setHasIsBuiltInWorkoutType:(bool)arg1;
- (void)setHasIsOpenEnded:(bool)arg1;
- (void)setHasIsVoiceOnly:(bool)arg1;
- (void)setHasSequenceLabel:(bool)arg1;
- (void)setHasWorkoutGoalUnitType:(bool)arg1;
- (void)setHasWorkoutLocationType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setIsBuiltInWorkoutType:(bool)arg1;
- (void)setIsOpenEnded:(bool)arg1;
- (void)setIsVoiceOnly:(bool)arg1;
- (void)setSequenceLabel:(int)arg1;
- (void)setWorkoutGoalUnitType:(int)arg1;
- (void)setWorkoutLocationType:(int)arg1;
- (void)setWorkoutName:(id)arg1;
- (int)workoutGoalUnitType;
- (id)workoutGoalUnitTypeAsString:(int)arg1;
- (int)workoutLocationType;
- (id)workoutLocationTypeAsString:(int)arg1;
- (id)workoutName;
- (void)writeTo:(id)arg1;

@end
