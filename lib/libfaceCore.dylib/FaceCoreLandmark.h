/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/libfaceCore.dylib
 */

@interface FaceCoreLandmark : NSObject {
    unsigned long long  pointCount;
    struct CGPoint { double x1; double x2; } * points;
    NSString * type;
}

@property (readonly) unsigned long long pointCount;
@property (readonly) struct CGPoint { double x1; double x2; }*points;
@property (readonly) NSString *type;

+ (id)landmarkWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(struct CGPoint { double x1; double x2; }*)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithType:(id)arg1 pointCount:(unsigned long long)arg2 points:(struct CGPoint { double x1; double x2; }*)arg3;
- (unsigned long long)pointCount;
- (struct CGPoint { double x1; double x2; }*)points;
- (id)type;

@end
