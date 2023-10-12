/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLBlitPassSampleBufferAttachmentDescriptorInternal : MTLBlitPassSampleBufferAttachmentDescriptor {
    struct MTLBlitPassSampleBufferAttachmentDescriptorPrivate { 
        <MTLCounterSampleBuffer> *sampleBuffer; 
        unsigned long long startOfEncoderSampleIndex; 
        unsigned long long endOfEncoderSampleIndex; 
    }  _private;
}

- (const struct MTLBlitPassSampleBufferAttachmentDescriptorPrivate { id x1; unsigned long long x2; unsigned long long x3; }*)_descriptorPrivate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)endOfEncoderSampleIndex;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)sampleBuffer;
- (void)setEndOfEncoderSampleIndex:(unsigned long long)arg1;
- (void)setSampleBuffer:(id)arg1;
- (void)setStartOfEncoderSampleIndex:(unsigned long long)arg1;
- (unsigned long long)startOfEncoderSampleIndex;

@end
