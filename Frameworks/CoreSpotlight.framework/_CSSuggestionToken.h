/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface _CSSuggestionToken : NSObject <NSCopying, NSSecureCoding> {
    double  _age;
    long long  _bundleType;
    NSString * _displayString;
    NSAttributedString * _displayText;
    NSMutableDictionary * _features;
    NSArray * _filterQueries;
    bool  _hasRecentActivity;
    bool  _hasUsedDate;
    long long  _internalType;
    bool  _isMailIntent;
    bool  _isMegadomeToken;
    CSItemSummary * _itemSummary;
    NSArray * _localCompletionAttributes;
    NSArray * _localCompletionAttributesStrings;
    long long  _localCompletionType;
    double  _megadomeCompositeScore;
    NSDictionary * _nlpCompletionAttributes;
    NSString * _nlpCompletionType;
    long long  _nlpKind;
    NSString * _personIdentifier;
    bool  _personIsImportant;
    bool  _personIsMailingList;
    bool  _personIsUser;
    CSSearchableItem * _personItem;
    bool  _personNameIsMissing;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _replacementRange;
    NSArray * _scopes;
    NSNumber * _score;
    NSString * _searchString;
    unsigned long long  _selectedScope;
    bool  _shouldDisplayNameAndEmail;
    NSString * _spotlightQueryString;
    NSAttributedString * _suggestionDisplayText;
    int  _suggestionTokenDataSources;
    NSArray * _tokenScopes;
    long long  _type;
}

@property (nonatomic, readonly) NSAttributedString *displayText;
@property (nonatomic, retain) NSDictionary *features;
@property (nonatomic, retain) NSArray *filterQueries;
@property (nonatomic, retain) CSItemSummary *itemSummary;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } replacementRange;
@property (nonatomic, readonly) NSArray *scopes;
@property (nonatomic, retain) NSNumber *score;
@property (nonatomic) unsigned long long selectedScope;
@property (nonatomic, retain) NSArray *tokenScopes;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)age;
- (long long)bundleType;
- (void)commonInitWithUserString:(id)arg1 displayString:(id)arg2 score:(id)arg3;
- (long long)compareByRank:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)displayString;
- (id)displayText;
- (void)encodeWithCoder:(id)arg1;
- (id)features;
- (id)filterQueries;
- (bool)hasRecentActivity;
- (bool)hasUsedDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserString:(id)arg1 displayString:(id)arg2;
- (id)initWithUserString:(id)arg1 displayString:(id)arg2 attributeValues:(id)arg3 attributeStrings:(id)arg4 options:(id)arg5;
- (id)initWithUserString:(id)arg1 displayString:(id)arg2 score:(id)arg3;
- (id)initWithUserString:(id)arg1 itemResult:(id)arg2;
- (id)initWithUserString:(id)arg1 queryString:(id)arg2;
- (id)initWithUserString:(id)arg1 scopes:(id)arg2 selectedIndex:(long long)arg3 displayString:(id)arg4;
- (id)initWithUserString:(id)arg1 suggestionResult:(id)arg2;
- (id)initWithUserString:(id)arg1 suggestionTokenResult:(id)arg2;
- (id)initWithUserString:(id)arg1 tokenScopes:(id)arg2 selectedIndex:(long long)arg3 displayString:(id)arg4 internalType:(long long)arg5;
- (long long)internalType;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToToken:(id)arg1;
- (bool)isImportant;
- (bool)isMailingList;
- (bool)isMegadomeToken;
- (bool)isMessageWithAttachmentsToken;
- (bool)isUser;
- (bool)isValid;
- (id)itemSummary;
- (double)lastUsedDate;
- (long long)localCompare:(id)arg1;
- (id)localCompletionAttributeStrings;
- (id)localCompletionAttributes;
- (id)localCompletionFeatures;
- (long long)localCompletionType;
- (double)megadomeCompositeScore;
- (void)mergeTokenAttributes:(id)arg1;
- (void)mergeTokenScopesAndSpotlightQueryString:(id)arg1;
- (bool)nameAndEmailRenderableWithName:(id)arg1 emails:(id)arg2;
- (long long)nlpCompare:(id)arg1;
- (id)nlpCompletionAttributes;
- (id)nlpCompletionCategories;
- (id)nlpCompletionType;
- (long long)peopleCompare:(id)arg1;
- (id)personItem;
- (id)queryString;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })replacementRange;
- (id)scopes;
- (id)score;
- (id)searchString;
- (unsigned long long)selectedScope;
- (void)setAge:(double)arg1;
- (void)setBundleType:(long long)arg1;
- (void)setFeatures:(id)arg1;
- (void)setFilterQueries:(id)arg1;
- (void)setHasRecentActivity:(bool)arg1;
- (void)setHasUsedDate:(bool)arg1;
- (void)setInternalType:(long long)arg1;
- (void)setIsMailingList:(bool)arg1;
- (void)setIsMegadomeToken:(bool)arg1;
- (void)setItemSummary:(id)arg1;
- (void)setMegadomeCompositeScore:(double)arg1;
- (void)setScore:(id)arg1;
- (void)setSelectedScope:(unsigned long long)arg1;
- (void)setSuggestionDisplayText:(id)arg1;
- (void)setSuggestionTokenDataSources:(int)arg1;
- (void)setTokenScopes:(id)arg1;
- (void)setType:(long long)arg1;
- (bool)shouldDisplayNameAndEmail;
- (id)spotlightQueryString;
- (id)suggestionDisplayText;
- (int)suggestionTokenDataSources;
- (id)tokenDisplayString;
- (long long)tokenKind;
- (id)tokenQueryString;
- (id)tokenScopes;
- (id)tokenText;
- (long long)type;
- (void)updateItemSummary;
- (void)updateNameAndEmailDisplayState;
- (void)updateReplacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)updateScopeSelection:(unsigned long long)arg1;
- (void)updateScopes:(id)arg1;
- (void)updateSearchString:(id)arg1;
- (void)updateTokenText:(id)arg1;

@end
