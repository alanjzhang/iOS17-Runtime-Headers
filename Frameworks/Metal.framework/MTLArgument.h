/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLArgument : NSObject {
    MTLArgument * _bufferIndirectArgumentType;
    unsigned long long  _indirectConstantAlignment;
    unsigned long long  _indirectConstantDataSize;
    unsigned long long  _indirectConstantDataType;
}

@property (readonly) unsigned long long access;
@property (getter=isActive, readonly) bool active;
@property (readonly) unsigned long long arrayLength;
@property (readonly) unsigned long long bufferAlignment;
@property (readonly) unsigned long long bufferDataSize;
@property (readonly) unsigned long long bufferDataType;
@property (readonly) MTLArgument *bufferIndirectArgumentType;
@property (readonly) MTLPointerType *bufferPointerType;
@property (readonly) MTLStructType *bufferStructType;
@property (readonly) unsigned long long index;
@property (readonly) unsigned long long indirectConstantAlignment;
@property (readonly) unsigned long long indirectConstantDataSize;
@property (readonly) unsigned long long indirectConstantDataType;
@property (readonly) bool isDepthTexture;
@property (readonly) NSString *name;
@property (readonly) unsigned long long textureDataType;
@property (readonly) unsigned long long textureType;
@property (readonly) unsigned long long threadgroupMemoryAlignment;
@property (readonly) unsigned long long threadgroupMemoryDataSize;
@property (readonly) unsigned long long type;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)bufferIndirectArgumentType;
- (unsigned long long)indirectConstantAlignment;
- (unsigned long long)indirectConstantDataSize;
- (unsigned long long)indirectConstantDataType;

@end
