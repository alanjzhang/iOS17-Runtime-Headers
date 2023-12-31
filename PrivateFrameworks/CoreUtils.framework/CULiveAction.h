/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CULiveAction : NSObject <CUActivatable, CUXPCCodable> {
    bool  _activateCalled;
    id /* block */  _activateCompletion;
    int  _alertType;
    AVAudioSession * _audioSession;
    bool  _clinkActivated;
    RPCompanionLinkClient * _clinkClient;
    RPCompanionLinkDevice * _clinkLocalDevice;
    NSArray * _destinationDevices;
    NSArray * _destinationIDs;
    bool  _direct;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    CUHomeKitManager * _homeKitManager;
    NSString * _homeKitSelfID;
    NSObject<OS_dispatch_source> * _homeKitTimer;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    id /* block */  _invalidationHandler;
    NSString * _originatingHomeKitAccessoryID;
    NSMutableSet * _peerSessionSet;
    bool  _peersActivated;
    bool  _peersPerformDone;
    bool  _peersSetupDone;
    bool  _performLocally;
    bool  _prefStereoSpeak;
    NSMutableDictionary * _request;
    bool  _sentTimingInfo;
    int  _sessionState;
    NSURL * _soundFileURL;
    NSString * _speakText;
    NSObject<OS_os_transaction> * _transaction;
    bool  _xpcDone;
}

@property (nonatomic) int alertType;
@property (nonatomic, copy) NSArray *destinationIDs;
@property (nonatomic) bool direct;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *originatingHomeKitAccessoryID;
@property (nonatomic, copy) NSURL *soundFileURL;
@property (nonatomic, copy) NSString *speakText;

- (void).cxx_destruct;
- (id)_findStereoCounterpart:(id)arg1;
- (void)_invalidate:(bool)arg1;
- (void)_invalidated;
- (void)_reportError:(id)arg1 where:(const char *)arg2;
- (void)_run;
- (void)_runCLinkActivateCompleted;
- (void)_runCLinkActivateStart;
- (void)_runCLinkPeersActivateStart;
- (void)_runCLinkPeersPerformStart;
- (void)_runCLinkPeersSetupStart;
- (void)_runFinish;
- (void)_runHomeKitStart;
- (bool)_runPrepareRequest;
- (void)_runXPCStart;
- (bool)_shouldPerformLocally;
- (void)activateWithCompletion:(id /* block */)arg1;
- (int)alertType;
- (id)destinationIDs;
- (bool)direct;
- (id)dispatchQueue;
- (void)encodeWithXPCObject:(id)arg1;
- (id)init;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)invalidate;
- (id /* block */)invalidationHandler;
- (id)originatingHomeKitAccessoryID;
- (void)setAlertType:(int)arg1;
- (void)setDestinationIDs:(id)arg1;
- (void)setDirect:(bool)arg1;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setOriginatingHomeKitAccessoryID:(id)arg1;
- (void)setSoundFileURL:(id)arg1;
- (void)setSpeakText:(id)arg1;
- (id)soundFileURL;
- (id)speakText;

@end
