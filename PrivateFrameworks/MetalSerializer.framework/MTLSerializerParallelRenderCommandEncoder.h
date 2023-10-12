/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MetalSerializer.framework/MetalSerializer
 */

@interface MTLSerializerParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder <MTLParallelRenderCommandEncoderSPI> {
    id * _encoders;
    unsigned long long  _encodersCount;
    unsigned long long  _encodersSize;
    MTLSerializer * _serializer;
    bool  separateCommits;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label;
@property bool separateCommits;
@property (readonly) MTLSerializer *serializer;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)endEncoding;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2;
- (id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2 serializer:(id)arg3;
- (id)renderCommandEncoder;
- (bool)separateCommits;
- (id)serializer;
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setDepthStoreAction:(unsigned long long)arg1;
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;
- (void)setSeparateCommits:(bool)arg1;
- (void)setStencilStoreAction:(unsigned long long)arg1;
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;

@end