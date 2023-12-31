/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUSRowCardSection : SAUSCardSection

@property (nonatomic, retain) SAUIImageResource *image;
@property (nonatomic) bool imageIsRightAligned;
@property (nonatomic, copy) NSString *leftText;
@property (nonatomic, copy) NSString *rightText;

+ (id)rowCardSection;
+ (id)rowCardSectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)image;
- (bool)imageIsRightAligned;
- (id)leftText;
- (id)rightText;
- (void)setImage:(id)arg1;
- (void)setImageIsRightAligned:(bool)arg1;
- (void)setLeftText:(id)arg1;
- (void)setRightText:(id)arg1;

@end
