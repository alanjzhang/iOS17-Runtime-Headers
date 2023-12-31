/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IAP.framework/IAP
 */

@interface IAPNavigation : NSObject {
    NSSet * _availableAccessories;
    bool  _connected;
    struct __CFNotificationCenter { } * _darwinNotificationCenter;
    <IAPNavigationDelegate> * _delegate;
    NSObject<OS_xpc_object> * _iap2d_connection;
    NSNotificationCenter * _localNotificationCenter;
    NSObject<OS_dispatch_queue> * _processingQ;
}

@property (retain) NSSet *availableAccessories;
@property bool connected;
@property <IAPNavigationDelegate> *delegate;
@property (retain) NSObject<OS_xpc_object> *iap2d_connection;
@property (retain) NSObject<OS_dispatch_queue> *processingQ;

- (void).cxx_destruct;
- (id)_convert_xpc_array_to_NSArray:(id)arg1;
- (void)_getConnectedAccessories;
- (void)_iap2d_server_did_die;
- (void)_iap2d_server_did_launch;
- (void)_updateInternalStateWithArrayOfAccessories:(id)arg1;
- (id)availableAccessories;
- (bool)connected;
- (void)dealloc;
- (id)delegate;
- (id)iap2d_connection;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (id)processingQ;
- (void)setAvailableAccessories:(id)arg1;
- (void)setConnected:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIap2d_connection:(id)arg1;
- (void)setProcessingQ:(id)arg1;
- (void)updateNavigationGuidanceInfo:(id)arg1 forAccessory:(id)arg2 withComponent:(id)arg3;
- (void)updateNavigationManeuverInfo:(id)arg1 forAccessory:(id)arg2 withComponent:(id)arg3;

@end
