/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLOWSchemaFLOWPhoneCallEmergencyContext : SISchemaInstrumentationMessage {
    int  _emergencyCallType;
    struct { 
        unsigned int emergencyCallType : 1; 
    }  _has;
}

@property (nonatomic) int emergencyCallType;
@property (nonatomic) bool hasEmergencyCallType;
@property (nonatomic, readonly) NSData *jsonData;

- (void)deleteEmergencyCallType;
- (id)dictionaryRepresentation;
- (int)emergencyCallType;
- (bool)hasEmergencyCallType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setEmergencyCallType:(int)arg1;
- (void)setHasEmergencyCallType:(bool)arg1;
- (void)writeTo:(id)arg1;

// FLOWSchemaFLOWPhoneCallEmergencyContext (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
