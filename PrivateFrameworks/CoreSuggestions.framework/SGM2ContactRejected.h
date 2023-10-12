/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGM2ContactRejected : PBCodable <NSCopying> {
    int  _app;
    int  _extracted;
    unsigned int  _extractionModelVersion;
    struct { 
        unsigned int app : 1; 
        unsigned int extracted : 1; 
        unsigned int extractionModelVersion : 1; 
        unsigned int type : 1; 
        unsigned int uiType : 1; 
        unsigned int selfId : 1; 
    }  _has;
    NSString * _key;
    bool  _selfId;
    int  _type;
    int  _uiType;
}

@property (nonatomic) int app;
@property (nonatomic) int extracted;
@property (nonatomic) unsigned int extractionModelVersion;
@property (nonatomic) bool hasApp;
@property (nonatomic) bool hasExtracted;
@property (nonatomic) bool hasExtractionModelVersion;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasSelfId;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasUiType;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) bool selfId;
@property (nonatomic) int type;
@property (nonatomic) int uiType;

- (void).cxx_destruct;
- (int)StringAsApp:(id)arg1;
- (int)StringAsExtracted:(id)arg1;
- (int)StringAsType:(id)arg1;
- (int)StringAsUiType:(id)arg1;
- (int)app;
- (id)appAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)extracted;
- (id)extractedAsString:(int)arg1;
- (unsigned int)extractionModelVersion;
- (bool)hasApp;
- (bool)hasExtracted;
- (bool)hasExtractionModelVersion;
- (bool)hasKey;
- (bool)hasSelfId;
- (bool)hasType;
- (bool)hasUiType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)selfId;
- (void)setApp:(int)arg1;
- (void)setExtracted:(int)arg1;
- (void)setExtractionModelVersion:(unsigned int)arg1;
- (void)setHasApp:(bool)arg1;
- (void)setHasExtracted:(bool)arg1;
- (void)setHasExtractionModelVersion:(bool)arg1;
- (void)setHasSelfId:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUiType:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSelfId:(bool)arg1;
- (void)setType:(int)arg1;
- (void)setUiType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (int)uiType;
- (id)uiTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
