/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

@interface TPPBDispositionEntry : PBCodable <NSCopying> {
    TPPBDisposition * _disposition;
    NSString * _peerID;
}

@property (nonatomic, retain) TPPBDisposition *disposition;
@property (nonatomic, readonly) bool hasDisposition;
@property (nonatomic, readonly) bool hasPeerID;
@property (nonatomic, retain) NSString *peerID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)disposition;
- (bool)hasDisposition;
- (bool)hasPeerID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerID;
- (bool)readFrom:(id)arg1;
- (void)setDisposition:(id)arg1;
- (void)setPeerID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
