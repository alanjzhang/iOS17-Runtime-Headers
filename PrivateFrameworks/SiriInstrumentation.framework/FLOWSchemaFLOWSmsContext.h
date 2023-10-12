/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface FLOWSchemaFLOWSmsContext : SISchemaInstrumentationMessage {
    int  _appendingActionReadMessagesCount;
    FLOWSchemaFLOWSmsAudioContext * _audioContext;
    bool  _emojiUsed;
    struct { 
        unsigned int messageType : 1; 
        unsigned int emojiUsed : 1; 
        unsigned int keyboardUsed : 1; 
        unsigned int isSenderShortCode : 1; 
        unsigned int isLongMessage : 1; 
        unsigned int isReply : 1; 
        unsigned int appendingActionReadMessagesCount : 1; 
        unsigned int userPersona : 1; 
    }  _has;
    bool  _hasAudioContext;
    bool  _hasLanguageConfidenceMatrix;
    bool  _hasMessageDurationMs;
    bool  _hasRichAttachmentIntelligenceFeatureUsage;
    bool  _hasTextContext;
    bool  _hasTextMessageLength;
    NSArray * _isGroupMessages;
    bool  _isLongMessage;
    NSArray * _isLongMessageLists;
    NSArray * _isMultiLinguals;
    NSArray * _isReadables;
    bool  _isReply;
    bool  _isSenderShortCode;
    NSArray * _isSenderShortCodeLists;
    bool  _keyboardUsed;
    FLOWSchemaFLOWLanguageConfidenceMatrix * _languageConfidenceMatrix;
    unsigned int  _messageDurationMs;
    NSArray * _messageDurationsInSeconds;
    int  _messageType;
    NSArray * _personTypes;
    NSArray * _readMessageTypes;
    NSArray * _recipientTypes;
    FLOWSchemaFLOWRichAttachmentIntelligenceFeatureUsage * _richAttachmentIntelligenceFeatureUsage;
    FLOWSchemaFLOWSmsTextContext * _textContext;
    FLOWSchemaFLOWTextMessageLength * _textMessageLength;
    int  _userPersona;
    unsigned long long  _whichMessagecontext;
    unsigned long long  _whichMessagesize;
}

@property (nonatomic) int appendingActionReadMessagesCount;
@property (nonatomic, retain) FLOWSchemaFLOWSmsAudioContext *audioContext;
@property (nonatomic) bool emojiUsed;
@property (nonatomic) bool hasAppendingActionReadMessagesCount;
@property (nonatomic) bool hasAudioContext;
@property (nonatomic) bool hasEmojiUsed;
@property (nonatomic) bool hasIsLongMessage;
@property (nonatomic) bool hasIsReply;
@property (nonatomic) bool hasIsSenderShortCode;
@property (nonatomic) bool hasKeyboardUsed;
@property (nonatomic) bool hasLanguageConfidenceMatrix;
@property (nonatomic) bool hasMessageDurationMs;
@property (nonatomic) bool hasMessageType;
@property (nonatomic) bool hasRichAttachmentIntelligenceFeatureUsage;
@property (nonatomic) bool hasTextContext;
@property (nonatomic) bool hasTextMessageLength;
@property (nonatomic) bool hasUserPersona;
@property (nonatomic, copy) NSArray *isGroupMessages;
@property (nonatomic) bool isLongMessage;
@property (nonatomic, copy) NSArray *isLongMessageLists;
@property (nonatomic, copy) NSArray *isMultiLinguals;
@property (nonatomic, copy) NSArray *isReadables;
@property (nonatomic) bool isReply;
@property (nonatomic) bool isSenderShortCode;
@property (nonatomic, copy) NSArray *isSenderShortCodeLists;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool keyboardUsed;
@property (nonatomic, retain) FLOWSchemaFLOWLanguageConfidenceMatrix *languageConfidenceMatrix;
@property (nonatomic) unsigned int messageDurationMs;
@property (nonatomic, copy) NSArray *messageDurationsInSeconds;
@property (nonatomic) int messageType;
@property (nonatomic, copy) NSArray *personTypes;
@property (nonatomic, copy) NSArray *readMessageTypes;
@property (nonatomic, copy) NSArray *recipientTypes;
@property (nonatomic, retain) FLOWSchemaFLOWRichAttachmentIntelligenceFeatureUsage *richAttachmentIntelligenceFeatureUsage;
@property (nonatomic, retain) FLOWSchemaFLOWSmsTextContext *textContext;
@property (nonatomic, retain) FLOWSchemaFLOWTextMessageLength *textMessageLength;
@property (nonatomic) int userPersona;
@property (nonatomic, readonly) unsigned long long whichMessagecontext;
@property (nonatomic, readonly) unsigned long long whichMessagesize;

