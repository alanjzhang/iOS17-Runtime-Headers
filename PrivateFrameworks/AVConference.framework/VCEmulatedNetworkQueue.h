/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCEmulatedNetworkQueue : VCEmulatedNetworkElement {
    double  _lastPolicyLoadingTime;
    VCEmulatedNetworkAlgorithmQueueBandwidth * _queueBandwidthAlgorithm;
    VCEmulatedNetworkAlgorithmQueueDelay * _queueDelayAlgorithm;
    VCEmulatedNetworkAlgorithmQueueLoss * _queueLossAlgorithm;
}

- (void)dealloc;
- (int)dequeuePacket:(id)arg1 time:(double)arg2;
- (int)enqueuePacket:(id)arg1;
- (id)initWithPolicies:(id)arg1;
- (void)markPacketLoss:(id)arg1;
- (void)runUntilTime:(double)arg1;
- (void)updateSettingsAtTime:(double)arg1;
- (int)write:(id)arg1;

@end
