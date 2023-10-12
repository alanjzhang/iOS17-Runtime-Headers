/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSQRProtoUnAllocBindResponse : PBCodable <NSCopying> {
    NSData * _reportingDataBlob;
}

@property (nonatomic, readonly) bool hasReportingDataBlob;
@property (nonatomic, retain) NSData *reportingDataBlob;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReportingDataBlob;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reportingDataBlob;
- (void)setReportingDataBlob:(id)arg1;
- (void)writeTo:(id)arg1;

@end
