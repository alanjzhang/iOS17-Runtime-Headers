/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSecureElementConsistencyCheckResult : NSObject {
    long long  _cleanupActions;
    NSArray * _registerRegions;
    NSArray * _requestedActions;
    NSDictionary * _summary;
}

@property (nonatomic, readonly) long long cleanupActions;
@property (nonatomic, readonly) NSArray *registerRegions;
@property (nonatomic, readonly) NSArray *requestedActions;
@property (nonatomic, readonly) NSDictionary *summary;

- (void).cxx_destruct;
- (long long)cleanupActions;
- (id)description;
- (id)initWithCleanupActions:(long long)arg1 resultsSummary:(id)arg2 requestedActions:(id)arg3 registeredRegions:(id)arg4;
- (id)registerRegions;
- (id)requestedActions;
- (id)summary;

@end
