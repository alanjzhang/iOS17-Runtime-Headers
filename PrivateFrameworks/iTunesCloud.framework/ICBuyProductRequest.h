/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICBuyProductRequest : ICRequestOperation {
    NSDictionary * _buyParameters;
    bool  _includeKeybagSyncData;
    id  _parsedResponse;
    ICStoreRequestContext * _requestContext;
    ICStoreURLRequest * _storeURLRequest;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 buyParameters:(id)arg2 includeKeybagSyncData:(bool)arg3;
- (id)initWithRequestContext:(id)arg1 buyParametersString:(id)arg2 includeKeybagSyncData:(bool)arg3;
- (void)performRequestWithResponseHandler:(id /* block */)arg1;

@end
