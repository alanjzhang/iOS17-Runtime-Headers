/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLaneDirectionCollisionCalculator : NSObject {
    NSMutableDictionary * _collisionsForDirection;
    NSNumber * _directionWithMostCollisions;
    NSMutableArray * _directions;
    bool  _hasCollisions;
}

@property (nonatomic, readonly) NSArray *directions;
@property (nonatomic, readonly) bool hasCollisions;
@property (nonatomic, readonly) bool hasDirectionWithMaxCollisions;

- (void).cxx_destruct;
- (void)_recalculateCollisions;
- (id)directions;
- (bool)hasCollisions;
- (bool)hasDirectionWithMaxCollisions;
- (id)initWithDirections:(id)arg1;
- (void)removeDirectionWithCollisionsLeastSimilarToDirection:(int)arg1;
- (void)removeNextDirectionWithCollisions;

@end