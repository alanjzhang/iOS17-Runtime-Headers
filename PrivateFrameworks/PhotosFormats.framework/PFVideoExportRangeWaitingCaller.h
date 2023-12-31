/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFVideoExportRangeWaitingCaller : NSObject {
    bool  _cancelled;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _requestedRange;
    bool  _requestedRangeIsAvailable;
    NSObject<OS_dispatch_semaphore> * _semaphore;
}

@property bool cancelled;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } requestedRange;
@property bool requestedRangeIsAvailable;
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;

+ (id)waitingCallerWithRequestedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

- (void).cxx_destruct;
- (bool)canResumeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)cancelled;
- (id)init;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })requestedRange;
- (bool)requestedRangeIsAvailable;
- (void)resume;
- (id)semaphore;
- (void)setCancelled:(bool)arg1;
- (void)setRequestedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRequestedRangeIsAvailable:(bool)arg1;
- (void)setSemaphore:(id)arg1;
- (void)waitWithTimeout:(unsigned long long)arg1;

@end
