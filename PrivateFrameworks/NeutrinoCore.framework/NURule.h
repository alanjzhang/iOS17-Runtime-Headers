/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURule : NSObject <NSSecureCoding> {
    long long  _salience;
}

@property (nonatomic) long long salience;

+ (id)ruleWithBlockPredicate:(id /* block */)arg1 action:(id /* block */)arg2;
+ (id)ruleWithPredicate:(id)arg1 action:(id /* block */)arg2;
+ (id)ruleWithPredicate:(id)arg1 assertingFact:(id)arg2 grade:(double)arg3;
+ (id)ruleWithPredicate:(id)arg1 retractingFact:(id)arg2 grade:(double)arg3;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (bool)evaluatePredicateWithSystem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)performActionWithSystem:(id)arg1;
- (long long)salience;
- (void)setSalience:(long long)arg1;

@end
