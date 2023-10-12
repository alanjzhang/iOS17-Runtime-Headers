/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMessage : NSObject <EFPubliclyDescribable, NSCopying> {
    NSArray * _bcc;
    NSString * _cachedMessageIDHeader;
    unsigned int  _calculatedAttachmentInfo;
    NSArray * _cc;
    NSString * _contentType;
    long long  _conversationID;
    unsigned int  _dateReceivedInterval;
    unsigned int  _dateSentInterval;
    NSUUID * _documentID;
    NSString * _externalID;
    _Atomic unsigned long long  _generationNumber;
    ECAngleBracketIDHash * _listIDHash;
    long long  _messageIDHeaderHash;
    NSURL * _messageURL;
    unsigned short  _numberOfAttachments;
    MFMimePart * _parentPart;
    unsigned int  _preferredEncoding;
    NSArray * _sender;
    NSString * _senderAddressComment;
    MFMessageStore * _store;
    MFMimePart * _strongParentPartReference;
    ECSubject * _subject;
    NSString * _summary;
    NSArray * _to;
}

@property (nonatomic, copy) NSArray *bcc;
@property (nonatomic, readonly, copy) NSArray *bccIfCached;
@property (nonatomic, copy) NSArray *cc;
@property (nonatomic, readonly, copy) NSArray *ccIfCached;
@property (nonatomic, readonly) NSDate *dateReceived;
@property (nonatomic) double dateReceivedAsTimeIntervalSince1970;
@property (nonatomic, readonly) NSDate *dateSent;
@property (nonatomic) double dateSentAsTimeIntervalSince1970;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *documentID;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, retain) NSString *externalID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *headerData;
@property (nonatomic, readonly) NSData *headerDataIfAvailable;
@property (nonatomic, retain) ECAngleBracketIDHash *listIDHash;
@property (nonatomic, readonly) unsigned long long messageSize;
@property (nonatomic, retain) MFMessageStore *messageStore;
@property (nonatomic) MFMimePart *parentPart;
@property (nonatomic, readonly, copy) NSString *remoteID;
@property (nonatomic) bool strongParentPart;
@property (nonatomic, retain) MFMimePart *strongParentPartReference;
@property (nonatomic, copy) ECSubject *subject;
@property (nonatomic, readonly, copy) ECSubject *subjectIfAvailable;
@property (nonatomic, readonly) NSString *summary;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *to;
@property (nonatomic, readonly, copy) NSArray *toIfCached;
@property (nonatomic, readonly) unsigned int uid;

+ (Class)dataMessageStoreToUse;
+ (id)messageWithRFC822Data:(id)arg1;
+ (id)messageWithRFC822Data:(id)arg1 forMailboxUID:(id)arg2;
+ (id)messageWithRFC822Data:(id)arg1 withParentPart:(id)arg2;
+ (id)messageWithRFC822Data:(id)arg1 withParentPart:(id)arg2 generateMessageIDHash:(bool)arg3;
+ (void)setMessageClassForStore:(id)arg1;

