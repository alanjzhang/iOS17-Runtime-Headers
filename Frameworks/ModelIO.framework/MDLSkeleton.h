/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLSkeleton : MDLObject <NSCopying> {
    MDLMatrix4x4Array * _jointBindTransforms;
    NSArray * _jointPaths;
    MDLMatrix4x4Array * _jointRestTransforms;
}

@property (nonatomic, readonly) MDLMatrix4x4Array *jointBindTransforms;
@property (nonatomic, readonly) NSArray *jointPaths;
@property (nonatomic, readonly) MDLMatrix4x4Array *jointRestTransforms;

// MDLSkeleton (null)

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithName:(id)arg1 jointPaths:(id)arg2;
- (id)jointBindTransforms;
- (id)jointPaths;
- (id)jointRestTransforms;

@end