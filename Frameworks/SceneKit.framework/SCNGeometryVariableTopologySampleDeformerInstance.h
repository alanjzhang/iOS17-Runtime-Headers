/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNGeometryVariableTopologySampleDeformerInstance : NSObject <SCNGeometryDeformerInstance> {
    SCNMTLMesh * _deformedMesh;
    <MTLBuffer> * _deformedPrimitiveCountBuffer;
    <MTLBuffer> * _drawIndexedPrimitivesIndirectBuffer;
    SCNMTLComputePipeline * _finalizeComputePipeline;
    NSMutableArray * _meshElementData;
    unsigned long long  _mode;
    <MTLBuffer> * _positionBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)meshForDeformedTopology;
- (unsigned long long)updateWithContext:(id)arg1;

@end
