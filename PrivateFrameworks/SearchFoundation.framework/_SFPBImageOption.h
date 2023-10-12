/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBImageOption : PBCodable <NSSecureCoding, _SFPBImageOption> {
    NSString * _defaultValue;
    NSString * _name;
    _SFPBStringDictionary * _options;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSString *defaultValue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) _SFPBStringDictionary *options;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)defaultValue;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (id)options;
- (bool)readFrom:(id)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)writeTo:(id)arg1;

// _SFPBImageOption (FacadeInitializer)

- (id)initWithFacade:(id)arg1;

@end
