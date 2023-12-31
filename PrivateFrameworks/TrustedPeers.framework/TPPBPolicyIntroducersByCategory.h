/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

@interface TPPBPolicyIntroducersByCategory : PBCodable <NSCopying> {
    NSString * _category;
    NSMutableArray * _introducers;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) bool hasCategory;
@property (nonatomic, retain) NSMutableArray *introducers;

+ (Class)introducersType;

- (void).cxx_destruct;
- (void)addIntroducers:(id)arg1;
- (id)category;
- (void)clearIntroducers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCategory;
- (unsigned long long)hash;
- (id)introducers;
- (id)introducersAtIndex:(unsigned long long)arg1;
- (unsigned long long)introducersCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setIntroducers:(id)arg1;
- (void)writeTo:(id)arg1;

// TPPBPolicyIntroducersByCategory (SimpleConstructor)

+ (id)TPPBPolicyIntroducersByCategoryWithCategory:(id)arg1 introducers:(id)arg2;

@end
