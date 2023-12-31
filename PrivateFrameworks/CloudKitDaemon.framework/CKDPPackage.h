/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPPackage : PBCodable <NSCopying> {
    CKDPAsset * _manifest;
    NSMutableArray * _sections;
}

@property (nonatomic, readonly) bool hasManifest;
@property (nonatomic, retain) CKDPAsset *manifest;
@property (nonatomic, retain) NSMutableArray *sections;

+ (Class)sectionsType;

- (void).cxx_destruct;
- (void)addSections:(id)arg1;
- (void)clearSections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasManifest;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)manifest;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sections;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)setManifest:(id)arg1;
- (void)setSections:(id)arg1;
- (void)writeTo:(id)arg1;

@end
