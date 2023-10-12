/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABNamePredicate : ABPredicate {
    void * _addressBook;
    bool  _generateExceprts;
    NSArray * _groups;
    bool  _matchPersonOrCompanyNamesExclusively;
    bool  _matchPreferredName;
    bool  _matchWholeWords;
    NSString * _name;
    NSArray * _scopedContactIdentifiers;
    NSArray * _sources;
    struct __CFArray { } * _tokenizationSortKeys;
    void * _tokenizations;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic) void*addressBook;
@property (nonatomic) bool generateExceprts;
@property (nonatomic) void*group;
@property (nonatomic, retain) NSArray *groups;
@property (nonatomic) bool matchPersonOrCompanyNamesExclusively;
@property (nonatomic) bool matchPreferredName;
@property (nonatomic) bool matchWholeWords;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSArray *scopedContactIdentifiers;
@property (nonatomic) void*source;
@property (nonatomic, retain) NSArray *sources;

- (id)_matchClauseForColumns:(id)arg1 requiringAllTerms:(bool)arg2;
- (id)_personNameKeys;
- (id)_personNonNameKeys;
- (void)ab_bindJoinClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 withBindingOffset:(int*)arg2 predicateIdentifier:(int)arg3;
- (id)ab_metadataForMatchingRow:(struct CPSqliteStatement { struct CPSqliteConnection {} *x1; struct sqlite3_stmt {} *x2; double x3; bool x4; }*)arg1 columnOffset:(int)arg2;
- (id)accountIdentifier;
- (void*)addressBook;
- (void)dealloc;
- (id)emphasizedExcerptStringForMatchString:(id)arg1;
- (bool)generateExceprts;
- (void*)group;
- (id)groups;
- (id)init;
- (bool)isValid;
- (bool)matchPersonOrCompanyNamesExclusively;
- (bool)matchPreferredName;
- (bool)matchWholeWords;
- (id)name;
- (id)predicateFormat;
- (id)queryJoinsInCompound:(bool)arg1 predicateIdentifier:(int)arg2;
- (id)queryRankStringForPredicateIdentifier:(int)arg1;
- (id)querySelectPropertiesForPredicateIdentifier:(int)arg1;
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;
- (id)scopedContactIdentifiers;
- (void)setAccountIdentifier:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setGenerateExceprts:(bool)arg1;
- (void)setGroup:(void*)arg1;
- (void)setGroups:(id)arg1;
- (void)setMatchPersonOrCompanyNamesExclusively:(bool)arg1;
- (void)setMatchPreferredName:(bool)arg1;
- (void)setMatchWholeWords:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setScopedContactIdentifiers:(id)arg1;
- (void)setSource:(void*)arg1;
- (void)setSources:(id)arg1;
- (void*)source;
- (id)sources;
- (void*)tokenizations;

@end
