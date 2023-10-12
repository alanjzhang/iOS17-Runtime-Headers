/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSQRProtoGetMaterialRequest : PBRequest <NSCopying> {
    NSMutableArray * _materialOwners;
}

@property (nonatomic, retain) NSMutableArray *materialOwners;

+ (Class)materialOwnersType;

- (void).cxx_destruct;
- (void)addMaterialOwners:(id)arg1;
- (void)clearMaterialOwners;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)materialOwners;
- (id)materialOwnersAtIndex:(unsigned long long)arg1;
- (unsigned long long)materialOwnersCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setMaterialOwners:(id)arg1;
- (void)writeTo:(id)arg1;

@end
