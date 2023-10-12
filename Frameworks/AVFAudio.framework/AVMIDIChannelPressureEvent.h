/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AVFAudio.framework/AVFAudio
 */

@interface AVMIDIChannelPressureEvent : AVMIDIChannelEvent

@property unsigned int pressure;

- (id)initWithChannel:(unsigned int)arg1 pressure:(unsigned int)arg2;
- (id)initWithMessage:(struct MIDIChannelMessage { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; }*)arg1;
- (unsigned int)pressure;
- (void)setPressure:(unsigned int)arg1;

@end
