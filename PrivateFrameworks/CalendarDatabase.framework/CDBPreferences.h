/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CDBPreferences : NSObject {
    CalPreferences * _preferences;
}

@property (getter=get_LastConfirmedSplashScreenVersionViewed, setter=set_LastConfirmedSplashScreenVersionViewed:, nonatomic) long long LastConfirmedSplashScreenVersionViewed;
@property (getter=get_allowUnlimitedMigrationAttempts, setter=set_allowUnlimitedMigrationAttempts:, nonatomic) bool allowUnlimitedMigrationAttempts;
@property (getter=get_defaultCalendarChangedReason, setter=set_defaultCalendarChangedReason:, nonatomic, copy) NSString *defaultCalendarChangedReason;
@property (getter=get_defaultCalendarChangedTimestamp, setter=set_defaultCalendarChangedTimestamp:, nonatomic) long long defaultCalendarChangedTimestamp;
@property (getter=get_defaultCalendarDatabaseID, setter=set_defaultCalendarDatabaseID:, nonatomic) long long defaultCalendarDatabaseID;
@property (getter=get_defaultCalendarID, setter=set_defaultCalendarID:, nonatomic, copy) NSString *defaultCalendarID;
@property (getter=get_defaultCalendarName, setter=set_defaultCalendarName:, nonatomic, copy) NSString *defaultCalendarName;
@property (getter=get_defaultCalendarStoreUID, setter=set_defaultCalendarStoreUID:, nonatomic) long long defaultCalendarStoreUID;
@property (getter=get_enableTravelAdvisoriesForAutomaticBehavior, setter=set_enableTravelAdvisoriesForAutomaticBehavior:, nonatomic) bool enableTravelAdvisoriesForAutomaticBehavior;
@property (readonly) bool has_LastConfirmedSplashScreenVersionViewed;
@property (readonly) bool has_allowUnlimitedMigrationAttempts;
@property (readonly) bool has_defaultCalendarChangedReason;
@property (readonly) bool has_defaultCalendarChangedTimestamp;
@property (readonly) bool has_defaultCalendarDatabaseID;
@property (readonly) bool has_defaultCalendarID;
@property (readonly) bool has_defaultCalendarName;
@property (readonly) bool has_defaultCalendarStoreUID;
@property (readonly) bool has_enableTravelAdvisoriesForAutomaticBehavior;
@property (readonly) bool has_kCalPreferredDaysToSyncKey;
@property (readonly) bool has_kCalRemindersPreferredDaysToSyncKey;
@property (readonly) bool has_migrationAttempts;
@property (readonly) bool has_overrideParticipantRoleConstraint;
@property (readonly) bool has_privacyPaneHasBeenAcknowledgedVersion;
@property (readonly) bool has_sqlProfileLoggingEnabled;
@property (readonly) bool has_suggestEventLocations;
@property (readonly) bool has_suggestedLocationsTestMode;
@property (getter=get_kCalPreferredDaysToSyncKey, setter=set_kCalPreferredDaysToSyncKey:, nonatomic) long long kCalPreferredDaysToSyncKey;
@property (getter=get_kCalRemindersPreferredDaysToSyncKey, setter=set_kCalRemindersPreferredDaysToSyncKey:, nonatomic) long long kCalRemindersPreferredDaysToSyncKey;
@property (getter=get_migrationAttempts, setter=set_migrationAttempts:, nonatomic) long long migrationAttempts;
@property (getter=get_overrideParticipantRoleConstraint, setter=set_overrideParticipantRoleConstraint:, nonatomic) bool overrideParticipantRoleConstraint;
@property (nonatomic, readonly) CalPreferences *preferences;
@property (getter=get_privacyPaneHasBeenAcknowledgedVersion, setter=set_privacyPaneHasBeenAcknowledgedVersion:, nonatomic) long long privacyPaneHasBeenAcknowledgedVersion;
@property (getter=get_sqlProfileLoggingEnabled, setter=set_sqlProfileLoggingEnabled:, nonatomic) bool sqlProfileLoggingEnabled;
@property (getter=get_suggestEventLocations, setter=set_suggestEventLocations:, nonatomic) bool suggestEventLocations;
@property (getter=get_suggestedLocationsTestMode, setter=set_suggestedLocationsTestMode:, nonatomic) bool suggestedLocationsTestMode;

