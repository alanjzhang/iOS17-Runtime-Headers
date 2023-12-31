/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIKeyboardEmoji : NSObject {
    NSString * _emojiString;
    unsigned long long  _variantMask;
}

@property (nonatomic, retain) NSString *emojiString;
@property (nonatomic, readonly) bool supportsSkinToneVariants;
@property unsigned long long variantMask;

+ (id)emojiWithString:(id)arg1 withVariantMask:(unsigned long long)arg2;
+ (bool)shouldHighlightEmoji:(id)arg1;

- (void).cxx_destruct;
- (id)emojiString;
- (id)initWithString:(id)arg1 withVariantMask:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)setEmojiString:(id)arg1;
- (void)setVariantMask:(unsigned long long)arg1;
- (bool)supportsSkinToneVariants;
- (unsigned long long)variantMask;

@end
