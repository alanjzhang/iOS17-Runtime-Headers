/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLLight : MDLObject {
    struct CGColorSpace { } * _cgColorSpace;
    NSString * _colorSpace;
    struct RTLight { int (**x1)(); struct CGColor {} *x2; id x3; int x4; } * _light;
    unsigned long long  _lightType;
}

@property (nonatomic, copy) NSString *colorSpace;
@property (nonatomic) unsigned long long lightType;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ModelIO.framework/ModelIO

// MDLLight (null)

- (void).cxx_destruct;
- (id)colorSpace;
- (void)dealloc;
- (id)init;
- (struct CGColor { }*)irradianceAtPoint;
- (struct CGColor { }*)irradianceAtPoint:(void *)arg1 colorSpace:(void *)arg2; // needs 2 arg types, found 1: struct CGColorSpace { }*
- (unsigned long long)lightType;
- (void)position;
- (struct RTLight { int (**x1)(); struct CGColor {} *x2; id x3; int x4; }*)rtLight;
- (void)setColorSpace:(id)arg1;
- (void)setLightType:(unsigned long long)arg1;
- (void)setTransform:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/SceneKit.framework/SceneKit

// MDLLight (SCNModelIO)

+ (id)lightWithSCNLight:(id)arg1;

@end