/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNUIToolbarItem : NSObject {
    id /* block */  _actionBlock;
    bool  _isCancel;
    bool  _isDefault;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic) bool isCancel;
@property (nonatomic) bool isDefault;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (bool)isCancel;
- (bool)isDefault;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setIsCancel:(bool)arg1;
- (void)setIsDefault:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
