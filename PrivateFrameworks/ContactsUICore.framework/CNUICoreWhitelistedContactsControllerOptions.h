/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUICoreWhitelistedContactsControllerOptions : NSObject {
    bool  _shouldPrepopulateEmptyWhitelist;
    bool  _shouldRequireConfirmationOfChanges;
}

@property (nonatomic, readonly) bool shouldPrepopulateEmptyWhitelist;
@property (nonatomic, readonly) bool shouldRequireConfirmationOfChanges;

+ (id)iosOptions;
+ (id)macOptions;
+ (id)macOptionsLocal;

- (id)init;
- (id)initWithShouldPrepopulateEmptyWhitelist:(bool)arg1 shouldRequireConfirmationOfChanges:(bool)arg2;
- (bool)shouldPrepopulateEmptyWhitelist;
- (bool)shouldRequireConfirmationOfChanges;

@end
