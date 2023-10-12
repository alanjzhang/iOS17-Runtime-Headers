/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INDeferredLocalizedString : NSString {
    NSArray * _arguments;
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSString * _cachedLocalization;
    NSString * _formatKey;
    NSString * _table;
}

@property (nonatomic, readonly, copy) NSArray *_arguments;
@property (nonatomic, readonly, copy) NSString *_bundleIdentifier;
@property (nonatomic, readonly, copy) NSURL *_bundleURL;
@property (nonatomic, readonly, copy) NSString *_cachedLocalization;
@property (nonatomic, readonly, copy) NSString *_formatKey;
@property (nonatomic, readonly, copy) NSString *_table;

+ (void)initialize;
+ (id)makeFromWidgetPlistableRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_arguments;
- (id)_bundleIdentifier;
- (id)_bundleURL;
- (id)_cachedLocalization;
- (id)_formatKey;
- (id)_table;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundle:(id)arg3 arguments:(char *)arg4;
- (id)initWithDeferredFormat:(id)arg1 fromTable:(id)arg2 bundleIdentifier:(id)arg3 bundleURL:(id)arg4 arguments:(id)arg5;
- (unsigned long long)length;
- (id)localizeForLanguage:(id)arg1;
- (id)widgetPlistableRepresentationWithParameters:(id)arg1 error:(id*)arg2;

// INDeferredLocalizedString (ProtoUtils)

- (id)_intents_encodeForProto;

@end
