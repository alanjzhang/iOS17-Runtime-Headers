/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriPrivateLearningAnalytics.framework/SiriPrivateLearningAnalytics
 */

@interface UniversalCandidateCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSData *candidateEntity;
@property (nonatomic, retain) UniversalSuggestionCoreDataRecord *candidateForUniversalSuggestion;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic) double lastSurfaced;
@property (nonatomic) double lastUpdated;
@property (nonatomic) double score;
@property (nonatomic, retain) UniversalRuntimeSuggestionCoreDataRecord *topCandidateForUniversalRuntimeSuggestion;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
