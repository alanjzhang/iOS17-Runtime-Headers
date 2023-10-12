/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
 */

@interface ASCJitterBackoff : NSObject <ASCBackoff> {
    ASCExponentialBackoff * _exponentialBackoff;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) ASCExponentialBackoff *exponentialBackoff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)exponentialBackoff;
- (id)initWithBaseSleepTimeInterval:(double)arg1 maxSleepTimeInterval:(double)arg2;
- (double)nextSleepTimeInterval;
- (void)reset;

@end
