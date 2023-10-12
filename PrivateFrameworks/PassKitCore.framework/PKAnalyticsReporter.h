/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAnalyticsReporter : NSObject {
    NSData * _archivedSessionToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lockArchive;
    RTCReporting * _session;
    NSObject * _sessionToken;
    NSString * _subject;
}

+ (id)analyticsErrorTextForError:(long long)arg1;
+ (id)archivedSessionTokenForSubject:(id)arg1;
+ (void)beginSubjectReporting:(id)arg1;
+ (void)beginSubjectReporting:(id)arg1 withArchivedParent:(id)arg2;
+ (int)clientTypeForSubject:(id)arg1;
+ (void)endSubjectReporting:(id)arg1;
+ (id)reporterForSubject:(id)arg1;
+ (void)sendSingularEvent:(id)arg1;
+ (void)subject:(id)arg1 category:(long long)arg2 sendEvent:(id)arg3;
+ (void)subject:(id)arg1 sendEvent:(id)arg2;
+ (id)subjectDictionary;
+ (id)subjectSessionStateDateDictionary;
+ (void)subjects:(id)arg1 category:(long long)arg2 sendEvent:(id)arg3;
+ (void)subjects:(id)arg1 sendEvent:(id)arg2;

- (void).cxx_destruct;
- (id)_reportingSessionID;
- (id)archivedSessionToken;
- (id)initWithArchivedParent:(id)arg1 subject:(id)arg2;
- (id)initWithParent:(id)arg1 subject:(id)arg2;
- (id)initWithParentToken:(id)arg1 subject:(id)arg2;
- (id)initWithSubject:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)sendEvent:(id)arg1 withCategory:(long long)arg2;

// PKAnalyticsReporter (AccountRewards)

+ (void)reportAccountRewardsEventIfNecessary:(id)arg1;

// PKAnalyticsReporter (PKDashboard)

+ (void)reportDashboardEventIfNecessary:(id)arg1 forPass:(id)arg2;
+ (id)subjectToReportDashboardAnalyticsForAccount:(id)arg1;
+ (id)subjectToReportDashboardAnalyticsForFeature:(unsigned long long)arg1;
+ (id)subjectToReportDashboardAnalyticsForPass:(id)arg1;
+ (void)updateIdentityEventToReportDashboardAnalytics:(id)arg1 forPass:(id)arg2;

// PKAnalyticsReporter (VirtualCard)

+ (id)virtualCardReferralSource:(unsigned long long)arg1;

@end
