/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAccountsAndGroupsItem : NSObject <NSCopying> {
    bool  _bypassIfUnique;
    NSArray * _childItems;
    long long  _contactCount;
    NSString * _containerIdentifier;
    long long  _containerType;
    CNGroup * _group;
    NSString * _identifier;
    NSString * _name;
    id /* block */  _nameProvider;
    CNAccountsAndGroupsItem * _parentItem;
    bool  _selected;
    bool  _shouldHide;
    bool  _soloSelect;
    long long  _type;
}

@property (nonatomic, readonly) bool acceptsVCardDrop;
@property (nonatomic) bool bypassIfUnique;
@property (nonatomic, readonly) bool canDelete;
@property (nonatomic, readonly) bool canEmail;
@property (nonatomic, readonly) bool canExport;
@property (nonatomic, readonly) bool canMessage;
@property (nonatomic, readonly) bool canRename;
@property (nonatomic, readonly) bool canShowContextMenu;
@property (nonatomic, retain) NSArray *childItems;
@property (nonatomic) long long contactCount;
@property (nonatomic, readonly) NSString *contactCountString;
@property (nonatomic, retain) NSString *containerIdentifier;
@property (nonatomic) long long containerType;
@property (nonatomic, retain) CNGroup *group;
@property (nonatomic, readonly) UIImage *groupSymbol;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isEditable;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, readonly, copy) id /* block */ nameProvider;
@property (nonatomic) CNAccountsAndGroupsItem *parentItem;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic) bool shouldHide;
@property (nonatomic) bool soloSelect;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (bool)acceptsVCardDrop;
- (id)arrayForDisplay:(bool)arg1;
- (bool)bypassIfUnique;
- (bool)canDelete;
- (bool)canEmail;
- (bool)canExport;
- (bool)canMessage;
- (bool)canRename;
- (bool)canShowContextMenu;
- (id)childItems;
- (long long)contactCount;
- (id)contactCountString;
- (id)containerIdentifier;
- (long long)containerType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)group;
- (id)groupSymbol;
- (id)identifier;
- (id)initWithType:(long long)arg1 nameProvider:(id /* block */)arg2;
- (bool)isEditable;
- (bool)isSelected;
- (long long)localizedCompare:(id)arg1;
- (id)name;
- (id /* block */)nameProvider;
- (id)parentItem;
- (void)setBypassIfUnique:(bool)arg1;
- (void)setChildItems:(id)arg1;
- (void)setContactCount:(long long)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setContainerType:(long long)arg1;
- (void)setGroup:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setParentItem:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelected:(bool)arg1 affectingChildren:(bool)arg2;
- (void)setShouldHide:(bool)arg1;
- (void)setSoloSelect:(bool)arg1;
- (bool)shouldHide;
- (bool)soloSelect;
- (long long)type;

@end
