/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPayLaterFinancingPlansFetcherRequest : NSObject {
    NSMutableArray * _completions;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSMutableArray *completions;
@property (nonatomic, readonly) NSDate *startDate;

- (void).cxx_destruct;
- (void)callCompletionsWithResult:(id)arg1;
- (bool)coalesceRequest:(id)arg1;
- (id)completions;
- (id)initWithStartDate:(id)arg1 completion:(id /* block */)arg2;
- (void)setCompletions:(id)arg1;
- (id)startDate;

@end
