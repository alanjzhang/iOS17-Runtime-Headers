/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFClearProactiveCategoryCommand : SFCommand <NSCopying, NSSecureCoding, SFClearProactiveCategoryCommand> {
    int  _category;
    struct { 
        unsigned int category : 1; 
        unsigned int shouldClearWholeSection : 1; 
    }  _has;
    NSString * _proactiveIdentifier;
    bool  _shouldClearWholeSection;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic) int category;
@property (nonatomic, copy) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (nonatomic, copy) NSString *proactiveIdentifier;
@property (nonatomic) bool shouldClearWholeSection;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCategory;
- (bool)hasShouldClearWholeSection;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)proactiveIdentifier;
- (void)setCategory:(int)arg1;
- (void)setProactiveIdentifier:(id)arg1;
- (void)setShouldClearWholeSection:(bool)arg1;
- (bool)shouldClearWholeSection;

// SFClearProactiveCategoryCommand (ProtobufInitializer)

- (id)initWithProtobuf:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

// SFClearProactiveCategoryCommand (_CPCommandType)

- (int)_cpCommandType;

@end
