/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRUpdateSyncedEndpointsMessage : MRProtocolMessage {
    NSArray * _endpoints;
}

@property (nonatomic, readonly) NSArray *endpoints;
@property (nonatomic, readonly) unsigned int features;

- (void).cxx_destruct;
- (id)endpoints;
- (unsigned int)features;
- (id)initWithEndpoints:(id)arg1 endpointFeature:(unsigned int)arg2;
- (unsigned long long)type;

@end
