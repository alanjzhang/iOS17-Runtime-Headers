/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBCreateContactCommand : PBCodable <NSSecureCoding, _SFPBCreateContactCommand> {
    bool  _addToExistingContact;
    _SFPBPerson * _person;
}

@property (nonatomic) bool addToExistingContact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBPerson *person;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)addToExistingContact;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)person;
- (bool)readFrom:(id)arg1;
- (void)setAddToExistingContact:(bool)arg1;
- (void)setPerson:(id)arg1;
- (void)writeTo:(id)arg1;

// _SFPBCreateContactCommand (FacadeInitializer)

- (id)initWithFacade:(id)arg1;

@end
