/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/MetalPerformanceShadersGraph.framework/MetalPerformanceShadersGraph
 */

@interface MPSGraphMaxPool4DGradientOp : MPSGraphPooling4DBaseOp {
    bool  _gradientWithIndices;
}

// MPSGraphMaxPool4DGradientOp (null)

- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 descriptor:(id)arg4 gradientWithIndices:(bool)arg5 name:(id)arg6;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;

@end
