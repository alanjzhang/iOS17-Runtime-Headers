/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VideoScaler : NSObject {
    VCPixelTransferSession * _pixelTransferSession;
}

- (int)convertAndScalePixelBuffer:(struct __CVBuffer { }*)arg1 toWidth:(int)arg2 toHeight:(int)arg3 withPixelFormat:(unsigned int)arg4 usingPixelBufferPool:(struct __CVPixelBufferPool { }*)arg5 andStoreTo:(struct __CVBuffer {}**)arg6;
- (void)dealloc;
- (id)init;

@end
