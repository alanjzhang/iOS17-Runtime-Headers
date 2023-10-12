/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore
 */

@interface BRFieldContentSignature : PBCodable <BRFieldVersionSignature, NSCopying> {
    NSData * _contentSignature;
    struct { 
        unsigned int size : 1; 
    }  _has;
    NSString * _oldVersionIdentifier;
    long long  _size;
    NSString * _versionIdentifier;
}

@property (nonatomic, retain) NSData *contentSignature;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasContentSignature;
@property (nonatomic, readonly) bool hasOldVersionIdentifier;
@property (nonatomic) bool hasSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *oldVersionIdentifier;
@property (nonatomic, retain) NSString *oldVersionIdentifier;
@property (nonatomic) long long size;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *versionIdentifier;
@property (nonatomic, retain) NSString *versionIdentifier;

- (void).cxx_destruct;
- (id)contentSignature;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContentSignature;
- (bool)hasOldVersionIdentifier;
- (bool)hasSize;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)oldVersionIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setContentSignature:(id)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setOldVersionIdentifier:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setVersionIdentifier:(id)arg1;
- (long long)size;
- (id)versionIdentifier;
- (void)writeTo:(id)arg1;

// BRFieldContentSignature (BRAdditions)

- (unsigned long long)_localEditCounter;
- (id)_oldVersionEtag;
- (unsigned long long)_oldVersionLocalEditCounter;
- (bool)containsLocalEdits;
- (bool)contentDiffersWithSignature:(id)arg1;
- (id)description;
- (id)etag;
- (bool)hasOnlyLocalEditsOnTopOfSignature:(id)arg1;
- (bool)hasPopulatedVersionAndSignature;
- (bool)isEquivalentToSignature:(id)arg1;
- (bool)isPendingSignature;

// BRFieldContentSignature (BRCItemAdditions)

- (id)initWithLocalVersion:(id)arg1;
- (id)initWithLoserEtag:(id)arg1;
- (bool)isPackage;

@end