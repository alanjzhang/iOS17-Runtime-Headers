/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTEstimatedLocationOptions : NSObject <NSSecureCoding> {
    double  _averageSpeed;
    bool  _enableFallbackModel;
    double  _timeInterval;
}

@property (nonatomic, readonly) double averageSpeed;
@property (nonatomic, readonly) bool enableFallbackModel;
@property (nonatomic, readonly) double timeInterval;

+ (bool)supportsSecureCoding;

- (double)averageSpeed;
- (bool)enableFallbackModel;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAverageSpeed:(double)arg1 enableFallbackModel:(bool)arg2 timeInterval:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (double)timeInterval;

@end
