/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodablePinnedContentState : PBCodable <NSCopying> {
    long long  _epoch;
    struct { 
        unsigned int epoch : 1; 
    }  _has;
    NSData * _pinnedContentStateData;
}

@property (nonatomic) long long epoch;
@property (nonatomic) bool hasEpoch;
@property (nonatomic, readonly) bool hasPinnedContentStateData;
@property (nonatomic, retain) NSData *pinnedContentStateData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)epoch;
- (bool)hasEpoch;
- (bool)hasPinnedContentStateData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pinnedContentStateData;
- (bool)readFrom:(id)arg1;
- (void)setEpoch:(long long)arg1;
- (void)setHasEpoch:(bool)arg1;
- (void)setPinnedContentStateData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
