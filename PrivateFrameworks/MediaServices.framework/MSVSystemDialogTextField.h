/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVSystemDialogTextField : NSObject {
    long long  _keyboardType;
    bool  _secure;
    NSString * _title;
}

@property (nonatomic) long long keyboardType;
@property (getter=isSecure, nonatomic) bool secure;
@property (nonatomic, copy) NSString *title;

+ (id)textFieldWithTitle:(id)arg1;
+ (id)textFieldWithTitle:(id)arg1 secure:(bool)arg2;

- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1;
- (bool)isSecure;
- (long long)keyboardType;
- (void)setKeyboardType:(long long)arg1;
- (void)setSecure:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
