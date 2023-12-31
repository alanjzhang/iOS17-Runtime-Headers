/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSLocationOfInterestVisit : NSObject <NSSecureCoding> {
    double  _confidence;
    NSUUID * _identifier;
    CLSLocationOfInterest * _locationOfInterest;
    NSDateInterval * _visitInterval;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) CLSLocationOfInterest *locationOfInterest;
@property (nonatomic, readonly) NSDateInterval *visitInterval;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 visitInterval:(id)arg2 confidence:(double)arg3;
- (bool)isEqual:(id)arg1;
- (id)locationOfInterest;
- (void)setLocationOfInterest:(id)arg1;
- (id)visitInterval;

@end
