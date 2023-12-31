/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSScan : BMBookmarkablePublisher {
    id  _initialResult;
    id /* block */  _nextPartialResult;
    id  _result;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, readonly) id initialResult;
@property (nonatomic, readonly, copy) id /* block */ nextPartialResult;
@property (nonatomic, retain) id result;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (id)initWithUpstream:(id)arg1 initialResult:(id)arg2 nextPartialResult:(id /* block */)arg3;
- (id)initialResult;
- (id)nextEvent;
- (id /* block */)nextPartialResult;
- (void)reset;
- (id)result;
- (void)setResult:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;

// BPSScan (BMBookmarkOperators)

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;
- (bool)canStorePassThroughValueInBookmark;

@end
