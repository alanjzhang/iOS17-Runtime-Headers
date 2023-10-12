/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VisualIntelligence.framework/VisualIntelligence
 */

@interface VIStreamingSignalExtractionRequest : NSObject {
    VIStreamingFrame * _highResolutionFrame;
    NSUUID * _objectUUID;
    VIQueryContext * _queryContext;
}

@property (nonatomic, readonly) VIStreamingFrame *highResolutionFrame;
@property (nonatomic, readonly) NSUUID *objectUUID;
@property (nonatomic, readonly) VIQueryContext *queryContext;

- (void).cxx_destruct;
- (id)highResolutionFrame;
- (id)initWithObjectUUID:(id)arg1 highResolutionFrame:(id)arg2 queryContext:(id)arg3;
- (id)objectUUID;
- (id)queryContext;

@end
