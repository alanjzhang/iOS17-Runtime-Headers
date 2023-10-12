/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@interface CalDAVContainerChecksumSyncTaskGroup : CalDAVContainerSyncTaskGroup {
    CoreDAVItemParserMapping * _bestServerChecksumVersion;
    NSDictionary * _localURLsToChecksums;
    bool  _mismatchDetected;
    NSArray * _preferredChecksumVersions;
    NSMutableDictionary * _serverURLsToChecksums;
    NSString * _unusedCTag;
    NSString * _unusedSyncToken;
}

@property (nonatomic, retain) CoreDAVItemParserMapping *bestServerChecksumVersion;
@property (nonatomic) <CalDAVChecksumLocalDBInfoProvider> *delegate;
@property (nonatomic, readonly) bool mismatchDetected;
@property (nonatomic, retain) NSArray *preferredChecksumVersions;

- (void).cxx_destruct;
- (id)_calculatedCalendarHome;
- (bool)_hadOutOfDateCollectionToken;
- (void)_handleResponseToChecksumPropfind:(id)arg1;
- (void)_serverChecksumSupportPropfind;
- (id)bestServerChecksumVersion;
- (id)copyAdditionalResourcePropertiesToFetch;
- (void)deleteResourceURLs:(id)arg1;
- (id)initWithFolderURL:(id)arg1 previousCTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 accountInfoProvider:(id)arg5 taskManager:(id)arg6 appSpecificCalendarItemClass:(Class)arg7;
- (bool)mismatchDetected;
- (id)preferredChecksumVersions;
- (void)receivedPropertiesToValues:(id)arg1 forURL:(id)arg2;
- (void)setBestServerChecksumVersion:(id)arg1;
- (void)setPreferredChecksumVersions:(id)arg1;
- (bool)shouldDownloadResource:(id)arg1 localETag:(id)arg2 serverETag:(id)arg3;
- (void)startTaskGroup;

@end
