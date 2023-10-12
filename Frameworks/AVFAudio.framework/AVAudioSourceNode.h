/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AVFAudio.framework/AVFAudio
 */

@interface AVAudioSourceNode : AVAudioNode <AVAudioMixing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

+ (id /* block */)pullInputBlockFromRenderBlock:(id /* block */)arg1;

- (id)initWithFormat:(id)arg1 renderBlock:(id /* block */)arg2;
- (id)initWithRenderBlock:(id /* block */)arg1;

@end
