/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

@interface ECGmailLabelChangeReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer> {
    <ECIMAPServerInterface> * serverInterface;
}

@property (nonatomic) <ECIMAPLocalActionReplayerDelegate> *delegate;
@property (nonatomic, retain) <ECIMAPServerInterface> *serverInterface;

- (void).cxx_destruct;
- (id)replayAction;
- (id)serverInterface;
- (void)setServerInterface:(id)arg1;

@end
