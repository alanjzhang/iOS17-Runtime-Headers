/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/USDKit.framework/USDKit
 */

@interface USKPropertyIterator : NSObject <USKIterator> {
    struct __wrap_iter<pxrInternal_v0_22__aapl__pxrReserved__::UsdProperty *> { 
        struct UsdProperty {} *__i_; 
    }  _it;
    struct vector<pxrInternal_v0_22__aapl__pxrReserved__::UsdProperty, std::allocator<pxrInternal_v0_22__aapl__pxrReserved__::UsdProperty>> { 
        struct UsdProperty {} *__begin_; 
        struct UsdProperty {} *__end_; 
        struct __compressed_pair<pxrInternal_v0_22__aapl__pxrReserved__::UsdProperty *, std::allocator<pxrInternal_v0_22__aapl__pxrReserved__::UsdProperty>> { 
            struct UsdProperty {} *__value_; 
        } __end_cap_; 
    }  _properties;
}

// USKPropertyIterator (null)

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithProperties:(const void*)arg1;
- (id)nextObject;

@end
