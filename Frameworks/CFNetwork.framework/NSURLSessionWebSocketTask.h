/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLSessionWebSocketTask : NSURLSessionTask {
    long long  _closeCode;
    NSData * _closeReason;
    long long  _maximumMessageSize;
}

@property (readonly) long long closeCode;
@property (readonly, copy) NSData *closeReason;
@property long long maximumMessageSize;

- (void).cxx_destruct;
- (void)cancelWithCloseCode:(long long)arg1 reason:(id)arg2;
- (long long)closeCode;
- (id)closeReason;
- (long long)maximumMessageSize;
- (void)receiveMessageWithCompletionHandler:(id /* block */)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)sendPingWithPongReceiveHandler:(id /* block */)arg1;
- (void)setMaximumMessageSize:(long long)arg1;

@end
