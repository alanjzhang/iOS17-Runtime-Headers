/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIPencilEvent : UIEvent {
    NSHashTable * _trackedInteractions;
}

@property (nonatomic, retain) NSHashTable *trackedInteractions;

- (void).cxx_destruct;
- (id)_init;
- (void)_sendEventToInteractions;
- (id)collectAllActiveInteractions;
- (void)deregisterAllInteractionsForWindow:(id)arg1;
- (void)deregisterInteraction:(id)arg1;
- (void)registerInteraction:(id)arg1;
- (void)setTrackedInteractions:(id)arg1;
- (long long)subtype;
- (id)trackedInteractions;
- (long long)type;

@end