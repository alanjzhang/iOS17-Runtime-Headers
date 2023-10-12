/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBMessage : PBCodable <NSCopying, NSSecureCoding, _INPBMessage> {
    NSArray * _attachmentFiles;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _attributes;
    _INPBFile * _audioMessageFile;
    NSString * _content;
    NSString * _conversationIdentifier;
    _INPBDateTime * _dateLastMessageRead;
    _INPBDateTime * _dateSent;
    int  _effect;
    NSString * _fileExtension;
    NSString * _groupName;
    struct { 
        unsigned int effect : 1; 
        unsigned int type : 1; 
    }  _has;
    NSString * _identifier;
    _INPBMessageLinkMetadata * _linkMetadata;
    _INPBLocation * _location;
    NSString * _locationName;
    _INPBInteger * _numberOfAttachments;
    _INPBCurrencyAmountValue * _paymentAmount;
    _INPBMessageReaction * _reaction;
    NSArray * _recipients;
    _INPBMessage * _referencedMessage;
    _INPBContact * _sender;
    NSString * _serviceName;
    _INPBDataString * _speakableGroupName;
    int  _type;
}

@property (nonatomic, copy) NSArray *attachmentFiles;
@property (nonatomic, readonly) unsigned long long attachmentFilesCount;
@property (nonatomic, readonly) int*attributes;
@property (nonatomic, readonly) unsigned long long attributesCount;
@property (nonatomic, retain) _INPBFile *audioMessageFile;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *conversationIdentifier;
@property (nonatomic, retain) _INPBDateTime *dateLastMessageRead;
@property (nonatomic, retain) _INPBDateTime *dateSent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int effect;
@property (nonatomic, copy) NSString *fileExtension;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, readonly) bool hasAudioMessageFile;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasConversationIdentifier;
@property (nonatomic, readonly) bool hasDateLastMessageRead;
@property (nonatomic, readonly) bool hasDateSent;
@property (nonatomic) bool hasEffect;
@property (nonatomic, readonly) bool hasFileExtension;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasLinkMetadata;
@property (nonatomic, readonly) bool hasLocation;
@property (nonatomic, readonly) bool hasLocationName;
@property (nonatomic, readonly) bool hasNumberOfAttachments;
@property (nonatomic, readonly) bool hasPaymentAmount;
@property (nonatomic, readonly) bool hasReaction;
@property (nonatomic, readonly) bool hasReferencedMessage;
@property (nonatomic, readonly) bool hasSender;
@property (nonatomic, readonly) bool hasServiceName;
@property (nonatomic, readonly) bool hasSpeakableGroupName;
@property (nonatomic) bool hasType;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) _INPBMessageLinkMetadata *linkMetadata;
@property (nonatomic, retain) _INPBLocation *location;
@property (nonatomic, copy) NSString *locationName;
@property (nonatomic, retain) _INPBInteger *numberOfAttachments;
@property (nonatomic, retain) _INPBCurrencyAmountValue *paymentAmount;
@property (nonatomic, retain) _INPBMessageReaction *reaction;
@property (nonatomic, copy) NSArray *recipients;
@property (nonatomic, readonly) unsigned long long recipientsCount;
@property (nonatomic, retain) _INPBMessage *referencedMessage;
@property (nonatomic, retain) _INPBContact *sender;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, retain) _INPBDataString *speakableGroupName;
@property (readonly) Class superclass;
@property (nonatomic) int type;

+ (Class)attachmentFileType;
+ (Class)recipientType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAttributes:(id)arg1;
- (int)StringAsEffect:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addAttachmentFile:(id)arg1;
- (void)addAttribute:(int)arg1;
- (void)addRecipient:(id)arg1;
- (id)attachmentFileAtIndex:(unsigned long long)arg1;
- (id)attachmentFiles;
- (unsigned long long)attachmentFilesCount;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (int*)attributes;
- (id)attributesAsString:(int)arg1;
- (unsigned long long)attributesCount;
- (id)audioMessageFile;
- (void)clearAttachmentFiles;
- (void)clearAttributes;
- (void)clearRecipients;
- (id)content;
- (id)conversationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateLastMessageRead;
- (id)dateSent;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (int)effect;
- (id)effectAsString:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileExtension;
- (id)groupName;
- (bool)hasAudioMessageFile;
- (bool)hasContent;
- (bool)hasConversationIdentifier;
- (bool)hasDateLastMessageRead;
- (bool)hasDateSent;
- (bool)hasEffect;
- (bool)hasFileExtension;
- (bool)hasGroupName;
- (bool)hasIdentifier;
- (bool)hasLinkMetadata;
- (bool)hasLocation;
- (bool)hasLocationName;
- (bool)hasNumberOfAttachments;
- (bool)hasPaymentAmount;
- (bool)hasReaction;
- (bool)hasReferencedMessage;
- (bool)hasSender;
- (bool)hasServiceName;
- (bool)hasSpeakableGroupName;
- (bool)hasType;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)linkMetadata;
- (id)location;
- (id)locationName;
- (id)numberOfAttachments;
- (id)paymentAmount;
- (id)reaction;
- (bool)readFrom:(id)arg1;
- (id)recipientAtIndex:(unsigned long long)arg1;
- (id)recipients;
- (unsigned long long)recipientsCount;
- (id)referencedMessage;
- (id)sender;
- (id)serviceName;
- (void)setAttachmentFiles:(id)arg1;
- (void)setAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAudioMessageFile:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setConversationIdentifier:(id)arg1;
- (void)setDateLastMessageRead:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setEffect:(int)arg1;
- (void)setFileExtension:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setHasEffect:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLinkMetadata:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setNumberOfAttachments:(id)arg1;
- (void)setPaymentAmount:(id)arg1;
- (void)setReaction:(id)arg1;
- (void)setRecipients:(id)arg1;
- (void)setReferencedMessage:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setSpeakableGroupName:(id)arg1;
- (void)setType:(int)arg1;
- (id)speakableGroupName;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
