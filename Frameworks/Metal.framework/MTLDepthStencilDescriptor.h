/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDepthStencilDescriptor : NSObject <NSCopying>

@property (nonatomic, copy) MTLStencilDescriptor *backFaceStencil;
@property (nonatomic) unsigned long long depthCompareFunction;
@property (readonly) const struct MTLDepthStencilDescriptorPrivate { id x1; id x2; unsigned long long x3; bool x4; id x5; }*depthStencilPrivate;
@property (getter=isDepthWriteEnabled, nonatomic) bool depthWriteEnabled;
@property (nonatomic, copy) MTLStencilDescriptor *frontFaceStencil;
@property (nonatomic, copy) NSString *label;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
