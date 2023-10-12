/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBHeroCardSection : PBCodable <NSSecureCoding, _SFPBHeroCardSection> {
    _SFPBColor * _backgroundColor;
    NSArray * _buttonItems;
    bool  _canBeHidden;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    _SFPBImage * _image;
    int  _imageAlign;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    _SFPBRichText * _subtitle;
    _SFPBRichText * _title;
    NSString * _type;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic, copy) NSArray *buttonItems;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBImage *image;
@property (nonatomic) int imageAlign;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (nonatomic, retain) _SFPBRichText *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBRichText *title;
@property (nonatomic, copy) NSString *type;

- (void).cxx_destruct;
- (void)addButtonItems:(id)arg1;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (id)buttonItems;
- (id)buttonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buttonItemsCount;
- (bool)canBeHidden;
- (void)clearButtonItems;
- (void)clearPunchoutOptions;
- (id)dictionaryRepresentation;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (id)image;
- (int)imageAlign;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setButtonItems:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageAlign:(int)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (id)subtitle;
- (id)title;
- (id)type;
- (void)writeTo:(id)arg1;

// _SFPBHeroCardSection (FacadeInitializer)

- (id)initWithFacade:(id)arg1;

@end
