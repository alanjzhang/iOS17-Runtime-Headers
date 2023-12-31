/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLineMarker : VKMarker {
    struct shared_ptr<md::LabelFeatureMarker> { 
        struct LabelFeatureMarker {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _labelFeatureMarker;
}

@property (nonatomic, readonly) NSString *localizedName;

+ (id)markerWithLabelFeatureMarker:(const void*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)featureHandles;
- (id)initWithLabelFeatureMarkerPtr:(const void*)arg1;
- (const void*)labelFeatureMarkerImpl;
- (id)localizedName;

@end
