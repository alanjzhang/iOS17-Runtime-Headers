/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSendButtonEventMessage : MRProtocolMessage

@property (nonatomic, readonly) struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; } buttonEvent;

- (struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; })buttonEvent;
- (id)initWithButtonEvent:(struct _MRHIDButtonEvent { unsigned int x1; unsigned int x2; bool x3; })arg1;
- (unsigned long long)type;

@end
