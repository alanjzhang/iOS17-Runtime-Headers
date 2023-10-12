/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDCoreRoutineModelClusterMovementInstance : PBCodable <NSCopying> {
    unsigned long long  _distance;
    struct { 
        unsigned int distance : 1; 
    }  _has;
}

@property (nonatomic) unsigned long long distance;
@property (nonatomic) bool hasDistance;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)distance;
- (bool)hasDistance;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDistance:(unsigned long long)arg1;
- (void)setHasDistance:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
