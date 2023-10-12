/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKMerchantLookupRequest : NSObject {
    NSObject<OS_dispatch_queue> * _internalQueue;
    MKMapService * _service;
    <PKMerchantLookupRequestSource> * _source;
}

- (void).cxx_destruct;
- (id)_brandFromMapItem:(id)arg1;
- (void)_mapItemBrandWithMUID:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)_mapsDataWithResponse:(id)arg1 searchMapItem:(id)arg2 completion:(id /* block */)arg3;
- (id)_merchantFromMapItem:(id)arg1;
- (id)initWithSource:(id)arg1;
- (void)startLookupWithCompletion:(id /* block */)arg1;

@end
