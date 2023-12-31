/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationPlayInfoRequestOperation : ICAsyncOperation {
    ICDelegationPlayInfoRequest * _playInfoRequest;
    id /* block */  _responseHandler;
    ICStoreRequestContext * _storeRequestContext;
    ICDelegationPlayInfoRequestOperation * _strongSelf;
}

@property (nonatomic, copy) ICDelegationPlayInfoRequest *playInfoRequest;
@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic, retain) ICStoreRequestContext *storeRequestContext;

- (void).cxx_destruct;
- (void)_finishWithResult:(bool)arg1 tokens:(id)arg2 error:(id)arg3;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (void)finishWithResponse:(id)arg1 requestDate:(id)arg2 error:(id)arg3;
- (id)playInfoRequest;
- (id /* block */)responseHandler;
- (void)setPlayInfoRequest:(id)arg1;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setStoreRequestContext:(id)arg1;
- (id)storeRequestContext;

@end
