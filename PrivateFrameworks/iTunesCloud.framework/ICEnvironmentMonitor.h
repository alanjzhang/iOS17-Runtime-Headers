/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICEnvironmentMonitor : NSObject <CoreTelephonyClientDataDelegate, CoreTelephonyClientRegistrationDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    int  _batteryNotificationToken;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    NSDictionary * _cellSignalInfo;
    bool  _charging;
    double  _currentBatteryLevel;
    bool  _currentNetworkLinkExpensive;
    unsigned long long  _currentNetworkLinkQuality;
    unsigned long long  _currentThermalLevel;
    CTXPCServiceSubscriptionContext * _dataSubscriptionContext;
    bool  _ethernetWired;
    long long  _lastKnownNetworkType;
    bool  _networkConstrained;
    NWPathEvaluator * _networkPathEvaluator;
    long long  _networkType;
    NSHashTable * _observers;
    struct os_unfair_recursive_lock_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } ourl_lock; 
        unsigned int ourl_count; 
    }  _observersLock;
    int  _powerSourceNotificationToken;
    bool  _remoteServerLikelyReachable;
    bool  _remoteServerReachable;
    CoreTelephonyClient * _telephonyClient;
    NSString * _telephonyOperatorName;
    NSString * _telephonyRegistrationStatus;
    int  _telephonyStatusIndicator;
    int  _thermalNotificationToken;
    bool  _wiFiActive;
    bool  _wifiAssociated;
}

@property (getter=isCharging, nonatomic, readonly) bool charging;
@property (nonatomic, readonly) double currentBatteryLevel;
@property (getter=isCurrentNetworkLinkExpensive, nonatomic, readonly) bool currentNetworkLinkExpensive;
@property (getter=isCurrentNetworkLinkHighQuality, nonatomic, readonly) bool currentNetworkLinkHighQuality;
@property (nonatomic, readonly) unsigned long long currentNetworkLinkQuality;
@property (nonatomic, readonly) unsigned long long currentThermalLevel;
@property (nonatomic, readonly) long long currentThermalPressureLevel;
@property (nonatomic, readonly) long long currentThermalState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEthernetWired, nonatomic, readonly) bool ethernetWired;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long lastKnownNetworkType;
@property (getter=isNetworkConstrained, nonatomic, readonly) bool networkConstrained;
@property (nonatomic, readonly) long long networkType;
@property (getter=isRemoteServerLikelyReachable, nonatomic, readonly) bool remoteServerLikelyReachable;
@property (getter=isRemoteServerReachable, nonatomic, readonly) bool remoteServerReachable;
@property (nonatomic, readonly) NSDictionary *signalInfo;
@property (nonatomic, readonly) NSDictionary *signalStrength;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *telephonyOperatorName;
@property (nonatomic, readonly, copy) NSString *telephonyRegistrationStatus;
@property (getter=isWiFiActive, nonatomic, readonly) bool wiFiActive;
@property (getter=isWiFiAssociated, nonatomic, readonly) bool wifiAssociated;

+ (id)sharedMonitor;

- (void).cxx_destruct;
- (void)_handleApplicationDidEnterForegroundNotification:(id)arg1;
- (long long)_networkTypeFromWatchCarousel;
- (void)_notifyObserversEnvironmentMonitorDidChangeTelephonyStatus;
- (long long)_onQueue_currentCellularLinkQuality;
- (long long)_onQueue_currentNetworkType;
- (bool)_onQueue_isWiFiAssociated;
- (void)_onQueue_loadInitialThermalLevel;
- (bool)_onQueue_networkConstrained;
- (void)_onQueue_updateNetworkReachabilityAndNotifyObservers:(bool)arg1;
- (void)_onQueue_updatePowerStateNotifyingObservers:(bool)arg1;
- (void)_onQueue_updateTelephonyStateAndNotifyObservers:(bool)arg1;
- (void)_onQueue_updateThermalLevelWithToken:(int)arg1;
- (void)addObserver:(id)arg1;
- (void)cellMonitorUpdate:(id)arg1 info:(id)arg2;
- (void)connectionStateChanged:(id)arg1 connection:(int)arg2 dataConnectionStatusInfo:(id)arg3;
- (double)currentBatteryLevel;
- (void)currentDataSimChanged:(id)arg1;
- (unsigned long long)currentNetworkLinkQuality;
- (unsigned long long)currentThermalLevel;
- (long long)currentThermalPressureLevel;
- (long long)currentThermalState;
- (void)dealloc;
- (void)displayStatusChanged:(id)arg1 status:(id)arg2;
- (id)init;
- (bool)isCharging;
- (bool)isCurrentNetworkLinkExpensive;
- (bool)isCurrentNetworkLinkHighQuality;
- (bool)isEthernetWired;
- (bool)isNetworkConstrained;
- (bool)isRemoteServerLikelyReachable;
- (bool)isRemoteServerReachable;
- (bool)isWiFiActive;
- (bool)isWiFiAssociated;
- (bool)isWifiActive;
- (long long)lastKnownNetworkType;
- (long long)networkType;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)operatorNameChanged:(id)arg1 name:(id)arg2;
- (void)registerObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)signalInfo;
- (id)signalStrength;
- (id)telephonyOperatorName;
- (id)telephonyRegistrationStatus;
- (void)unregisterObserver:(id)arg1;

@end
