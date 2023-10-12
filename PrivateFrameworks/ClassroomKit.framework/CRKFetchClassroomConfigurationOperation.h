/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKFetchClassroomConfigurationOperation : CATOperation {
    CATRemoteTaskOperation * mFetchConfigurationOperation;
    NSDictionary * mSourcesByType;
    <CRKRequestPerformingProtocol> * mStudentDaemonProxy;
}

+ (id)defaultSourcesByType;

- (void).cxx_destruct;
- (void)cancel;
- (void)fetchConfigurationMacOS;
- (void)fetchConfigurationOperationDidFinish:(id)arg1;
- (void)fetchConfigurationiOS;
- (id)init;
- (id)initWithStudentDaemonProxy:(id)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 sourcesByType:(id)arg2;
- (bool)isAsynchronous;
- (void)main;
- (void)run;

@end
