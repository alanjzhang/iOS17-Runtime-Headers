/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CalACMigrationAccountStore : NSObject <CalMigrationAccountStore>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)accountWithIdentifier:(id)arg1;
- (id)childAccountsForAccount:(id)arg1 withTypeIdentifier:(id)arg2;
- (id)createAccountWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;
- (id)createChildAccountOfParent:(id)arg1 withAccountTypeIdentifier:(id)arg2 error:(id*)arg3;
- (bool)removeAccount:(id)arg1 error:(id*)arg2;
- (bool)saveAccount:(id)arg1 withError:(id*)arg2;
- (id)topLevelAccountsWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2;

@end
