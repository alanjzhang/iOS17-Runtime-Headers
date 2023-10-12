/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFeatureProviderImage : NSObject <MLFeatureProvider> {
    struct __CVBuffer { } * buffer;
    NSString * name;
}

@property (nonatomic) struct __CVBuffer { }*buffer;
@property (nonatomic, readonly) NSSet *featureNames;
@property (nonatomic, retain) NSString *name;

- (struct __CVBuffer { }*)buffer;
- (id)featureNames;
- (id)featureValueForName:(id)arg1;
- (id)initWithName:(id)arg1 buffer:(struct __CVBuffer { }*)arg2;
- (id)name;
- (void)setBuffer:(struct __CVBuffer { }*)arg1;
- (void)setName:(id)arg1;

@end
