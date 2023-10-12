/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFShowPhotosOneUpViewCommand : SFCommand <NSCopying, NSSecureCoding, SFShowPhotosOneUpViewCommand> {
    NSArray * _matchedPeople;
    SFPerson * _matchedPerson;
    NSArray * _matchedScenes;
    SFPunchout * _photoFilePunchout;
    SFPhotosLibraryImage * _photosLibraryImage;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *matchedPeople;
@property (nonatomic, retain) SFPerson *matchedPerson;
@property (nonatomic, copy) NSArray *matchedScenes;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (nonatomic, retain) SFPunchout *photoFilePunchout;
@property (nonatomic, retain) SFPhotosLibraryImage *photosLibraryImage;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)matchedPeople;
- (id)matchedPerson;
- (id)matchedScenes;
- (id)photoFilePunchout;
- (id)photosLibraryImage;
- (void)setMatchedPeople:(id)arg1;
- (void)setMatchedPerson:(id)arg1;
- (void)setMatchedScenes:(id)arg1;
- (void)setPhotoFilePunchout:(id)arg1;
- (void)setPhotosLibraryImage:(id)arg1;

// SFShowPhotosOneUpViewCommand (ProtobufInitializer)

- (id)initWithProtobuf:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

// SFShowPhotosOneUpViewCommand (_CPCommandType)

- (int)_cpCommandType;

@end
