/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKQueryServerProxyProvider : HKTaskServerProxyProvider {
    bool  _shouldForceReactivation;
}

@property bool shouldForceReactivation;

- (void)fetchProxyServiceEndpointFromSource:(id)arg1 serviceIdentifier:(id)arg2 endpointHandler:(id /* block */)arg3 errorHandler:(id /* block */)arg4;
- (id)initWithHealthStore:(id)arg1 query:(id)arg2 configuration:(id)arg3 queryUUID:(id)arg4;
- (id)proxyServiceEndpointFromSource:(id)arg1 serviceIdentifier:(id)arg2 error:(id*)arg3;
- (void)setShouldForceReactivation:(bool)arg1;
- (bool)shouldForceReactivation;

@end
