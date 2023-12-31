/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugTextureLayout : MTLToolsTextureLayout {
    MTLDebugDevice * _debugDevice;
    MTLTextureDescriptor * _descriptor;
}

@property (nonatomic, readonly) MTLDebugDevice *debugDevice;
@property (nonatomic, readonly, copy) MTLTextureDescriptor *descriptor;

- (void)dealloc;
- (id)debugDevice;
- (id)descriptor;
- (id)initWithBaseTextureLayout:(id)arg1 device:(id)arg2 descriptor:(id)arg3;

@end
