/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PersonalIntelligenceCore.framework/PersonalIntelligenceCore
 */

@interface IIMetricsDispatcher : NSObject {
    IISMetricStore * _store;
}

+ (void)registerXPCActivity;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)logMessage:(id)arg1 messageName:(id)arg2;
- (void)registerEnrichmentProvider:(id)arg1;
- (void)registerMessagesListener:(id /* block */)arg1;

@end
