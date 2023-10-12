/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNReplicatorConstraint : SCNConstraint {
    struct SCNVector4 { 
        float x; 
        float y; 
        float z; 
        float w; 
    }  _orientationOffset;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _positionOffset;
    bool  _replicateOrientation;
    bool  _replicatePosition;
    bool  _replicateScale;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _scaleOffset;
    SCNNode * _target;
}

@property (nonatomic) struct SCNVector4 { float x1; float x2; float x3; float x4; } orientationOffset;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } positionOffset;
@property (nonatomic) bool replicatesOrientation;
@property (nonatomic) bool replicatesPosition;
@property (nonatomic) bool replicatesScale;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } scaleOffset;
@property (nonatomic, retain) SCNNode *target;

+ (id)replicatorConstraint;
+ (id)replicatorConstraintWithTarget:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfSCNReplicatorConstraint:(id)arg1;
- (void)_customEncodingOfSCNReplicatorConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })orientationOffset;
- (struct SCNVector3 { float x1; float x2; float x3; })positionOffset;
- (bool)replicatesOrientation;
- (bool)replicatesPosition;
- (bool)replicatesScale;
- (struct SCNVector3 { float x1; float x2; float x3; })scaleOffset;
- (void)setOrientationOffset:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;
- (void)setPositionOffset:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setReplicatesOrientation:(bool)arg1;
- (void)setReplicatesPosition:(bool)arg1;
- (void)setReplicatesScale:(bool)arg1;
- (void)setScaleOffset:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
