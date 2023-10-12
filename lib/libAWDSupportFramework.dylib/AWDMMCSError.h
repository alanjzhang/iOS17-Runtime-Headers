/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDMMCSError : PBCodable <NSCopying> {
    int  _code;
    NSString * _domain;
    struct { 
        unsigned int code : 1; 
    }  _has;
    NSMutableArray * _underlyingErrors;
}

@property (nonatomic) int code;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic) bool hasCode;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic, retain) NSMutableArray *underlyingErrors;

+ (Class)underlyingErrorsType;

- (void)addUnderlyingErrors:(id)arg1;
- (void)clearUnderlyingErrors;
- (int)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domain;
- (bool)hasCode;
- (bool)hasDomain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(int)arg1;
- (void)setDomain:(id)arg1;
- (void)setHasCode:(bool)arg1;
- (void)setUnderlyingErrors:(id)arg1;
- (id)underlyingErrors;
- (id)underlyingErrorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)underlyingErrorsCount;
- (void)writeTo:(id)arg1;

@end
