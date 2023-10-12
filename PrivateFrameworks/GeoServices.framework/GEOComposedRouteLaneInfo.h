/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOComposedRouteLaneInfo : NSObject <NSSecureCoding> {
    NSMutableArray * _directions;
    bool  _good;
    bool  _hov;
    bool  _preferred;
}

@property (nonatomic, readonly) NSArray *directions;
@property (nonatomic, readonly) bool hasDirections;
@property (nonatomic, readonly) bool isHOVLane;
@property (nonatomic, readonly) bool isLaneForManeuver;
@property (nonatomic, readonly) bool isPreferredLaneForManeuver;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)directions;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDirections;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLaneInfo:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHOVLane;
- (bool)isLaneForManeuver;
- (bool)isPreferredLaneForManeuver;

@end
