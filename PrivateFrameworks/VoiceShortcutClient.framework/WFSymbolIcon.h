/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFSymbolIcon : WFIcon {
    WFIconBackground * _background;
    WFColor * _symbolColor;
    NSString * _symbolName;
}

@property (nonatomic, readonly) WFIconBackground *background;
@property (nonatomic, readonly) WFColor *symbolColor;
@property (nonatomic, readonly) NSString *symbolName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)background;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasClearBackground;
- (bool)hasTransparentBackground;
- (unsigned long long)hash;
- (id)iconWithSymbolColor:(id)arg1 background:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbolName:(id)arg1 background:(id)arg2;
- (id)initWithSymbolName:(id)arg1 symbolColor:(id)arg2 background:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)symbolColor;
- (id)symbolName;

@end