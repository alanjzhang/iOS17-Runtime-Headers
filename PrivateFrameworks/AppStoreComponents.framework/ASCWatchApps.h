/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
 */

@interface ASCWatchApps : NSObject {
    ASCAppOfferStateCenter * _appOfferStateCenter;
}

@property (nonatomic, readonly) ASCAppOfferStateCenter *appOfferStateCenter;

+ (id)sharedWatchApps;

- (void).cxx_destruct;
- (id)appOfferStateCenter;
- (id)initWithAppOfferStateCenter:(id)arg1;
- (id)reinstallAppWithID:(id)arg1;
- (id)reinstallSystemAppWithBundleID:(id)arg1;

@end
