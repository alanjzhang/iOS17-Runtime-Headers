/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADLoggingProfileMonitor : NSObject {
    NSObject<OS_dispatch_queue> * _initQueue;
    NSSet * _profileIdentifiers;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *initQueue;
@property (nonatomic, retain) NSSet *profileIdentifiers;

- (void).cxx_destruct;
- (void)_beginMonitoring;
- (void)_fetchInstalledProfilesAndListen;
- (bool)_hasRelevantProfileChanged:(id)arg1;
- (void)_profilesChanged:(id)arg1;
- (id)fetchInstalledProfileIdentifiers;
- (id)init;
- (id)initQueue;
- (id)profileIdentifiers;
- (void)setInitQueue:(id)arg1;
- (void)setProfileIdentifiers:(id)arg1;

@end
