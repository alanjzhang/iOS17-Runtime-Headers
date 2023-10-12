/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
 */

@interface SSBDatabaseUpdaterStatus : NSObject {
    struct DatabaseUpdaterStatus { 
        int state; 
        int provider; 
    }  _databaseUpdaterStatus;
}

@property (nonatomic, readonly) unsigned long long databaseUpdaterState;
@property (nonatomic, readonly) NSString *provider;

- (id)_initWithDatabaseUpdaterStatus:(struct DatabaseUpdaterStatus { int x1; int x2; })arg1;
- (unsigned long long)databaseUpdaterState;
- (id)provider;

@end
