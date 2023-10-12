/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPArchiveRecordsRequest : PBRequest <NSCopying> {
    NSMutableArray * _idsToArchives;
}

@property (nonatomic, retain) NSMutableArray *idsToArchives;

+ (Class)idsToArchiveType;
+ (id)options;

- (void).cxx_destruct;
- (void)addIdsToArchive:(id)arg1;
- (void)clearIdsToArchives;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)idsToArchiveAtIndex:(unsigned long long)arg1;
- (id)idsToArchives;
- (unsigned long long)idsToArchivesCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setIdsToArchives:(id)arg1;
- (void)writeTo:(id)arg1;

@end
