/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentContentItem : NSObject <NSSecureCoding> {
    bool  _centered;
    struct CGImage { } * _image;
    NSURLRequest * _imageRequest;
    NSAttributedString * _label;
    NSAttributedString * _title;
}

@property (getter=isCentered, nonatomic) bool centered;
@property (nonatomic) struct CGImage { }*image;
@property (nonatomic, copy) NSURLRequest *imageRequest;
@property (nonatomic, copy) NSAttributedString *label;
@property (nonatomic, copy) NSAttributedString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (struct CGImage { }*)image;
- (id)imageRequest;
- (id)initWithCoder:(id)arg1;
- (bool)isCentered;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPaymentContentItem:(id)arg1;
- (id)label;
- (void)setCentered:(bool)arg1;
- (void)setImage:(struct CGImage { }*)arg1;
- (void)setImageRequest:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

// PKPaymentContentItem (Protobuf)

+ (id)itemWithProtobuf:(id)arg1;

- (id)protobuf;

@end
