/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAIRetrySearch : SABaseClientBoundCommand

@property (nonatomic) double minimumDurationForRetry;

+ (id)retrySearch;
+ (id)retrySearchWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (double)minimumDurationForRetry;
- (bool)requiresResponse;
- (void)setMinimumDurationForRetry:(double)arg1;

@end
