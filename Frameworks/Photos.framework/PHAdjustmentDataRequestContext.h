/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAdjustmentDataRequestContext : PHMediaRequestContext {
    PHImageRequestOptions * _options;
}

@property (nonatomic, readonly) PHImageRequestOptions *options;

- (void).cxx_destruct;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 options:(id)arg4 resultHandler:(id /* block */)arg5;
- (id)initialRequests;
- (bool)isNetworkAccessAllowed;
- (id)options;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (long long)type;

@end
