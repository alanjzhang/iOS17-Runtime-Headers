/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICellViewAccessory : _UICellAccessory {
    long long  _options;
}

@property (nonatomic) long long options;

+ (id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3;
+ (id)accessoryWithIdentifier:(id)arg1 view:(id)arg2 options:(long long)arg3 reservedLayoutWidth:(double)arg4;

- (bool)alwaysNeedsLayout;
- (bool)isEqual:(id)arg1;
- (long long)options;
- (void)setOptions:(long long)arg1;
- (void)setView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
