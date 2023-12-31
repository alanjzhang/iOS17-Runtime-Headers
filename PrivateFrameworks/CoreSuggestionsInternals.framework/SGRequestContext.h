/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGRequestContext : NSObject {
    int  _backpressureHazard;
    int  _concurrencyBehavior;
    int  _extractionMode;
    SGServiceContext * _serviceContext;
}

@property (nonatomic, readonly) int backpressureHazard;
@property (nonatomic, readonly) int concurrencyBehavior;
@property (nonatomic, readonly) int extractionMode;
@property (nonatomic, readonly) NSOperationQueue *processingQueue;
@property (nonatomic, readonly) SGServiceContext *serviceContext;
@property (nonatomic, readonly) NSOperationQueue *storageQueue;

- (void).cxx_destruct;
- (int)backpressureHazard;
- (int)concurrencyBehavior;
- (int)extractionMode;
- (id)init;
- (id)initWithServiceContext:(id)arg1 concurrencyBehavior:(int)arg2 backpressureHazard:(int)arg3;
- (id)initWithServiceContext:(id)arg1 concurrencyBehavior:(int)arg2 backpressureHazard:(int)arg3 extractionMode:(int)arg4;
- (id)serviceContext;

// SGRequestContext (PipelineAdditions)

- (id)processingQueue;
- (id)storageQueue;

@end
