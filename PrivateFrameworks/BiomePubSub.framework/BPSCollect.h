/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
 */

@interface BPSCollect : BMBookmarkablePublisher {
    NSMutableArray * _results;
    bool  _returned;
    <BPSPublisher> * _upstream;
}

@property (nonatomic, retain) NSMutableArray *results;
@property (nonatomic) bool returned;
@property (nonatomic, readonly) <BPSPublisher> *upstream;

- (void).cxx_destruct;
- (void)applyBookmark:(id)arg1;
- (id)bookmark;
- (bool)completed;
- (id)initWithUpstream:(id)arg1;
- (id)nextEvent;
- (void)reset;
- (id)results;
- (bool)returned;
- (void)setResults:(id)arg1;
- (void)setReturned:(bool)arg1;
- (void)subscribe:(id)arg1;
- (id)upstream;
- (id)upstreamPublishers;
- (id)validateBookmark:(id)arg1;

// BPSCollect (BMBookmarkOperators)

+ (id)publisherWithPublisher:(id)arg1 upstreams:(id)arg2 bookmarkState:(id)arg3;

- (id)bookmarkableUpstreams;
- (bool)canStoreInternalStateInBookmark;

@end
