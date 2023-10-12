/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSMulticastDownstream : BMBookmarkablePublisher {
    NSNumber * _identifier;
    BPSMulticast * _multicast;
    <BPSSubscriber> * _subscriber;
}

@property (nonatomic, retain) NSNumber *identifier;
@property (nonatomic, readonly) BPSMulticast *multicast;
@property (nonatomic, retain) <BPSSubscriber> *subscriber;

- (void).cxx_destruct;
- (bool)completed;
- (id)identifier;
- (id)initWithMulticast:(id)arg1;
- (id)multicast;
- (id)nextEvent;
- (void)reset;
- (void)setIdentifier:(id)arg1;
- (void)setSubscriber:(id)arg1;
- (id)startWithSubscriber:(id)arg1;
- (id)subscriber;
- (id)upstreamPublishers;

@end