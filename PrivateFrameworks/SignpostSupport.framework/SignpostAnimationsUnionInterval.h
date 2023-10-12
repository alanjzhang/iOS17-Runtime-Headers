/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostAnimationsUnionInterval : NSObject {
    NSMutableArray * _animationIntervals;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _animationTimeRange;
}

@property (nonatomic, retain) NSMutableArray *animationIntervals;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } animationTimeRange;

- (void).cxx_destruct;
- (id)animationIntervals;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })animationTimeRange;
- (id)initWithAnimation:(id)arg1;
- (void)setAnimationIntervals:(id)arg1;
- (void)setAnimationTimeRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
