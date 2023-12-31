/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSSQLiteSchema : NSObject {
    AMSSQLiteConnection * _connection;
}

@property (readonly) long long currentUserVersion;

- (void).cxx_destruct;
- (void)_setUserVersion:(long long)arg1;
- (bool)column:(id)arg1 existsInTable:(id)arg2;
- (long long)currentUserVersion;
- (id)initWithConnection:(id)arg1;
- (bool)migrateToVersion:(long long)arg1 usingBlock:(id /* block */)arg2;
- (bool)tableExists:(id)arg1;

@end
