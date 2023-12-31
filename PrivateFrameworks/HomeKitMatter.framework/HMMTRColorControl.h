/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter
 */

@interface HMMTRColorControl : MTRBaseClusterColorControl <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void)moveToCustomColorTemperatureWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)moveToCustomHueAndSaturationWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)moveToCustomHueWithParams:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)moveToCustomSaturationWithParams:(id)arg1 completionHandler:(id /* block */)arg2;

@end
