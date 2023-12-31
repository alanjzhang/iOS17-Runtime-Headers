/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessWatchdog : FBSProcessWatchdog {
    FBProcessCPUStatistics * _cpuStatistics;
    long long  _event;
    FBProcessWatchdogEventContext * _eventContext;
    RBSProcessHandle * _handle;
}

@property (nonatomic, readonly, retain) FBProcessCPUStatistics *cpuStatistics;
@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly, retain) FBProcessWatchdogEventContext *eventContext;

- (void).cxx_destruct;
- (id)_policyDesc;
- (void)activate;
- (id)cpuStatistics;
- (long long)event;
- (id)eventContext;
- (id)initWithProcess:(id)arg1 context:(id)arg2 policy:(id)arg3;

@end
