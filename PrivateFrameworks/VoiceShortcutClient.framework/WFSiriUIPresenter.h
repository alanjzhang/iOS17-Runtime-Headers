/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFSiriUIPresenter : NSObject {
    bool  _connected;
    <WFSiriUIPresenterConnection> * _connection;
}

@property (nonatomic) bool connected;
@property (nonatomic, readonly) <WFSiriUIPresenterConnection> *connection;

- (void).cxx_destruct;
- (bool)connected;
- (id)connection;
- (id)initWithConnection:(id)arg1;
- (void)performSiriRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setConnected:(bool)arg1;
- (void)willBeginExecutingShortcutStep:(id)arg1;
- (void)willBeginExecutingShortcutWithActionCount:(id)arg1;

@end
