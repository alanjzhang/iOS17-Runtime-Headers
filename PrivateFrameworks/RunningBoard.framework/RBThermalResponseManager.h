/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBThermalResponseManager : NSObject {
    RBSAssertionIdentifier * _currentAssertion;
    <RBDaemonContextProviding> * _daemonContext;
    int  _notifyToken;
}

+ (long long)_thermalConditionLevelForThermalLevel:(unsigned long long)arg1;
+ (id)managerWithDaemonContext:(id)arg1 notificationName:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithDaemonContext:(id)arg1 notificationName:(id)arg2;
- (void)_queue_updateAssertion;
- (void)_takeAssertionForConditionLevel:(long long)arg1 completion:(id /* block */)arg2;

@end