- (void).cxx_destruct;
- (void)addIsGroupMessage:(bool)arg1;
- (void)addIsLongMessageList:(bool)arg1;
- (void)addIsMultiLingual:(bool)arg1;
- (void)addIsReadable:(bool)arg1;
- (void)addIsSenderShortCodeList:(bool)arg1;
- (void)addMessageDurationsInSeconds:(unsigned long long)arg1;
- (void)addPersonType:(int)arg1;
- (void)addReadMessageType:(int)arg1;
- (void)addRecipientType:(int)arg1;
- (int)appendingActionReadMessagesCount;
- (id)audioContext;
- (void)clearIsGroupMessage;
- (void)clearIsLongMessageList;
- (void)clearIsMultiLingual;
- (void)clearIsReadable;
- (void)clearIsSenderShortCodeList;
- (void)clearMessageDurationsInSeconds;
- (void)clearPersonType;
- (void)clearReadMessageType;
- (void)clearRecipientType;
- (void)deleteAppendingActionReadMessagesCount;
- (void)deleteAudioContext;
- (void)deleteEmojiUsed;
- (void)deleteIsGroupMessage;
- (void)deleteIsLongMessage;
- (void)deleteIsLongMessageList;
- (void)deleteIsMultiLingual;
- (void)deleteIsReadable;
- (void)deleteIsReply;
- (void)deleteIsSenderShortCode;
- (void)deleteIsSenderShortCodeList;
- (void)deleteKeyboardUsed;
- (void)deleteLanguageConfidenceMatrix;
- (void)deleteMessageDurationMs;
- (void)deleteMessageDurationsInSeconds;
- (void)deleteMessageType;
- (void)deletePersonType;
- (void)deleteReadMessageType;
- (void)deleteRecipientType;
- (void)deleteRichAttachmentIntelligenceFeatureUsage;
- (void)deleteTextContext;
- (void)deleteTextMessageLength;
- (void)deleteUserPersona;
- (id)dictionaryRepresentation;
- (bool)emojiUsed;
- (bool)hasAppendingActionReadMessagesCount;
- (bool)hasAudioContext;
- (bool)hasEmojiUsed;
- (bool)hasIsLongMessage;
- (bool)hasIsReply;
- (bool)hasIsSenderShortCode;
- (bool)hasKeyboardUsed;
- (bool)hasLanguageConfidenceMatrix;
- (bool)hasMessageDurationMs;
- (bool)hasMessageType;
- (bool)hasRichAttachmentIntelligenceFeatureUsage;
- (bool)hasTextContext;
- (bool)hasTextMessageLength;
- (bool)hasUserPersona;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGroupMessageAtIndex:(unsigned long long)arg1;
- (unsigned long long)isGroupMessageCount;
- (id)isGroupMessages;
- (bool)isLongMessage;
- (bool)isLongMessageListAtIndex:(unsigned long long)arg1;
- (unsigned long long)isLongMessageListCount;
- (id)isLongMessageLists;
- (bool)isMultiLingualAtIndex:(unsigned long long)arg1;
- (unsigned long long)isMultiLingualCount;
- (id)isMultiLinguals;
- (bool)isReadableAtIndex:(unsigned long long)arg1;
- (unsigned long long)isReadableCount;
- (id)isReadables;
- (bool)isReply;
- (bool)isSenderShortCode;
- (bool)isSenderShortCodeListAtIndex:(unsigned long long)arg1;
- (unsigned long long)isSenderShortCodeListCount;
- (id)isSenderShortCodeLists;
- (id)jsonData;
- (bool)keyboardUsed;
- (id)languageConfidenceMatrix;
- (unsigned int)messageDurationMs;
- (id)messageDurationsInSeconds;
- (unsigned long long)messageDurationsInSecondsAtIndex:(unsigned long long)arg1;
- (unsigned long long)messageDurationsInSecondsCount;
- (int)messageType;
- (int)personTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)personTypeCount;
- (id)personTypes;
- (bool)readFrom:(id)arg1;
- (int)readMessageTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)readMessageTypeCount;
- (id)readMessageTypes;
- (int)recipientTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientTypeCount;
- (id)recipientTypes;
- (id)richAttachmentIntelligenceFeatureUsage;
- (void)setAppendingActionReadMessagesCount:(int)arg1;
- (void)setAudioContext:(id)arg1;
- (void)setEmojiUsed:(bool)arg1;
- (void)setHasAppendingActionReadMessagesCount:(bool)arg1;
- (void)setHasAudioContext:(bool)arg1;
- (void)setHasEmojiUsed:(bool)arg1;
- (void)setHasIsLongMessage:(bool)arg1;
- (void)setHasIsReply:(bool)arg1;
- (void)setHasIsSenderShortCode:(bool)arg1;
- (void)setHasKeyboardUsed:(bool)arg1;
- (void)setHasLanguageConfidenceMatrix:(bool)arg1;
- (void)setHasMessageDurationMs:(bool)arg1;
- (void)setHasMessageType:(bool)arg1;
- (void)setHasRichAttachmentIntelligenceFeatureUsage:(bool)arg1;
- (void)setHasTextContext:(bool)arg1;
- (void)setHasTextMessageLength:(bool)arg1;
- (void)setHasUserPersona:(bool)arg1;
- (void)setIsGroupMessages:(id)arg1;
- (void)setIsLongMessage:(bool)arg1;
- (void)setIsLongMessageLists:(id)arg1;
- (void)setIsMultiLinguals:(id)arg1;
- (void)setIsReadables:(id)arg1;
- (void)setIsReply:(bool)arg1;
- (void)setIsSenderShortCode:(bool)arg1;
- (void)setIsSenderShortCodeLists:(id)arg1;
- (void)setKeyboardUsed:(bool)arg1;
- (void)setLanguageConfidenceMatrix:(id)arg1;
- (void)setMessageDurationMs:(unsigned int)arg1;
- (void)setMessageDurationsInSeconds:(id)arg1;
- (void)setMessageType:(int)arg1;
- (void)setPersonTypes:(id)arg1;
- (void)setReadMessageTypes:(id)arg1;
- (void)setRecipientTypes:(id)arg1;
- (void)setRichAttachmentIntelligenceFeatureUsage:(id)arg1;
- (void)setTextContext:(id)arg1;
- (void)setTextMessageLength:(id)arg1;
- (void)setUserPersona:(int)arg1;
- (id)textContext;
- (id)textMessageLength;
- (int)userPersona;
- (unsigned long long)whichMessagecontext;
- (unsigned long long)whichMessagesize;
- (void)writeTo:(id)arg1;

// FLOWSchemaFLOWSmsContext (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
