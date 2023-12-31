/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSSimulatorProxyGroupSession : NSObject {
    NSString * _multiplexer;
}

@property (nonatomic, copy) NSString *multiplexer;

+ (void)augmentSimulatorNetworkParametersForSession:(id)arg1 participantID:(unsigned long long)arg2 parameters:(id)arg3 withQueue:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)augmentSimulatorNetworkParametersForSessionAlias:(id)arg1 participantIDAlias:(unsigned long long)arg2 salt:(id)arg3 parameters:(id)arg4 withQueue:(id)arg5 completionHandler:(id /* block */)arg6;

- (void).cxx_destruct;
- (id)multiplexer;
- (void)setMultiplexer:(id)arg1;

@end
