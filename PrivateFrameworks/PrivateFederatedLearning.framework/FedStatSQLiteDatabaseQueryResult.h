/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PrivateFederatedLearning.framework/PrivateFederatedLearning
 */

@interface FedStatSQLiteDatabaseQueryResult : NSObject {
    struct sqlite3_stmt { } * _queryStatement;
}

@property struct sqlite3_stmt { }*queryStatement;

- (void)dealloc;
- (id)initWithQueryStatement:(struct sqlite3_stmt { }*)arg1;
- (id)next;
- (struct sqlite3_stmt { }*)queryStatement;
- (void)setQueryStatement:(struct sqlite3_stmt { }*)arg1;

@end
