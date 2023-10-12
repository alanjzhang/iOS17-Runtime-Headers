/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
 */

@interface TXRArrayElement : NSObject <NSCopying> {
    NSMutableArray * _faces;
}

@property (readonly) NSArray *faces;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)faces;
- (id)initAsLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 cubemap:(bool)arg3 dataSourceProvider:(id)arg4;
- (id)initAsLevel:(void *)arg1 element:(void *)arg2 dimensions:(void *)arg3 pixelFormat:(void *)arg4 alphaInfo:(void *)arg5 cubemap:(void *)arg6 bufferAllocator:(void *)arg7; // needs 7 arg types, found 6: unsigned long long, unsigned long long, unsigned long long, unsigned long long, bool, id
- (void)setImage:(id)arg1 atFace:(unsigned long long)arg2;

@end
