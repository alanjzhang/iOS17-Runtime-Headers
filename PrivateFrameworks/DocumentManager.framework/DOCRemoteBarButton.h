/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCRemoteBarButton : NSObject <NSSecureCoding> {
    UIBarButtonItem * _barButton;
    NSUUID * _uuid;
}

@property (readonly) UIBarButtonItem *barButton;
@property (readonly) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)barButton;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBarButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)performPrimaryAction;
- (id)uuid;

@end
