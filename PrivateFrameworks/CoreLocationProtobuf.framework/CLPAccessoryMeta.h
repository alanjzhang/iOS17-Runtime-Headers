/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
 */

@interface CLPAccessoryMeta : PBCodable <NSCopying> {
    NSString * _make;
    NSString * _model;
    NSString * _version;
}

@property (nonatomic, readonly) bool hasMake;
@property (nonatomic, readonly) bool hasModel;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSString *make;
@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMake;
- (bool)hasModel;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)make;
- (void)mergeFrom:(id)arg1;
- (id)model;
- (bool)readFrom:(id)arg1;
- (void)setMake:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;
- (void)writeTo:(id)arg1;

@end
