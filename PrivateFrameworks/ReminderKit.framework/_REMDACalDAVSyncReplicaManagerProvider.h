/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface _REMDACalDAVSyncReplicaManagerProvider : NSObject <REMReplicaManagerProviding> {
    REMStore * _store;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) REMStore *store;
@property (readonly) Class superclass;

+ (id)replicaManagerForAccountID:(id)arg1 withStore:(id)arg2;
+ (id)unsavedReplicaManagersForAccountIDs:(id)arg1;

- (void).cxx_destruct;
- (id)initWithStore:(id)arg1;
- (id)replicaManagerForAccountID:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (id)unsavedReplicaManagersForAccountIDs:(id)arg1;

@end