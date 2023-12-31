/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFWorkflowDescriptor : WFDatabaseObjectDescriptor <WFGlyphDrawableItem> {
    NSString * _associatedAppBundleIdentifier;
    long long  _color;
    unsigned short  _glyphCharacter;
    struct CGImage { } * _iconImage;
    double  _iconImageScale;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, readonly) long long color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned short glyphCharacter;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGImage { }*iconImage;
@property (nonatomic, readonly) double iconImageScale;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)associatedAppBundleIdentifier;
- (long long)color;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)externalURLForViewing;
- (unsigned short)glyphCharacter;
- (unsigned long long)hash;
- (struct CGImage { }*)iconImage;
- (double)iconImageScale;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 color:(long long)arg3 glyphCharacter:(unsigned short)arg4 associatedAppBundleIdentifier:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setIconImage:(struct CGImage { }*)arg1 scale:(double)arg2;

@end
