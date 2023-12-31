/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Coordination.framework/Coordination
 */

@interface COStateManagerClientInterfaceMediator : NSObject <COStateManagerClientInterface> {
    COStateManager * _manager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) COStateManager *manager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)changesObserved:(id)arg1 forPredicate:(id)arg2;
- (id)initWithStateManager:(id)arg1;
- (id)manager;

@end
