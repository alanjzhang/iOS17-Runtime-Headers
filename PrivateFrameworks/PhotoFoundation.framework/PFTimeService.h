/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFTimeService : NSObject <PFTimeService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) double timeIntervalSinceReferenceDate;

+ (id)defaultTimeService;

- (unsigned long long)clock_gettime_nsec_np:(int)arg1;
- (void)sleepForTimeInterval:(double)arg1;
- (double)timeIntervalSinceReferenceDate;

@end
