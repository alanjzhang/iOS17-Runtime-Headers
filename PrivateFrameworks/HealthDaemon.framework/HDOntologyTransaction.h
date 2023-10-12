/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDOntologyTransaction : NSObject {
    HDDatabaseTransaction * _databaseTransaction;
    HDSimpleGraphDatabase * _graphDatabase;
    bool  _isWriteTransaction;
}

@property (nonatomic, readonly) HDDatabaseTransaction *databaseTransaction;
@property (nonatomic, readonly) HDSimpleGraphDatabase *graphDatabase;
@property (nonatomic, readonly) bool isWriteTransaction;
@property (nonatomic, readonly) HDProfile *profile;

- (void).cxx_destruct;
- (id)databaseTransaction;
- (id)graphDatabase;
- (id)init;
- (id)initWithDatabaseTransaction:(id)arg1 graphDatabase:(id)arg2 isWriteTransaction:(bool)arg3;
- (bool)isWriteTransaction;
- (id)profile;

@end
