/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppAnalytics.framework/AppAnalytics
 */

@interface AATimestampJitter : NSObject {
    void enabled;
    void lowerBound;
    void upperBound;
}

@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) double lowerBound;
@property (nonatomic, readonly) double upperBound;

+ (id)default;

- (void).cxx_destruct;
- (bool)enabled;
- (id)init;
- (double)lowerBound;
- (double)upperBound;
- (id)withEnabled:(bool)arg1;
- (id)withLowerBound:(double)arg1;
- (id)withUpperBound:(double)arg1;

@end
