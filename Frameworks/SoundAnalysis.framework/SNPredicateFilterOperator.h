/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNPredicateFilterOperator : NSObject <SNOperator> {
    void leakCount;
    void leakRemaining;
    void predicate;
}

@property (nonatomic, readonly) long long leakCount;
@property (nonatomic, readonly) NSPredicate *predicate;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPredicate:(id)arg1 leakCount:(long long)arg2;
- (long long)leakCount;
- (id)predicate;
- (void)processInput:(id)arg1 portID:(id)arg2 downstreamHandler:(id /* block */)arg3;
- (void)processTerminationWithOptionalError:(id)arg1 portID:(id)arg2 downstreamHandler:(id /* block */)arg3;

@end
