/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIBannerContent : NSObject <NSSecureCoding> {
    UIColor * _backgroundColor;
    NSString * _body;
    UIColor * _contentColor;
    UIImage * _image;
    NSString * _imageName;
    NSString * _title;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) NSString *body;
@property (nonatomic, retain) UIColor *contentColor;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSString *imageName;
@property (nonatomic, retain) NSString *title;

+ (id)bannerContentWithTitle:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)body;
- (id)contentColor;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setContentColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
