/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLMotionKeyframeData : NSObject {
    <MTLBuffer> * _buffer;
    unsigned long long  _offset;
}

@property (nonatomic, retain) <MTLBuffer> *buffer;
@property (nonatomic) unsigned long long offset;

+ (id)data;

- (id)buffer;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)offset;
- (void)setBuffer:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;

@end
