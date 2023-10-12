/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HearingCore.framework/HearingCore
 */

@interface HCDatabaseManager : NSObject {
    int  _contentProtectionNotifyToken;
    NSManagedObjectContext * _managedObjectContext;
}

@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

- (void).cxx_destruct;
- (id)apsConnectionMachServiceName;
- (id)cloudKitContainer;
- (id)containerIdentifier;
- (void)contentDidUpdate:(id)arg1;
- (id)databaseFilePath;
- (void)dealloc;
- (id)init;
- (void)logMessage:(id)arg1;
- (id)managedObjectContext;
- (id)managedObjectModelName;
- (bool)saveIfPossible;
- (void)setManagedObjectContext:(id)arg1;
- (void)setupDatabase;
- (void)storesWillChange:(id)arg1;

@end
