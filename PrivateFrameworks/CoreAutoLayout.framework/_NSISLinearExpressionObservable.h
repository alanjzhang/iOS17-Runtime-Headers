/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
 */

@interface _NSISLinearExpressionObservable : NSObservationSource {
    NSISEngine * _associatedEngine;
    id  _changeTransactionObservation;
    NSISLinearExpression * _expression;
    NSNumber * _lastValue;
    bool  _valueIsDirtied;
    NSMutableArray * _variableObservations;
}

+ (id)observableForExpression:(id)arg1 inEngine:(id)arg2;

- (bool)_overrideUseFastBlockObservers;
- (id)addObserver:(id)arg1;
- (id)addObserverBlock:(id /* block */)arg1;
- (void)dealloc;

@end
