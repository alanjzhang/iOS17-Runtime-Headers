/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INIntentCodablePhrase : NSObject <INCodableCoding, NSCopying, NSSecureCoding> {
    INIntentCodableDescription * _codableDescription;
    NSString * _phrase;
    NSString * _phraseLocID;
    NSString * _pronunciationHint;
    NSString * _pronunciationHintLocID;
}

@property (setter=_setCodableDescription:, nonatomic) INIntentCodableDescription *_codableDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedPhrase;
@property (nonatomic, readonly, copy) NSString *localizedPronunciationHint;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, copy) NSString *phraseLocID;
@property (nonatomic, copy) NSString *pronunciationHint;
@property (nonatomic, copy) NSString *pronunciationHintLocID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_codableDescription;
- (void)_setCodableDescription:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithLocalizer:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedPhrase;
- (id)localizedPhraseForLanguage:(id)arg1;
- (id)localizedPhraseWithLocalizer:(id)arg1;
- (id)localizedPronunciationHint;
- (id)localizedPronunciationHintForLanguage:(id)arg1;
- (id)localizedPronunciationHintWithLocalizer:(id)arg1;
- (id)phrase;
- (id)phraseLocID;
- (id)pronunciationHint;
- (id)pronunciationHintLocID;
- (void)setPhrase:(id)arg1;
- (void)setPhraseLocID:(id)arg1;
- (void)setPronunciationHint:(id)arg1;
- (void)setPronunciationHintLocID:(id)arg1;
- (void)updateWithDictionary:(id)arg1;

// INIntentCodablePhrase (__INIntentCodablePhraseINIntentPhrasePhrase)

- (id)__INCodableDescriptionPhraseKey;

// INIntentCodablePhrase (__INIntentCodablePhraseINIntentPhrasePhraseID)

- (id)__INCodableDescriptionPhraseIDKey;

// INIntentCodablePhrase (__INIntentCodablePhraseINIntentPhrasePronunciationHint)

- (id)__INCodableDescriptionPronunciationHintKey;

// INIntentCodablePhrase (__INIntentCodablePhraseINIntentPhrasePronunciationHintID)

- (id)__INCodableDescriptionPronunciationHintIDKey;

@end
