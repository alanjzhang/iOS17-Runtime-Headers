/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBLeadingTrailingCardSection : PBCodable <NSSecureCoding, _SFPBLeadingTrailingCardSection> {
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSArray * _leadingCardSections;
    _SFPBGraphicalFloat * _leadingToTrailingRatio;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    NSArray * _trailingCardSections;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *leadingCardSections;
@property (nonatomic, retain) _SFPBGraphicalFloat *leadingToTrailingRatio;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *trailingCardSections;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addLeadingCardSections:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (void)addTrailingCardSections:(id)arg1;
- (id)backgroundColor;
- (bool)canBeHidden;
- (void)clearLeadingCardSections;
- (void)clearPunchoutOptions;
- (void)clearTrailingCardSections;
- (id)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)leadingCardSections;
- (id)leadingCardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)leadingCardSectionsCount;
- (id)leadingToTrailingRatio;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setLeadingCardSections:(id)arg1;
- (void)setLeadingToTrailingRatio:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTrailingCardSections:(id)arg1;
- (void)setType:(id)arg1;
- (id)trailingCardSections;
- (id)trailingCardSectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)trailingCardSectionsCount;
- (id)type;
- (void)writeTo:(id)arg1;

// _SFPBLeadingTrailingCardSection (FacadeInitializer)

- (id)initWithFacade:(id)arg1;

@end