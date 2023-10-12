/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface USOSchemaUSOPayloadAttachmentInfo : SISchemaInstrumentationMessage {
    int  _attachmentType;
    struct { 
        unsigned int attachmentType : 1; 
    }  _has;
}

@property (nonatomic) int attachmentType;
@property (nonatomic) bool hasAttachmentType;
@property (nonatomic, readonly) NSData *jsonData;

- (int)attachmentType;
- (void)deleteAttachmentType;
- (id)dictionaryRepresentation;
- (bool)hasAttachmentType;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAttachmentType:(int)arg1;
- (void)setHasAttachmentType:(bool)arg1;
- (void)writeTo:(id)arg1;

// USOSchemaUSOPayloadAttachmentInfo (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
