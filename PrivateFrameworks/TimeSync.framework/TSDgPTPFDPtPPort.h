/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSDgPTPFDPtPPort : TSDgPTPNetworkPort {
    BOOL  _localPDelayLogMeanInterval;
    bool  _measuringPDelay;
    bool  _multipleRemotes;
    BOOL  _remotePDelayLogMeanInterval;
    TSDgPTPPortStatistics * _statistics;
}

@property (nonatomic) BOOL localPDelayLogMeanInterval;
@property (nonatomic) bool measuringPDelay;
@property (nonatomic) bool multipleRemotes;
@property (nonatomic) BOOL remotePDelayLogMeanInterval;
@property (nonatomic, retain) TSDgPTPPortStatistics *statistics;

- (void).cxx_destruct;
- (BOOL)_localPDelayLogMeanInterval;
- (bool)_measuringPDelay;
- (bool)_multipleRemotes;
- (BOOL)_remotePDelayLogMeanInterval;
- (id)_statistics;
- (id)initWithService:(id)arg1 pid:(int)arg2;
- (BOOL)localPDelayLogMeanInterval;
- (bool)measuringPDelay;
- (bool)multipleRemotes;
- (BOOL)remotePDelayLogMeanInterval;
- (void)setLocalPDelayLogMeanInterval:(BOOL)arg1;
- (void)setMeasuringPDelay:(bool)arg1;
- (void)setMultipleRemotes:(bool)arg1;
- (void)setRemotePDelayLogMeanInterval:(BOOL)arg1;
- (void)setStatistics:(id)arg1;
- (id)statistics;
- (void)updateProperties;

@end
