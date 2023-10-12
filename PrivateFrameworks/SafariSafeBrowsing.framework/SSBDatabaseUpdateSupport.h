/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SafariSafeBrowsing.framework/SafariSafeBrowsing
 */

@interface SSBDatabaseUpdateSupport : NSObject {
    CTCarrierSpaceClient * _carrierSpaceClient;
    bool  _onHighCellularDataPlan;
}

@property (nonatomic, readonly) bool onHighCellularDataPlan;

- (void).cxx_destruct;
- (void)_fetchCellularDataPlan;
- (void)_fetchCellularDataPlanWithCompletionHandler:(id /* block */)arg1;
- (id)fetchCellularDataPlanSynchronously;
- (id)init;
- (bool)onHighCellularDataPlan;

@end
