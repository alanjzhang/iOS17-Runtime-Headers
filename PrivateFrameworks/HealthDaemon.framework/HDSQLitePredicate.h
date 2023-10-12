/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSQLitePredicate : NSObject <NSCopying>

- (id)SQLForEntityClass:(Class)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (void)bindToStatement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(int*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isCompatibleWithPredicate:(id)arg1;
- (bool)isEqual:(id)arg1;

// HDSQLitePredicate (Convenience)

+ (id)booleanPredicateWithValue:(bool)arg1;
+ (id)compoundPredicateWithPredicate:(id)arg1 otherPredicate:(id)arg2;
+ (id)disjunctionWithPredicate:(id)arg1 otherPredicate:(id)arg2;
+ (id)falsePredicate;
+ (id)truePredicate;

@end
