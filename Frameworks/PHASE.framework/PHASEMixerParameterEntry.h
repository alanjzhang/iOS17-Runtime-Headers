/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/PHASE.framework/PHASE
 */

@interface PHASEMixerParameterEntry : NSObject {
    PHASEListener * _listener;
    long long  _mixerType;
    PHASESource * _source;
}

@property (nonatomic, retain) PHASEListener *listener;
@property (nonatomic) long long mixerType;
@property (nonatomic, retain) PHASESource *source;

- (void).cxx_destruct;
- (id)init;
- (id)listener;
- (long long)mixerType;
- (void)setListener:(id)arg1;
- (void)setMixerType:(long long)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
