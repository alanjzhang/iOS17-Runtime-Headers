/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

@interface TPPBDictionaryMatchingRuleFieldRegexMatch : PBCodable <NSCopying> {
    NSString * _fieldName;
    NSString * _regex;
}

@property (nonatomic, retain) NSString *fieldName;
@property (nonatomic, readonly) bool hasFieldName;
@property (nonatomic, readonly) bool hasRegex;
@property (nonatomic, retain) NSString *regex;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldName;
- (bool)hasFieldName;
- (bool)hasRegex;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)regex;
- (void)setFieldName:(id)arg1;
- (void)setRegex:(id)arg1;
- (void)writeTo:(id)arg1;

// TPPBDictionaryMatchingRuleFieldRegexMatch (TPPBDictionaryMatchingRules)

- (bool)matches:(id)arg1 error:(id*)arg2;

@end
