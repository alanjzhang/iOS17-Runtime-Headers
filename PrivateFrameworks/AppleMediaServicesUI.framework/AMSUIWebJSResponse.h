/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
 */

@interface AMSUIWebJSResponse : NSObject <NSSecureCoding> {
    NSDictionary * _body;
    double  _duration;
    AMSUIWebJSRequest * _originalRequest;
}

@property (nonatomic, retain) NSDictionary *body;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) AMSUIWebJSRequest *originalRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)body;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRequest:(id)arg1 duration:(double)arg2;
- (id)originalRequest;
- (void)setBody:(id)arg1;

@end