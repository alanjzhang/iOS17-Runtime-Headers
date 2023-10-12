/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

@interface FigAlternatePredicateValidator : NSObject <NSPredicateVisitor> {
    NSError * _error;
    bool  _isEvaluated;
    struct OpaqueFigSimpleMutex { } * _mutex;
    NSPredicate * _predicate;
    bool  _result;
}

- (bool)_keyPathComponentIsAllowed:(id)arg1;
- (id)_keyPathComponents:(id)arg1;
- (bool)_unsafeEvaluateKeyPathWithDummy:(id)arg1;
- (bool)_validateKeyPath:(id)arg1;
- (void)dealloc;
- (id)initWithPredicate:(id)arg1;
- (bool)validateWithError:(id*)arg1;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end