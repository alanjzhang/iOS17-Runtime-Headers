/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationClientProxy : NSObject {
    GEOApplicationAuditToken * _auditToken;
    MNDirectionsRequestManager * _directionsRequestManager;
}

- (void).cxx_destruct;
- (id)_directionsRequestManager;
- (void)cancelDirectionsRequestWithIdentifier:(id)arg1;
- (id)init;
- (void)requestDirections:(id)arg1 withIdentifier:(id)arg2 handler:(id /* block */)arg3;

@end
