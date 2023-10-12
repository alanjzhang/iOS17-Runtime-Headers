/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSEventsProvider : NSObject {
    <TPSEventsProviderDelegate> * _delegate;
}

@property (nonatomic) <TPSEventsProviderDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)deregisterAllEventsForCallback;
- (void)deregisterEventsForCallback:(id)arg1;
- (void)queryEvents:(id)arg1;
- (void)registerEventsForCallback:(id)arg1;
- (void)registerEventsForWakingCallback:(id)arg1 clientIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;

@end