/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBSearchSuggestion : PBCodable <NSSecureCoding, _SFPBSearchSuggestion> {
    NSString * _bundleIdentifier;
    NSString * _detailText;
    NSArray * _duplicateSuggestions;
    NSString * _fbr;
    NSString * _identifier;
    bool  _previouslyEngaged;
    NSString * _query;
    NSString * _scopedSearchApplicationBundleIdentifier;
    _SFPBGraphicalFloat * _score;
    NSDictionary * _serverFeatures;
    NSString * _suggestion;
    NSString * _topicIdentifier;
    int  _type;
    NSString * _utteranceText;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, copy) NSArray *duplicateSuggestions;
@property (nonatomic, copy) NSString *fbr;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) bool previouslyEngaged;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSString *scopedSearchApplicationBundleIdentifier;
@property (nonatomic, retain) _SFPBGraphicalFloat *score;
@property (nonatomic, copy) NSDictionary *serverFeatures;
@property (nonatomic, copy) NSString *suggestion;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *topicIdentifier;
@property (nonatomic) int type;
@property (nonatomic, copy) NSString *utteranceText;

- (void).cxx_destruct;
- (void)addDuplicateSuggestions:(id)arg1;
- (id)bundleIdentifier;
- (void)clearDuplicateSuggestions;
- (id)detailText;
- (id)dictionaryRepresentation;
- (id)duplicateSuggestions;
- (id)duplicateSuggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)duplicateSuggestionsCount;
- (id)fbr;
- (bool)getServerFeatures:(double*)arg1 forKey:(id)arg2;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)previouslyEngaged;
- (id)query;
- (bool)readFrom:(id)arg1;
- (id)scopedSearchApplicationBundleIdentifier;
- (id)score;
- (id)serverFeatures;
- (void)setBundleIdentifier:(id)arg1;
- (void)setDetailText:(id)arg1;
- (void)setDuplicateSuggestions:(id)arg1;
- (void)setFbr:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPreviouslyEngaged:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setScopedSearchApplicationBundleIdentifier:(id)arg1;
- (void)setScore:(id)arg1;
- (void)setServerFeatures:(id)arg1;
- (void)setServerFeatures:(double)arg1 forKey:(id)arg2;
- (void)setSuggestion:(id)arg1;
- (void)setTopicIdentifier:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUtteranceText:(id)arg1;
- (id)suggestion;
- (id)topicIdentifier;
- (int)type;
- (id)utteranceText;
- (void)writeTo:(id)arg1;

// _SFPBSearchSuggestion (FacadeInitializer)

- (id)initWithFacade:(id)arg1;

@end
