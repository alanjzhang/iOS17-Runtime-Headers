/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface POMMESSchemaPOMMESClientConversationMetadata : SISchemaInstrumentationMessage {
    struct { 
        unsigned int hasPromptContext : 1; 
        unsigned int hasDisplayHints : 1; 
    }  _has;
    bool  _hasDisplayHints;
    bool  _hasOnDeviceMetadata;
    bool  _hasPromptContext;
    POMMESSchemaPOMMESOnDeviceMetadata * _onDeviceMetadata;
}

@property (nonatomic) bool hasDisplayHints;
@property (nonatomic) bool hasHasDisplayHints;
@property (nonatomic) bool hasHasPromptContext;
@property (nonatomic) bool hasOnDeviceMetadata;
@property (nonatomic) bool hasPromptContext;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) POMMESSchemaPOMMESOnDeviceMetadata *onDeviceMetadata;

- (void).cxx_destruct;
- (void)deleteHasDisplayHints;
- (void)deleteHasPromptContext;
- (void)deleteOnDeviceMetadata;
- (id)dictionaryRepresentation;
- (bool)hasDisplayHints;
- (bool)hasHasDisplayHints;
- (bool)hasHasPromptContext;
- (bool)hasOnDeviceMetadata;
- (bool)hasPromptContext;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)onDeviceMetadata;
- (bool)readFrom:(id)arg1;
- (void)setHasDisplayHints:(bool)arg1;
- (void)setHasHasDisplayHints:(bool)arg1;
- (void)setHasHasPromptContext:(bool)arg1;
- (void)setHasOnDeviceMetadata:(bool)arg1;
- (void)setHasPromptContext:(bool)arg1;
- (void)setOnDeviceMetadata:(id)arg1;
- (void)writeTo:(id)arg1;

// POMMESSchemaPOMMESClientConversationMetadata (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
