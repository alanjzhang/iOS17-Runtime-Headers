/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSGroupedPublisher : NSObject <BPSConnectablePublisher, BPSPublisher> {
    BPSMulticast * _multicast;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BPSMulticast *multicast;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connect;
- (id)initWithUpstream:(id)arg1 createSubject:(id /* block */)arg2;
- (id)multicast;
- (void)setMulticast:(id)arg1;
- (void)subscribe:(id)arg1;

// BPSGroupedPublisher (GroupBy)

- (id)aggregateWithInitial:(id)arg1 nextPartialResult:(id /* block */)arg2;
- (id)subscribeOnKey:(id)arg1;

@end
