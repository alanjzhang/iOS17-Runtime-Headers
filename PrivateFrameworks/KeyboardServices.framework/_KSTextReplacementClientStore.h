/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementClientStore : NSObject <_KSTextReplacementCancellation, _KSTextReplacementStoreProtocol> {
    _KSTextReplacementServerConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)cancelPendingUpdates;
- (id)init;
- (void)modifyEntry:(id)arg1 toEntry:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)performTransaction:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)phraseShortcuts;
- (void)queryTextReplacementsWithCallback:(id /* block */)arg1;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(id /* block */)arg2;
- (void)removeAllEntries;
- (void)requestSyncWithCompletionBlock:(id /* block */)arg1;
- (id)textReplacementEntries;

@end
