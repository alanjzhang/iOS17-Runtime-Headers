/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCMediaStreamNegotiatorSettingsRemoteDesktopSystemAudio : AVCMediaStreamNegotiatorSettings {
    int  _preferredAudioPayload;
}

- (unsigned long long)audioChannelCount;
- (long long)audioStreamMode;
- (id)initWithOptions:(id)arg1 deviceRole:(unsigned char)arg2 error:(id*)arg3;
- (unsigned int)jitterBufferMode;
- (int)operatingMode;
- (int)preferredAudioCodec;
- (unsigned long long)preferredMediaBitRate;
- (unsigned long long)ptime;
- (double)rtcpSendInterval;
- (bool)rtcpTimeOutEnabled;
- (double)rtcpTimeOutInterval;

@end
