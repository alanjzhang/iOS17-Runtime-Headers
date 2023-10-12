/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableStaticSyncChangeSet : PBCodable <NSCopying> {
    NSMutableArray * _changes;
}

@property (nonatomic, retain) NSMutableArray *changes;

+ (Class)changesType;

- (void).cxx_destruct;
- (void)addChanges:(id)arg1;
- (id)changes;
- (id)changesAtIndex:(unsigned long long)arg1;
- (unsigned long long)changesCount;
- (void)clearChanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChanges:(id)arg1;
- (void)writeTo:(id)arg1;

// HDCodableStaticSyncChangeSet (HDStaticSyncTask)

+ (id)changeSetWithChanges:(id)arg1;

@end
