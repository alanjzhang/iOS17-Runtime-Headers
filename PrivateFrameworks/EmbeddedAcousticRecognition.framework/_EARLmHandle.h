/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

@interface _EARLmHandle : NSObject {
    struct shared_ptr<kaldi::quasar::LmHandle> { 
        struct LmHandle {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _handle;
}

@property (nonatomic, readonly) struct shared_ptr<kaldi::quasar::LmHandle> { struct LmHandle {} *x1; struct __shared_weak_count {} *x2; } handle;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithHandle:(struct shared_ptr<kaldi::quasar::LmHandle> { struct LmHandle {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<kaldi::quasar::LmHandle> { struct LmHandle {} *x1; struct __shared_weak_count {} *x2; })handle;

@end
