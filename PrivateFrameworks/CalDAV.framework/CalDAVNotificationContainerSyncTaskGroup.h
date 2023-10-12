/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVNotificationContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
    NSSet * _notificationTypeNamesToFetch;
}

@property (nonatomic, retain) NSSet *notificationTypeNamesToFetch;

- (void).cxx_destruct;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)copyGetTaskWithURL:(id)arg1;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5;
- (id)notificationTypeNamesToFetch;
- (void)setNotificationTypeNamesToFetch:(id)arg1;
- (bool)shouldFetchResourceWithEtag:(id)arg1 propertiesToValues:(id)arg2;

@end