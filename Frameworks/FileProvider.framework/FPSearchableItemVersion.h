/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPSearchableItemVersion : PBCodable <NSCopying> {
    NSData * _contentVersion;
    NSData * _metadataVersion;
}

@property (nonatomic, retain) NSData *contentVersion;
@property (nonatomic, readonly) bool hasContentVersion;
@property (nonatomic, readonly) bool hasMetadataVersion;
@property (nonatomic, retain) NSData *metadataVersion;

- (void).cxx_destruct;
- (id)contentVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContentVersion;
- (bool)hasMetadataVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadataVersion;
- (bool)readFrom:(id)arg1;
- (void)setContentVersion:(id)arg1;
- (void)setMetadataVersion:(id)arg1;
- (void)writeTo:(id)arg1;

// FPSearchableItemVersion (Helpers)

+ (id)stringFromVersion:(id)arg1;
+ (id)versionFromString:(id)arg1;

@end
