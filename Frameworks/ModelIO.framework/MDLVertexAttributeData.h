/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLVertexAttributeData : NSObject {
    unsigned long long  _bufferSize;
    void * _dataStart;
    unsigned long long  _format;
    MDLMeshBufferMap * _map;
    unsigned long long  _stride;
}

@property (nonatomic) unsigned long long bufferSize;
@property (nonatomic) void*dataStart;
@property (nonatomic) unsigned long long format;
@property (nonatomic, retain) MDLMeshBufferMap *map;
@property (nonatomic) unsigned long long stride;

// MDLVertexAttributeData (null)

- (void).cxx_destruct;
- (unsigned long long)bufferSize;
- (void*)dataStart;
- (unsigned long long)format;
- (id)init;
- (id)map;
- (void)setBufferSize:(unsigned long long)arg1;
- (void)setDataStart:(void*)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (void)setMap:(id)arg1;
- (void)setStride:(unsigned long long)arg1;
- (void)setbufferSize:(unsigned long long)arg1;
- (unsigned long long)stride;

@end
