/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityRecordsImporterSchedulingContext : NSObject {
    NSMutableSet * _failedLogLocations;
    NSMutableSet * _ignoredLogLocations;
    int  _lock;
    NSMutableDictionary * _logLocationsToEncounteredErrors;
    NSMutableSet * _pendingLogLocations;
    NSMutableSet * _scheduledLogLocations;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPendingLogLocations:(id)arg1;

@end
