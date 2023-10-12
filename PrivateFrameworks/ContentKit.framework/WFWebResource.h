/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface WFWebResource : NSObject <NSCopying, NSSecureCoding> {
    NSString * _MIMEType;
    NSURL * _URL;
    NSData * _data;
    NSString * _frameName;
    NSString * _textEncodingName;
}

@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *frameName;
@property (nonatomic, readonly) NSString *textEncodingName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MIMEType;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)frameName;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)serializedRepresentation;
- (id)textEncodingName;

// WFWebResource (ImageExtraction)

- (id)containedImageFile;

// WFWebResource (Loading)

- (id)loadInWKWebView:(id)arg1;

// WFWebResource (Types)

+ (id)webResourceWithData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
+ (id)webResourceWithFile:(id)arg1;
+ (id)webResourceWithHTMLString:(id)arg1 baseURL:(id)arg2;
+ (id)webResourceWithURL:(id)arg1;

@end
