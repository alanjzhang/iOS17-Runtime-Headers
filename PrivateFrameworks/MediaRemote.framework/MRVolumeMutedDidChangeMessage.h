/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRVolumeMutedDidChangeMessage : MRProtocolMessage

@property (getter=isMuted, nonatomic, readonly) bool muted;
@property (nonatomic, readonly) NSString *outputDeviceUID;

- (id)initWithMuted:(bool)arg1 outputDeviceUID:(id)arg2;
- (bool)isMuted;
- (id)outputDeviceUID;
- (unsigned long long)type;

@end
