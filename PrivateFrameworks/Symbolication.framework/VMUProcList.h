/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUProcList : NSObject {
    NSMutableDictionary * allProcs;
    NSMutableDictionary * filteredProcs;
    NSLock * procLock;
}

- (void).cxx_destruct;
- (void)_populateFromSystem;
- (void)addProcInfo:(id)arg1;
- (id)allNames;
- (id)allPIDs;
- (id)allPathNames;
- (id)allProcInfos;
- (unsigned long long)count;
- (id)init;
- (id)newestProcInfo;
- (id)newestProcInfoWithName:(id)arg1;
- (id)procInfoWithPID:(int)arg1;
- (void)removeProcInfo:(id)arg1;
- (void)setProcInfos:(id)arg1;
- (bool)update;
- (bool)updateFromSystem;

@end
