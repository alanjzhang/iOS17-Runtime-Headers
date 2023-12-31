/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerDefinitionGroup : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *definitionEntries;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *origin;
@property (nonatomic, copy) NSString *partOfSpeech;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *synonyms;

+ (id)definitionGroup;
+ (id)definitionGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)definitionEntries;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)origin;
- (id)partOfSpeech;
- (void)setDefinitionEntries:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setPartOfSpeech:(id)arg1;
- (void)setSynonyms:(id)arg1;
- (id)synonyms;

@end
