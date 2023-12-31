/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceRepairSession : NSObject {
    bool  _activateCalled;
    SFDeviceOperationCNJSetup * _captiveJoin;
    double  _captiveJoinSecs;
    int  _captiveJoinState;
    bool  _cdpEnabled;
    SFDeviceOperationCDPSetup * _cdpSetupOperation;
    double  _cdpSetupSecs;
    int  _cdpState;
    bool  _disableSilentAuth;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _doCaptiveJoin;
    int  _finishState;
    int  _getProblemsState;
    SFDeviceOperationHomeKitSetup * _homeKitSetupOperation;
    int  _homeKitSetupState;
    NSString * _idsIdentifier;
    bool  _invalidateCalled;
    int  _pairVerifyState;
    unsigned long long  _pairVerifyType;
    SFDevice * _peerDevice;
    unsigned long long  _peerFeatureFlags;
    unsigned long long  _peerProblemFlags;
    NSString * _peerSSID;
    int  _preflightWiFiEarlyState;
    int  _preflightWiFiState;
    UIViewController * _presentingViewController;
    unsigned long long  _problemFlags;
    id /* block */  _progressHandler;
    unsigned int  _repairFlags;
    bool  _sessionSecured;
    SFSession * _sfSession;
    int  _sfSessionState;
    unsigned long long  _startTicks;
    double  _trAuthenticationSecs;
    unsigned long long  _trAuthenticationStartTicks;
    int  _trAuthenticationState;
    TROperationQueue * _trOperationQueue;
    NSMutableArray * _trOperations;
    TRSession * _trSession;
    int  _trSessionState;
    unsigned long long  _triggerMs;
    bool  _wifiIsCaptive;
    SFDeviceOperationWiFiSetup * _wifiSetupOperation;
    double  _wifiSetupSecs;
    int  _wifiSetupState;
}

@property (nonatomic) bool disableSilentAuth;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, readonly, copy) NSString *idsIdentifier;
@property (nonatomic, retain) SFDevice *peerDevice;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic) unsigned int repairFlags;
@property (nonatomic) unsigned long long triggerMs;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)_reportError:(id)arg1;
- (void)_run;
- (int)_runCDPSetup;
- (int)_runCaptiveJoin;
- (int)_runFinish;
- (int)_runGetProblems;
- (int)_runHomeKitSetup;
- (int)_runPairVerify;
- (int)_runPreflightWiFiEarly;
- (int)_runPreflightWiFiFull;
- (int)_runSFSessionStart;
- (int)_runTRAuthentication;
- (int)_runTRSessionStart;
- (int)_runWiFiSetup;
- (void)activate;
- (void)dealloc;
- (bool)disableSilentAuth;
- (id)dispatchQueue;
- (id)idsIdentifier;
- (id)init;
- (void)invalidate;
- (id)peerDevice;
- (id)presentingViewController;
- (id /* block */)progressHandler;
- (unsigned int)repairFlags;
- (void)setDisableSilentAuth:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setPeerDevice:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setRepairFlags:(unsigned int)arg1;
- (void)setTriggerMs:(unsigned long long)arg1;
- (unsigned long long)triggerMs;

@end
