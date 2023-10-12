/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Osprey.framework/Osprey
 */

@interface OspreyMessageReader : NSObject {
    bool  _currentMessageCompressed;
    unsigned long long  _currentMessageSize;
    NSMutableData * _messageBuffer;
    id /* block */  _messageHandler;
    unsigned long long  _messageSequence;
    unsigned long long  _readerState;
}

- (void).cxx_destruct;
- (void)_produceMessageBody:(id)arg1;
- (id)initWithMessageHandler:(id /* block */)arg1;
- (void)readData:(id)arg1;

@end