+ (id)preferencesForDirectory:(id)arg1;
+ (id)shared;
+ (id)sharedReadOnly;
+ (id)sharedReadWrite;

- (void).cxx_destruct;
- (long long)get_LastConfirmedSplashScreenVersionViewed;
- (bool)get_allowUnlimitedMigrationAttempts;
- (id)get_defaultCalendarChangedReason;
- (long long)get_defaultCalendarChangedTimestamp;
- (long long)get_defaultCalendarDatabaseID;
- (id)get_defaultCalendarID;
- (id)get_defaultCalendarName;
- (long long)get_defaultCalendarStoreUID;
- (bool)get_enableTravelAdvisoriesForAutomaticBehavior;
- (long long)get_kCalPreferredDaysToSyncKey;
- (long long)get_kCalRemindersPreferredDaysToSyncKey;
- (long long)get_migrationAttempts;
- (bool)get_overrideParticipantRoleConstraint;
- (long long)get_privacyPaneHasBeenAcknowledgedVersion;
- (bool)get_sqlProfileLoggingEnabled;
- (bool)get_suggestEventLocations;
- (bool)get_suggestedLocationsTestMode;
- (bool)has_LastConfirmedSplashScreenVersionViewed;
- (bool)has_allowUnlimitedMigrationAttempts;
- (bool)has_defaultCalendarChangedReason;
- (bool)has_defaultCalendarChangedTimestamp;
- (bool)has_defaultCalendarDatabaseID;
- (bool)has_defaultCalendarID;
- (bool)has_defaultCalendarName;
- (bool)has_defaultCalendarStoreUID;
- (bool)has_enableTravelAdvisoriesForAutomaticBehavior;
- (bool)has_kCalPreferredDaysToSyncKey;
- (bool)has_kCalRemindersPreferredDaysToSyncKey;
- (bool)has_migrationAttempts;
- (bool)has_overrideParticipantRoleConstraint;
- (bool)has_privacyPaneHasBeenAcknowledgedVersion;
- (bool)has_sqlProfileLoggingEnabled;
- (bool)has_suggestEventLocations;
- (bool)has_suggestedLocationsTestMode;
- (id)initWithPreferences:(id)arg1;
- (id)initWithReadOnly:(bool)arg1;
- (id)preferences;
- (void)set_LastConfirmedSplashScreenVersionViewed:(long long)arg1;
- (void)set_allowUnlimitedMigrationAttempts:(bool)arg1;
- (void)set_defaultCalendarChangedReason:(id)arg1;
- (void)set_defaultCalendarChangedTimestamp:(long long)arg1;
- (void)set_defaultCalendarDatabaseID:(long long)arg1;
- (void)set_defaultCalendarID:(id)arg1;
- (void)set_defaultCalendarName:(id)arg1;
- (void)set_defaultCalendarStoreUID:(long long)arg1;
- (void)set_enableTravelAdvisoriesForAutomaticBehavior:(bool)arg1;
- (void)set_kCalPreferredDaysToSyncKey:(long long)arg1;
- (void)set_kCalRemindersPreferredDaysToSyncKey:(long long)arg1;
- (void)set_migrationAttempts:(long long)arg1;
- (void)set_overrideParticipantRoleConstraint:(bool)arg1;
- (void)set_privacyPaneHasBeenAcknowledgedVersion:(long long)arg1;
- (void)set_sqlProfileLoggingEnabled:(bool)arg1;
- (void)set_suggestEventLocations:(bool)arg1;
- (void)set_suggestedLocationsTestMode:(bool)arg1;

@end
