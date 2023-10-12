/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBRunVoiceShortcutCommand : PBCodable <NSSecureCoding, _SFPBRunVoiceShortcutCommand> {
    NSString * _applicationBundleIdentifier;
    NSString * _voiceShortcutIdentifier;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *voiceShortcutIdentifier;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setVoiceShortcutIdentifier:(id)arg1;
- (id)voiceShortcutIdentifier;
- (void)writeTo:(id)arg1;

// _SFPBRunVoiceShortcutCommand (FacadeInitializer)

- (id)initWithFacade:(id)arg1;

@end
