/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSXPCReply : NSObject {
    NSObject<OS_xpc_object> * _reply;
    int  _sent;
}

+ (id)messageWithReply:(id)arg1;
+ (id)replyForMessage:(id)arg1;

- (void).cxx_destruct;
- (id)initForMessage:(id)arg1;
- (id)initWithReply:(id)arg1;
- (id)message;
- (long long)messageKind;
- (void)sendReply:(id /* block */)arg1;

@end
