/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSUserWordsSynchroniser : NSObject {
    bool  _attemptingConnection;
    _KSCloudKitManager * _cloudKitManager;
    _KSControlFileController * _controlFile;
    _KSRequestThrottle * _identityThrottle;
    NSArray * _languagesIfOffline;
    bool  _needRetry;
    _KSSystemTask * _pushTask;
    bool  _retryPending;
    bool  _taskRun;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NSArray *requiredLanguages;

+ (id)generateKeyWithSize:(unsigned long long)arg1;
+ (id)generateRecordNameForFilename:(id)arg1 withKey:(id)arg2;
+ (Class)infoClass;
+ (id)sharedAcrossLanguagesNegativeLearningValue;
+ (id)sharedAcrossLanguagesVulgarWordUsageValue;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)accountDidChange:(id)arg1;
- (void)checkConfiguration;
- (bool)checkErrors:(id)arg1;
- (void)checkForDownload:(id)arg1 uploads:(id)arg2 allLanguages:(id)arg3;
- (void)checkProgress:(int)arg1 withInfo:(id)arg2;
- (id)containerID;
- (void)dealloc;
- (void)deleteZoneWithCompletionHandler:(id /* block */)arg1;
- (void)deltaDownloadForLanguages:(id)arg1;
- (void)disable;
- (void)dumpAllRecordsWithCompletionHandler:(id /* block */)arg1;
- (id)filenameForLanguage:(id)arg1;
- (void)firstTimeDownloadWithKey:(id)arg1;
- (void)generateKeyWithCompletionHandler:(id /* block */)arg1;
- (id)generateRecordListForLanguages:(id)arg1;
- (void)identitiesDidChange:(id)arg1;
- (id)information;
- (id)init;
- (id)initForTestingWithManager:(id)arg1 enablePushing:(bool)arg2;
- (void)keyboardUsed;
- (void)loadKeyWithCompletion:(id /* block */)arg1;
- (void)modifyInformationWithOperations:(id /* block */)arg1;
- (void)overwriteFilesWithRecords:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)readFilesWithRecordIDs:(id)arg1 forColumns:(id)arg2 priority:(unsigned long long)arg3 withCompletionHandler:(id /* block */)arg4;
- (id)recordIDForLanguage:(id)arg1 withKey:(id)arg2;
- (id)requiredLanguages;
- (void)saveKey:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setRequiredLanguages:(id)arg1;

@end
