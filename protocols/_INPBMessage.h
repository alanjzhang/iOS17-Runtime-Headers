/* Generated by RuntimeBrowser.
 */

@protocol _INPBMessage <NSObject>

@required

+ (Class)attachmentFileType;
+ (Class)recipientType;

- (int)StringAsAttributes:(NSString *)arg1;
- (int)StringAsEffect:(NSString *)arg1;
- (int)StringAsType:(NSString *)arg1;
- (void)addAttachmentFile:(_INPBFile *)arg1;
- (void)addAttribute:(int)arg1;
- (void)addRecipient:(_INPBContact *)arg1;
- (_INPBFile *)attachmentFileAtIndex:(unsigned long long)arg1;
- (NSArray *)attachmentFiles;
- (unsigned long long)attachmentFilesCount;
- (int)attributeAtIndex:(unsigned long long)arg1;
- (int*)attributes;
- (NSString *)attributesAsString:(int)arg1;
- (unsigned long long)attributesCount;
- (_INPBFile *)audioMessageFile;
- (void)clearAttachmentFiles;
- (void)clearAttributes;
- (void)clearRecipients;
- (NSString *)content;
- (NSString *)conversationIdentifier;
- (_INPBDateTime *)dateLastMessageRead;
- (_INPBDateTime *)dateSent;
- (int)effect;
- (NSString *)effectAsString:(int)arg1;
- (NSString *)fileExtension;
- (NSString *)groupName;
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
- (NSString *)identifier;
- (_INPBMessageLinkMetadata *)linkMetadata;
- (_INPBLocation *)location;
- (NSString *)locationName;
- (_INPBInteger *)numberOfAttachments;
- (_INPBCurrencyAmountValue *)paymentAmount;
- (_INPBMessageReaction *)reaction;
- (_INPBContact *)recipientAtIndex:(unsigned long long)arg1;
- (NSArray *)recipients;
- (unsigned long long)recipientsCount;
- (_INPBMessage *)referencedMessage;
- (_INPBContact *)sender;
- (NSString *)serviceName;
- (void)setAttachmentFiles:(NSArray *)arg1;
- (void)setAttributes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setAudioMessageFile:(_INPBFile *)arg1;
- (void)setContent:(NSString *)arg1;
- (void)setConversationIdentifier:(NSString *)arg1;
- (void)setDateLastMessageRead:(_INPBDateTime *)arg1;
- (void)setDateSent:(_INPBDateTime *)arg1;
- (void)setEffect:(int)arg1;
- (void)setFileExtension:(NSString *)arg1;
- (void)setGroupName:(NSString *)arg1;
- (void)setHasEffect:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)setLinkMetadata:(_INPBMessageLinkMetadata *)arg1;
- (void)setLocation:(_INPBLocation *)arg1;
- (void)setLocationName:(NSString *)arg1;
- (void)setNumberOfAttachments:(_INPBInteger *)arg1;
- (void)setPaymentAmount:(_INPBCurrencyAmountValue *)arg1;
- (void)setReaction:(_INPBMessageReaction *)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setReferencedMessage:(_INPBMessage *)arg1;
- (void)setSender:(_INPBContact *)arg1;
- (void)setServiceName:(NSString *)arg1;
- (void)setSpeakableGroupName:(_INPBDataString *)arg1;
- (void)setType:(int)arg1;
- (_INPBDataString *)speakableGroupName;
- (int)type;
- (NSString *)typeAsString:(int)arg1;

@end
