/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICAddToWishListRequest : ICRequestOperation {
    NSString * _buyParams;
    NSString * _itemKind;
    NSString * _itemName;
    ICStoreRequestContext * _requestContext;
    ICAddToWishListResponse * _response;
    long long  _storeItemID;
}

- (void).cxx_destruct;
- (void)execute;
- (id)initWithRequestContext:(id)arg1 buyParams:(id)arg2 storeItemID:(long long)arg3 itemName:(id)arg4 itemKind:(id)arg5;
- (id)initWithRequestContext:(id)arg1 platformMetadataItem:(id)arg2;
- (void)performWithResponseHandler:(id /* block */)arg1;

@end
