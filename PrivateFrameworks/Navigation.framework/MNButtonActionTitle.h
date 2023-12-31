/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNButtonActionTitle : NSObject <NSSecureCoding> {
    unsigned long long  _action;
    int  _buttonDisplay;
    GEOComposedString * _formattedTitle;
    NSString * _title;
}

@property (nonatomic, readonly) unsigned long long action;
@property (nonatomic, readonly) int buttonDisplay;
@property (nonatomic, readonly) GEOComposedString *formattedTitle;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)action;
- (int)buttonDisplay;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedTitle;
- (id)initWithAction:(unsigned long long)arg1 withTitle:(id)arg2 buttonDisplay:(int)arg3;
- (id)initWithCoder:(id)arg1;
- (id)title;

@end
