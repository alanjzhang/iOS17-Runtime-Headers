/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPageControlDurationProgress : UIPageControlTimerProgress {
    struct { 
        unsigned int shouldAdvanceToPageSPI : 1; 
    }  _delegateImplements;
}

@property (nonatomic) <_UIPageControlDurationProgressDelegate> *delegate;
@property (nonatomic) double pageDuration;
@property (nonatomic) bool resetsToInitialPageAtEnd;

- (bool)_shouldAdvanceToPage:(long long)arg1;
- (id)initWithPageDuration:(double)arg1;
- (double)pageDuration;
- (double)pageDurationForPage:(long long)arg1;
- (void)pause;
- (bool)resetsToInitialPageAtEnd;
- (void)resume;
- (void)setCustomPageDuration:(double)arg1 forPage:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setPageDuration:(double)arg1;
- (void)setResetsToInitialPageAtEnd:(bool)arg1;

@end
