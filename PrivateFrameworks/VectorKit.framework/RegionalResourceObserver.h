/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface RegionalResourceObserver : NSObject {
    id  _observer;
    void * _resourceProvider;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _resourceProviderLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearProvider;
- (id)initWithResourceProvider:(void*)arg1;

@end