- (void).cxx_destruct;
- (id)_copyDateFromDateHeaderInHeaders:(id)arg1;
- (id)_copyDateFromReceivedHeadersInHeaders:(id)arg1;
- (bool)_doesDateAppearToBeSane:(id)arg1;
- (long long)_messageIDHeaderHashIvar;
- (id)_privacySafeDescription;
- (void)_setDateReceivedFromHeaders:(id)arg1;
- (void)_setDateSentFromHeaders:(id)arg1;
- (id)additionalHeadersForForward;
- (id)additionalHeadersForReply;
- (id)bcc;
- (id)bccIfCached;
- (id)bestAlternativeInPart:(id)arg1;
- (id)bodyData;
- (id)bodyDataIsComplete:(bool*)arg1;
- (id)bodyDataIsComplete:(bool*)arg1 isPartial:(bool*)arg2;
- (id)bodyDataIsComplete:(bool*)arg1 isPartial:(bool*)arg2 downloadIfNecessary:(bool)arg3;
- (void)calculateAttachmentInfoFromBody:(id)arg1;
- (bool)calculatedNumberOfAttachments;
- (bool)canBeTriaged;
- (id)cc;
- (id)ccIfCached;
- (id)contentType;
- (long long)conversationID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataConsumerForMimePart:(id)arg1;
- (id)dataForMimePart:(id)arg1;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3;
- (id)dataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4 didDownload:(bool*)arg5;
- (id)dataPathForMimePart:(id)arg1;
- (id)dateReceived;
- (double)dateReceivedAsTimeIntervalSince1970;
- (id)dateSent;
- (double)dateSentAsTimeIntervalSince1970;
- (id)defaultAlternativeInPart:(id)arg1;
- (id)description;
- (id)documentID;
- (id)ef_publicDescription;
- (id)externalID;
- (bool)fetchDataForMimePart:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withConsumer:(id)arg3 isComplete:(bool*)arg4 downloadIfNecessary:(bool)arg5;
- (unsigned long long)fileSize;
- (id)firstSender;
- (long long)generationCompare:(id)arg1;
- (unsigned long long)generationNumber;
- (id)headerData;
- (id)headerDataDownloadIfNecessary:(bool)arg1;
- (id)headerDataIfAvailable;
- (id)headers;
- (id)headersIfAvailable;
- (id)init;
- (bool)isLibraryMessage;
- (bool)isMessageContentsLocallyAvailable;
- (id)listIDHash;
- (void)loadCachedHeaderValuesFromHeaders:(id)arg1;
- (id)messageBody;
- (id)messageBodyIfAvailable;
- (id)messageBodyIfAvailableUpdatingFlags:(bool)arg1;
- (id)messageBodyUpdatingFlags:(bool)arg1;
- (id)messageData;
- (bool)messageData:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4;
- (id)messageDataHolder;
- (bool)messageDataHolder:(id*)arg1 messageSize:(unsigned long long*)arg2 isComplete:(bool*)arg3 downloadIfNecessary:(bool)arg4;
- (id)messageDataHolderIsComplete:(bool*)arg1 downloadIfNecessary:(bool)arg2;
- (id)messageDataIsComplete:(bool*)arg1 downloadIfNecessary:(bool)arg2;
- (id)messageDataIsPartial:(bool*)arg1;
- (id)messageID;
- (long long)messageIDHash;
- (id)messageIDHeader;
- (id)messageIDHeaderHash;
- (id)messageIDHeaderInFortyBytesOrLess;
- (unsigned long long)messageSize;
- (id)messageStore;
- (id)messageURL;
- (bool)needsDateReceived;
- (unsigned long long)numberOfAttachments;
- (id)parentPart;
- (id)path;
- (id)persistentID;
- (id)preferredEmailAddressToReplyWith;
- (unsigned int)preferredEncoding;
- (id)remoteID;
- (id)senderAddressComment;
- (id)senders;
- (id)sendersIfCached;
- (void)setBcc:(id)arg1;
- (void)setCc:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setConversationID:(long long)arg1;
- (void)setDateReceivedAsTimeIntervalSince1970:(double)arg1;
- (void)setDateReceivedTimeIntervalSince1970:(double)arg1;
- (void)setDateSentAsTimeIntervalSince1970:(double)arg1;
- (void)setDateSentTimeIntervalSince1970:(double)arg1;
- (void)setDocumentID:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setGenerationNumber:(unsigned long long)arg1;
- (void)setListIDHash:(id)arg1;
- (void)setMessageData:(id)arg1 isPartial:(bool)arg2;
- (void)setMessageIDHash:(long long)arg1;
- (void)setMessageIDHeader:(id)arg1;
- (void)setMessageInfo:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceivedTimeIntervalSince1970:(double)arg6 dateSentTimeIntervalSince1970:(double)arg7 messageIDHash:(long long)arg8 conversationID:(long long)arg9 summary:(id)arg10;
- (void)setMessagePropertiesFromMessage:(id)arg1;
- (void)setMessageStore:(id)arg1;
- (void)setMessageURL:(id)arg1;
- (void)setNumberOfAttachments:(unsigned long long)arg1;
- (void)setNumberOfAttachments:(unsigned long long)arg1 isSigned:(bool)arg2 isEncrypted:(bool)arg3;
- (void)setParentPart:(id)arg1;
- (void)setPreferredEncoding:(unsigned int)arg1;
- (void)setSender:(id)arg1;
- (void)setStrongParentPart:(bool)arg1;
- (void)setStrongParentPartReference:(id)arg1;
- (void)setSubject:(id)arg1;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 summary:(id)arg8;
- (void)setSubject:(id)arg1 to:(id)arg2 cc:(id)arg3 bcc:(id)arg4 sender:(id)arg5 dateReceived:(double)arg6 dateSent:(double)arg7 summary:(id)arg8 withOptions:(unsigned int)arg9;
- (void)setTo:(id)arg1;
- (bool)strongParentPart;
- (id)strongParentPartReference;
- (id)subject;
- (id)subjectIfAvailable;
- (id)summary;
- (id)to;
- (id)toIfCached;
- (unsigned int)uid;
- (id)uniqueArray:(id)arg1 withStore:(id)arg2;
- (bool)updateSubjectFromEncryptedContent;

@end
