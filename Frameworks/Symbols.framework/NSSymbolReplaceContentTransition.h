/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Symbols.framework/Symbols
 */

@interface NSSymbolReplaceContentTransition : NSSymbolContentTransition {
    long long  _layerBehavior;
    long long  _style;
}

@property (nonatomic) long long _layerBehavior;
@property (nonatomic) long long _style;

+ (id)replaceDownUpTransition;
+ (id)replaceOffUpTransition;
+ (id)replaceUpUpTransition;
+ (id)transition;

- (long long)_layerBehavior;
- (id)_rbOptionsMutable;
- (long long)_style;
- (id)_withStyle:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)set_layerBehavior:(long long)arg1;
- (void)set_style:(long long)arg1;
- (id)transitionWithByLayer;
- (id)transitionWithWholeSymbol;

@end
