/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface _EFCombineLatestObservableSubscription : NSObject {
    NSMutableIndexSet * _activeIndexes;
    NSLock * _lock;
    NSArray * _observables;
    NSMutableArray * _results;
    NSMutableIndexSet * _silentIndexes;
    NSMutableArray * _tokens;
}

@property (nonatomic, retain) NSMutableIndexSet *activeIndexes;
@property (nonatomic, retain) NSLock *lock;
@property (nonatomic, copy) NSArray *observables;
@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic, retain) NSMutableIndexSet *silentIndexes;
@property (nonatomic, retain) NSMutableArray *tokens;

- (void).cxx_destruct;
- (void)_observableAtIndex:(unsigned long long)arg1 didCompleteForObserver:(id)arg2;
- (void)_observableAtIndex:(unsigned long long)arg1 didFailWithError:(id)arg2 observer:(id)arg3;
- (void)_observableAtIndex:(unsigned long long)arg1 receivedResult:(id)arg2 observer:(id)arg3;
- (id)activeIndexes;
- (id)initWithObservables:(id)arg1;
- (id)lock;
- (id)observables;
- (id)results;
- (void)setActiveIndexes:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setObservables:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setSilentIndexes:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)silentIndexes;
- (id)subscribe:(id)arg1;
- (id)tokens;

@end
