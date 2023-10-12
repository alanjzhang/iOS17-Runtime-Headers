/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAFrameRateRangeGroup : NSObject

@property (nonatomic, readonly) struct CAFrameRateRange { float x1; float x2; float x3; } arbitratedRange;

- (void)addCompatQuantaIntent;
- (void)addFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)addReason:(unsigned int)arg1;
- (struct CAFrameIntervalRange { unsigned int x1; unsigned int x2; unsigned int x3; })arbitratedIntervalRange;
- (struct CAFrameRateRange { float x1; float x2; float x3; })arbitratedRange;
- (void)dealloc;
- (bool)hasCompatQuantaIntent;
- (id)initWithDisplay:(id)arg1;
- (const unsigned int*)reasonsWithCount:(unsigned int*)arg1;
- (void)removeFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1;
- (void)updateFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 toRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg2;

@end
