/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKUserTrackedConceptQuery : HKQuery <HKUserTrackedConceptQueryClientInterface> {
    id /* block */  _handler;
    NSArray * _sortDescriptors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)clientInterfaceProtocol;
+ (Class)configurationClass;
+ (void)configureClientInterface:(id)arg1;

- (void).cxx_destruct;
- (void)_enumerateUserTrackedConceptsWithHandler:(id)arg1 handler:(id /* block */)arg2;
- (void)client_deliverUserTrackedConcepts:(id)arg1 queryUUID:(id)arg2;
- (id)initWithUserTrackedConceptType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 resultsHandler:(id /* block */)arg4;
- (void)queue_deliverError:(id)arg1;
- (void)queue_populateConfiguration:(id)arg1;
- (void)queue_queryDidDeactivate:(id)arg1;
- (void)queue_validate;

@end
