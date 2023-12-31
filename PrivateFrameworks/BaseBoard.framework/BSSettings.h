/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSettings : NSObject <BSDescriptionProviding, BSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    <BSSettingDescriptionProvider> * _descriptionProvider;
    BSMutableIntegerMap * _settingToFlagMap;
    BSMutableIntegerMap * _settingToObjectMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <BSSettingDescriptionProvider> *descriptionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_appendObject:(id)arg1 toBuilder:(id)arg2 forName:(id)arg3;
+ (Class)_baseClass;
+ (Class)_mutableClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_applyToSettings:(id)arg1;
- (bool)_isMutable;
- (id)_keyDescriptionForSetting:(unsigned long long)arg1;
- (void)_removeAllSettings;
- (id)_sortedSettingsForDescription;
- (id)allSettings;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (bool)boolForSetting:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionProvider;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)enumerateFlagsWithBlock:(id /* block */)arg1;
- (void)enumerateObjectsWithBlock:(id /* block */)arg1;
- (long long)flagForSetting:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectForSetting:(unsigned long long)arg1;
- (void)setDescriptionProvider:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// BSSettings (BSKeyedSettings)

- (bool)isKeyedSettings;

@end
