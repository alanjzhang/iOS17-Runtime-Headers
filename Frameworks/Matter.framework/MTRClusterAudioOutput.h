/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRClusterAudioOutput : MTRCluster {
    MTRDevice * _device;
    unsigned short  _endpoint;
}

@property (nonatomic, readonly) MTRDevice *device;
@property (nonatomic, readonly) unsigned short endpoint;

// MTRClusterAudioOutput (null)

- (void).cxx_destruct;
- (id)device;
- (unsigned short)endpoint;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)initWithDevice:(id)arg1 endpointID:(id)arg2 queue:(id)arg3;
- (id)readAttributeAcceptedCommandListWithParams:(id)arg1;
- (id)readAttributeAttributeListWithParams:(id)arg1;
- (id)readAttributeClusterRevisionWithParams:(id)arg1;
- (id)readAttributeCurrentOutputWithParams:(id)arg1;
- (id)readAttributeFeatureMapWithParams:(id)arg1;
- (id)readAttributeGeneratedCommandListWithParams:(id)arg1;
- (id)readAttributeOutputListWithParams:(id)arg1;
- (void)renameOutputWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)renameOutputWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)selectOutputWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completion:(id /* block */)arg4;
- (void)selectOutputWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;

@end
