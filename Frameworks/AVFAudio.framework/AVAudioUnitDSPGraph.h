/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AVFAudio.framework/AVFAudio
 */

@interface AVAudioUnitDSPGraph : AVAudioUnit

@property (nonatomic, readonly) NSURL *auProcessingStripURL;
@property (nonatomic, readonly) NSURL *dspGraphURL;

- (id)auProcessingStripURL;
- (id)dspGraphURL;
- (id)init;
- (bool)loadAudioDSPManager;
- (bool)loadAudioUnitProcessingStripAtURL:(id)arg1 error:(id*)arg2;
- (bool)loadDSPGraphAtURL:(id)arg1 error:(id*)arg2;

@end