/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuetContext.framework/CoreDuetContext
 */

@interface _CDPredicateValidator : NSObject <NSPredicateVisitor> {
    NSSet * _allowedKeys;
    NSError * _error;
    NSPredicate * _predicate;
    bool  _validated;
}

@property (nonatomic, retain) NSSet *allowedKeys;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSPredicate *predicate;
@property (nonatomic) bool validated;

+ (bool)validatePredicate:(id)arg1 allowedKeys:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_cd_validateKeypath:(id)arg1;
- (id)allowedKeys;
- (id)error;
- (id)initWithPredicate:(id)arg1 allowedKeys:(id)arg2;
- (id)predicate;
- (void)setAllowedKeys:(id)arg1;
- (void)setError:(id)arg1;
- (void)setPredicate:(id)arg1;
- (void)setValidated:(bool)arg1;
- (bool)validateWithError:(id*)arg1;
- (bool)validated;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
