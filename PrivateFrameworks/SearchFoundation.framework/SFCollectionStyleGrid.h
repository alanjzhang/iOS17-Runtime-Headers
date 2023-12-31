/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCollectionStyleGrid : SFCollectionStyle <NSCopying, NSSecureCoding, SFCollectionStyleGrid> {
    struct { 
        unsigned int numberOfColumns : 1; 
    }  _has;
    unsigned long long  _numberOfColumns;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long initiallyVisibleCardSectionCount;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long numberOfColumns;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasNumberOfColumns;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)numberOfColumns;
- (void)setNumberOfColumns:(unsigned long long)arg1;

// SFCollectionStyleGrid (ProtobufInitializer)

- (id)initWithProtobuf:(id)arg1;

@end
