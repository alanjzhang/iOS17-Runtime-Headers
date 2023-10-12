/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSwitchControlServer : AXServer

+ (id)server;

- (bool)_connectIfNecessary;
- (void)_didConnectToClient;
- (id)_serviceName;
- (bool)_triggerAutomationCommand:(long long)arg1;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (id)currentFocusedElement;
- (struct CGPoint { double x1; double x2; })headTrackingPoint;
- (bool)isAutoScanEnabled;
- (bool)isDwellEnabled;
- (bool)isManualScanEnabled;
- (bool)isScannerActive;
- (bool)isScannerPaused;
- (bool)setupAutomation;
- (bool)tearDownAutomation;
- (bool)triggerCommand:(long long)arg1;

@end