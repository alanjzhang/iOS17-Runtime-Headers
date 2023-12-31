/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXMIDIParser : NSObject

- (unsigned short)_channelForStatusByte:(unsigned char)arg1;
- (long long)_eventTypeForStatusByte:(unsigned char)arg1;
- (unsigned long long)_expectedPacketLengthForEventType:(long long)arg1;
- (id)parse:(const struct MIDIPacketList { unsigned int x1; struct MIDIPacket { unsigned long long x_2_1_1; unsigned short x_2_1_2; unsigned char x_2_1_3[256]; } x2[1]; }*)arg1 error:(id*)arg2;

@end
