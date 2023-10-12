/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIBarButtonItemGroup : NSObject <NSCoding> {
    long long  __calculationVisibility;
    id /* block */  __notifyPrepareForLayout;
    id /* block */  __notifyWillRequestMenuRepresentation;
    NSMutableArray * _barButtonItems;
    NSString * _customizationIdentifier;
    unsigned long long  _expandStyle;
    struct { 
        unsigned int hidden : 1; 
        unsigned int locked : 1; 
        unsigned int sendActionsBeforeDismiss : 1; 
        unsigned int showInOverflow : 1; 
        unsigned int customizationDisposition : 2; 
    }  _groupFlags;
    UIMenuElement * _menuRepresentation;
    <_UIBarButtonItemGroupOwner> * _owner;
    UIBarButtonItem * _representativeItem;
    bool  _shouldAlwaysCollapse;
}

@property (nonatomic, readonly) double _contextualExpandedPadding;
@property (getter=_isCritical, nonatomic, readonly) bool _critical;
@property (getter=_dci_isAvailableWithoutCustomization, setter=_dci_setAvailableWithoutCustomization:, nonatomic) bool _dci_availableWithoutCustomization;
@property (nonatomic, readonly, copy) NSString *_dci_customizationIdentifier;
@property (getter=_dci_isInDefaultCustomization, nonatomic, readonly) bool _dci_inDefaultCustomization;
@property (setter=_dci_setMenuRepresentation:, nonatomic, copy) UIMenuElement *_dci_menuRepresentation;
@property (nonatomic, readonly) bool _disabledExpansion;
@property (getter=_isHidden, setter=_setHidden:, nonatomic) bool _hidden;
@property (nonatomic, copy) id /* block */ _notifyPrepareForLayout;
@property (nonatomic, copy) id /* block */ _notifyWillRequestMenuRepresentation;
@property (nonatomic) bool alwaysAvailable;
@property (nonatomic, copy) NSArray *barButtonItems;
@property (getter=isDisplayingRepresentativeItem, nonatomic, readonly) bool displayingRepresentativeItem;
@property (getter=_expandStyle, setter=_setExpandStyle:, nonatomic) unsigned long long expandStyle;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, copy) UIMenuElement *menuRepresentation;
@property (getter=_minimumLeadingSpace, setter=_setMinimumLeadingSpace:, nonatomic) double minimumLeadingSpace;
@property (getter=_minimumTrailingSpace, setter=_setMinimumTrailingSpace:, nonatomic) double minimumTrailingSpace;
@property (getter=_owner, setter=_setOwner:, nonatomic) <_UIBarButtonItemGroupOwner> *owner;
@property (nonatomic, retain) UIBarButtonItem *representativeItem;
@property (getter=_shouldAlwaysCollapse, setter=_setShouldAlwaysCollapse:, nonatomic) bool shouldAlwaysCollapse;
@property (getter=_isSystemGroup, nonatomic, readonly) bool systemGroup;

+ (id)fixedGroupWithRepresentativeItem:(id)arg1 items:(id)arg2;
+ (id)movableGroupWithCustomizationIdentifier:(id)arg1 representativeItem:(id)arg2 items:(id)arg3;
+ (id)optionalGroupWithCustomizationIdentifier:(id)arg1 inDefaultCustomization:(bool)arg2 representativeItem:(id)arg3 items:(id)arg4;

- (void).cxx_destruct;
- (double)_contextualExpandedPadding;
- (id)_dci_customizationIdentifier;
- (bool)_dci_isAvailableWithoutCustomization;
- (bool)_dci_isInDefaultCustomization;
- (id)_dci_menuRepresentation;
- (void)_dci_setAvailableWithoutCustomization:(bool)arg1;
- (void)_dci_setMenuRepresentation:(id)arg1;
- (bool)_disabledExpansion;
- (unsigned long long)_expandStyle;
- (void)_ib_setCustomizationDisposition:(long long)arg1;
- (void)_ib_setCustomizationIdentifier:(id)arg1;
- (bool)_isCritical;
- (bool)_isHidden;
- (bool)_isSystemGroup;
- (double)_minimumLeadingSpace;
- (double)_minimumTrailingSpace;
- (id /* block */)_notifyPrepareForLayout;
- (id /* block */)_notifyWillRequestMenuRepresentation;
- (id)_owner;
- (void)_removeBarButtonItem:(id)arg1;
- (void)_removeRepresentative:(id)arg1;
- (void)_sendNeedsToolbarUpdate;
- (void)_setExpandStyle:(unsigned long long)arg1;
- (void)_setHidden:(bool)arg1;
- (void)_setMinimumLeadingSpace:(double)arg1;
- (void)_setMinimumTrailingSpace:(double)arg1;
- (void)_setOwner:(id)arg1;
- (void)_setShouldAlwaysCollapse:(bool)arg1;
- (bool)_shouldAlwaysCollapse;
- (id)_synthesizedMenuElements;
- (void)_validateAllItems;
- (bool)alwaysAvailable;
- (id)barButtonItems;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBarButtonItems:(id)arg1 representativeItem:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomizationIdentifier_dci:(id)arg1 inDefaultCustomization:(bool)arg2 representativeItem:(id)arg3 items:(id)arg4;
- (id)initWithCustomizationIdentifier_dci:(id)arg1 representativeItem:(id)arg2 items:(id)arg3;
- (bool)isDisplayingRepresentativeItem;
- (bool)isHidden;
- (id)menuRepresentation;
- (id)representativeItem;
- (void)setAlwaysAvailable:(bool)arg1;
- (void)setBarButtonItems:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setMenuRepresentation:(id)arg1;
- (void)setRepresentativeItem:(id)arg1;
- (void)set_notifyPrepareForLayout:(id /* block */)arg1;
- (void)set_notifyWillRequestMenuRepresentation:(id /* block */)arg1;

@end
