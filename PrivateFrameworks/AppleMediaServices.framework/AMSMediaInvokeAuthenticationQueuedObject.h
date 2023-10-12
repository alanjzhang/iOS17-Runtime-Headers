/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMediaInvokeAuthenticationQueuedObject : NSObject {
    bool  _ignoringResult;
    AMSPromise * _pendingPromise;
    NSURLResponse * _response;
    AMSURLTaskInfo * _taskInfo;
}

@property (nonatomic) bool ignoringResult;
@property (nonatomic, retain) AMSPromise *pendingPromise;
@property (nonatomic, retain) NSURLResponse *response;
@property (nonatomic, retain) AMSURLTaskInfo *taskInfo;

- (void).cxx_destruct;
- (bool)ignoringResult;
- (id)pendingPromise;
- (id)response;
- (void)setIgnoringResult:(bool)arg1;
- (void)setPendingPromise:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setTaskInfo:(id)arg1;
- (id)taskInfo;

@end
