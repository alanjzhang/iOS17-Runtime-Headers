/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsJointWeld : PKPhysicsJoint {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchor;
    struct b2WeldJoint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; struct b2Vec2 { float x_12_1_1; float x_12_1_2; } x12; struct b2Vec2 { float x_13_1_1; float x_13_1_2; } x13; float x14; struct b2Vec3 { float x_15_1_1; float x_15_1_2; float x_15_1_3; } x15; int x16; int x17; struct b2Vec2 { float x_18_1_1; float x_18_1_2; } x18; struct b2Vec2 { float x_19_1_1; float x_19_1_2; } x19; struct b2Vec2 { float x_20_1_1; float x_20_1_2; } x20; struct b2Vec2 { float x_21_1_1; float x_21_1_2; } x21; float x22; float x23; float x24; float x25; struct b2Mat33 { struct b2Vec3 { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_26_1_1; struct b2Vec3 { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_26_1_2; struct b2Vec3 { float x_3_2_1; float x_3_2_2; float x_3_2_3; } x_26_1_3; } x26; } * _joint;
    struct b2WeldJointDef { 
        int type; 
        void *userData; 
        struct b2Body {} *bodyA; 
        struct b2Body {} *bodyB; 
        bool collideConnected; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } localAnchorA; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } localAnchorB; 
        float referenceAngle; 
    }  _jointDef;
}

+ (id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { double x1; double x2; })arg3;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; }*)_joint;
- (struct b2JointDef { int x1; void *x2; struct b2Body {} *x3; struct b2Body {} *x4; bool x5; }*)_jointDef;
- (void)create;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(struct CGPoint { double x1; double x2; })arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqualToWeldJoint:(id)arg1;
- (void)set_joint:(struct b2Joint { int (**x1)(); int x2; struct b2Joint {} *x3; struct b2Joint {} *x4; struct b2JointEdge { struct b2Body {} *x_5_1_1; struct b2Joint {} *x_5_1_2; struct b2JointEdge {} *x_5_1_3; struct b2JointEdge {} *x_5_1_4; } x5; struct b2JointEdge { struct b2Body {} *x_6_1_1; struct b2Joint {} *x_6_1_2; struct b2JointEdge {} *x_6_1_3; struct b2JointEdge {} *x_6_1_4; } x6; struct b2Body {} *x7; struct b2Body {} *x8; bool x9; bool x10; void *x11; }*)arg1;

@end
