/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STHistoryAnalyzer : NSObject {
    NSPersistentHistoryToken * _finalToken;
}

@property (nonatomic, readonly) NSPersistentHistoryToken *finalToken;

+ (bool)_changedObjectBelongsToFamily:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (bool)_isChangeInteresting:(id)arg1;
- (id)deltasForStore:(id)arg1 inManagedObjectContext:(id)arg2 sinceToken:(id)arg3 ignoreAuthor:(id)arg4 finalToken:(id*)arg5 error:(id*)arg6;
- (id)finalToken;

@end
