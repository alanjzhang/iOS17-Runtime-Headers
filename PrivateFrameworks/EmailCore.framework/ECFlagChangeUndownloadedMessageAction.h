/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECFlagChangeUndownloadedMessageAction : ECLocalMessageAction <ECFlagChangeUndownloadedMessageActionBuilder> {
    ECMessageFlagChange * _flagChange;
    NSString * _oldestPersistedRemoteID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ECMessageFlagChange *flagChange;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *mailboxURL;
@property (nonatomic, retain) NSString *messageActionPersistentID;
@property (nonatomic, copy) NSString *oldestPersistedRemoteID;
@property (readonly) Class superclass;
@property (nonatomic) bool userInitiated;

- (void).cxx_destruct;
- (id)flagChange;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)oldestPersistedRemoteID;
- (void)setFlagChange:(id)arg1;
- (void)setOldestPersistedRemoteID:(id)arg1;

@end
