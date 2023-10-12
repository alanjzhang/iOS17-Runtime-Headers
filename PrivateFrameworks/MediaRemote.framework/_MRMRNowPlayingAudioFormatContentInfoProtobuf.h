/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRMRNowPlayingAudioFormatContentInfoProtobuf : PBCodable <NSCopying> {
    unsigned long long  _audioFormat;
    unsigned long long  _audioSessionID;
    NSString * _bestAvailableContent;
    NSString * _bundleID;
    unsigned long long  _channelCount;
    bool  _eligibleForSpatialization;
    struct { 
        unsigned int audioFormat : 1; 
        unsigned int audioSessionID : 1; 
        unsigned int channelCount : 1; 
        unsigned int intendedSpatialExperience : 1; 
        unsigned int pid : 1; 
        unsigned int resolvedSpatialExperience : 1; 
        unsigned int eligibleForSpatialization : 1; 
        unsigned int spatialized : 1; 
    }  _has;
    long long  _intendedSpatialExperience;
    unsigned long long  _pid;
    long long  _resolvedSpatialExperience;
    bool  _spatialized;
}

@property (nonatomic) unsigned long long audioFormat;
@property (nonatomic) unsigned long long audioSessionID;
@property (nonatomic, retain) NSString *bestAvailableContent;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic) unsigned long long channelCount;
@property (nonatomic) bool eligibleForSpatialization;
@property (nonatomic) bool hasAudioFormat;
@property (nonatomic) bool hasAudioSessionID;
@property (nonatomic, readonly) bool hasBestAvailableContent;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasChannelCount;
@property (nonatomic) bool hasEligibleForSpatialization;
@property (nonatomic) bool hasIntendedSpatialExperience;
@property (nonatomic) bool hasPid;
@property (nonatomic) bool hasResolvedSpatialExperience;
@property (nonatomic) bool hasSpatialized;
@property (nonatomic) long long intendedSpatialExperience;
@property (nonatomic) unsigned long long pid;
@property (nonatomic) long long resolvedSpatialExperience;
@property (nonatomic) bool spatialized;

- (void).cxx_destruct;
- (unsigned long long)audioFormat;
- (unsigned long long)audioSessionID;
- (id)bestAvailableContent;
- (id)bundleID;
- (unsigned long long)channelCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)eligibleForSpatialization;
- (bool)hasAudioFormat;
- (bool)hasAudioSessionID;
- (bool)hasBestAvailableContent;
- (bool)hasBundleID;
- (bool)hasChannelCount;
- (bool)hasEligibleForSpatialization;
- (bool)hasIntendedSpatialExperience;
- (bool)hasPid;
- (bool)hasResolvedSpatialExperience;
- (bool)hasSpatialized;
- (unsigned long long)hash;
- (long long)intendedSpatialExperience;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)pid;
- (bool)readFrom:(id)arg1;
- (long long)resolvedSpatialExperience;
- (void)setAudioFormat:(unsigned long long)arg1;
- (void)setAudioSessionID:(unsigned long long)arg1;
- (void)setBestAvailableContent:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setChannelCount:(unsigned long long)arg1;
- (void)setEligibleForSpatialization:(bool)arg1;
- (void)setHasAudioFormat:(bool)arg1;
- (void)setHasAudioSessionID:(bool)arg1;
- (void)setHasChannelCount:(bool)arg1;
- (void)setHasEligibleForSpatialization:(bool)arg1;
- (void)setHasIntendedSpatialExperience:(bool)arg1;
- (void)setHasPid:(bool)arg1;
- (void)setHasResolvedSpatialExperience:(bool)arg1;
- (void)setHasSpatialized:(bool)arg1;
- (void)setIntendedSpatialExperience:(long long)arg1;
- (void)setPid:(unsigned long long)arg1;
- (void)setResolvedSpatialExperience:(long long)arg1;
- (void)setSpatialized:(bool)arg1;
- (bool)spatialized;
- (void)writeTo:(id)arg1;

@end
