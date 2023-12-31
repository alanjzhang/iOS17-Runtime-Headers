/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareUpdatesRequest : SSRequest {
    SSSoftwareUpdatesContext * _context;
}

@property (nonatomic) <SSSoftwareUpdatesRequestDelegate> *delegate;
@property (readonly) SSSoftwareUpdatesContext *updateQueueContext;

- (id)copyXPCEncoding;
- (void)dealloc;
- (id)initWithUpdateQueueContext:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)start;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithUpdatesResponseBlock:(id /* block */)arg1;
- (id)updateQueueContext;

@end
