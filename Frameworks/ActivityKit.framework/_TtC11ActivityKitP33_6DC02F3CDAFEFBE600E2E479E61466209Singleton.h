/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ActivityKit.framework/ActivityKit
 */

@interface _TtC11ActivityKitP33_6DC02F3CDAFEFBE600E2E479E61466209Singleton : NSObject <ACActivityQoSObservationXPCClient> {
    void _qosPublisher;
    void _queue_predicates;
    void _queue_qos;
    void connection;
    void queue;
    void serverStartupToken;
}

+ (id)shared;

- (void).cxx_destruct;
- (void)activityQoSDidChange:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)listenForActivityQoSWithActivityIdentifier:(id)arg1 handler:(id /* block */)arg2;

@end
