/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPSearchableItemError : PBCodable <NSCopying> {
    long long  _code;
    NSString * _customDomain;
    int  _domain;
}

@property (nonatomic) long long code;
@property (nonatomic, retain) NSString *customDomain;
@property (nonatomic) int domain;
@property (nonatomic, readonly) bool hasCustomDomain;

- (void).cxx_destruct;
- (int)StringAsDomain:(id)arg1;
- (long long)code;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customDomain;
- (id)description;
- (id)dictionaryRepresentation;
- (int)domain;
- (id)domainAsString:(int)arg1;
- (bool)hasCustomDomain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCode:(long long)arg1;
- (void)setCustomDomain:(id)arg1;
- (void)setDomain:(int)arg1;
- (void)writeTo:(id)arg1;

// FPSearchableItemError (Helpers)

+ (id)errorFromString:(id)arg1;
+ (id)stringFromError:(id)arg1;

@end
