/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTMessageStatus : NSObject {
    unsigned int  _messageId;
    int  _messageType;
    int  _result;
}

@property (readonly) unsigned int messageId;
@property (readonly) int messageType;
@property (readonly) int result;

- (id)initWithMessageId:(unsigned int)arg1 messageType:(int)arg2 result:(int)arg3;
- (unsigned int)messageId;
- (int)messageType;
- (int)result;

@end
