/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBSocialMediaPostCardSection : PBCodable <NSSecureCoding, _SFPBSocialMediaPostCardSection> {
    _SFPBColor * _backgroundColor;
    bool  _canBeHidden;
    NSString * _footnote;
    NSString * _handle;
    bool  _hasBottomPadding;
    bool  _hasTopPadding;
    NSString * _name;
    int  _nameMaxLines;
    bool  _nameNoWrap;
    _SFPBImage * _picture;
    _SFPBRichText * _post;
    _SFPBImage * _profilePicture;
    NSArray * _punchoutOptions;
    NSString * _punchoutPickerDismissText;
    NSString * _punchoutPickerTitle;
    int  _separatorStyle;
    NSString * _timestamp;
    NSString * _type;
    _SFPBImage * _verifiedGlyph;
}

@property (nonatomic, retain) _SFPBColor *backgroundColor;
@property (nonatomic) bool canBeHidden;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *footnote;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic) bool hasBottomPadding;
@property (nonatomic) bool hasTopPadding;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int nameMaxLines;
@property (nonatomic) bool nameNoWrap;
@property (nonatomic, retain) _SFPBImage *picture;
@property (nonatomic, retain) _SFPBRichText *post;
@property (nonatomic, retain) _SFPBImage *profilePicture;
@property (nonatomic, copy) NSArray *punchoutOptions;
@property (nonatomic, copy) NSString *punchoutPickerDismissText;
@property (nonatomic, copy) NSString *punchoutPickerTitle;
@property (nonatomic) int separatorStyle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *timestamp;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) _SFPBImage *verifiedGlyph;

- (void).cxx_destruct;
- (void)addPunchoutOptions:(id)arg1;
- (id)backgroundColor;
- (bool)canBeHidden;
- (void)clearPunchoutOptions;
- (id)dictionaryRepresentation;
- (id)footnote;
- (id)handle;
- (bool)hasBottomPadding;
- (bool)hasTopPadding;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)name;
- (int)nameMaxLines;
- (bool)nameNoWrap;
- (id)picture;
- (id)post;
- (id)profilePicture;
- (id)punchoutOptions;
- (id)punchoutOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)punchoutOptionsCount;
- (id)punchoutPickerDismissText;
- (id)punchoutPickerTitle;
- (bool)readFrom:(id)arg1;
- (int)separatorStyle;
- (void)setBackgroundColor:(id)arg1;
- (void)setCanBeHidden:(bool)arg1;
- (void)setFootnote:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setHasBottomPadding:(bool)arg1;
- (void)setHasTopPadding:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNameMaxLines:(int)arg1;
- (void)setNameNoWrap:(bool)arg1;
- (void)setPicture:(id)arg1;
- (void)setPost:(id)arg1;
- (void)setProfilePicture:(id)arg1;
- (void)setPunchoutOptions:(id)arg1;
- (void)setPunchoutPickerDismissText:(id)arg1;
- (void)setPunchoutPickerTitle:(id)arg1;
- (void)setSeparatorStyle:(int)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVerifiedGlyph:(id)arg1;
- (id)timestamp;
- (id)type;
- (id)verifiedGlyph;
- (void)writeTo:(id)arg1;

// _SFPBSocialMediaPostCardSection (FacadeInitializer)

- (id)initWithFacade:(id)arg1;

@end
