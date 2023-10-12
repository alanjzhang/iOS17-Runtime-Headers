/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNPersonSegmentationGeneratorLearnedMattingTiled : VNPersonSegmentationGeneratorLearnedMatting {
    <MTLComputePipelineState> * _createTileWithScaleComputePipelineState;
    <MTLComputePipelineState> * _pasteTileComputePipelineState;
    VNMetalContext * _postProcessingMetalContext;
}

+ (id)computeStagesToBindForConfigurationOptions:(id)arg1;
+ (id)espressoModelFileNameForConfigurationOptions:(id)arg1;
+ (id)supportedComputeStageDevicesForOptions:(id)arg1 error:(id*)arg2;
+ (bool)supportsTiling;

- (void).cxx_destruct;
- (id)_bindPixelBufferToTexture:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (struct BufferSize { unsigned long long x1; unsigned long long x2; })_calculateNumberOfTilesForNetworkInputImageSize:(struct BufferSize { unsigned long long x1; unsigned long long x2; })arg1 networkInputMaskSize:(struct BufferSize { unsigned long long x1; unsigned long long x2; })arg2 networkOutputMaskSize:(struct BufferSize { unsigned long long x1; unsigned long long x2; })arg3 rotated:(bool)arg4;
- (struct optional<std::tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>>> { union { BOOL x_1_1_1; struct tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>> { struct __tuple_impl<std::__tuple_indices<0, 1>, std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>> { struct unordered_map<NSString *, __CVBuffer *, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, __CVBuffer *>>> { struct __hash_table<std::__hash_value_type<NSString *, __CVBuffer *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, __CVBuffer *>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, __CVBuffer *>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, __CVBuffer *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *>>> { void **x_1_7_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *>> { unsigned long long x_1_9_1; } x_2_8_1; } x_1_7_2; } x_1_6_1; } x_1_5_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> { void *x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; })_processTiledImageBuffer:(id)arg1 inputMaskObservation:(id)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 error:(id*)arg5;
- (bool)completeInitializationForSession:(id)arg1 error:(id*)arg2;
- (struct BufferSize { unsigned long long x1; unsigned long long x2; })outputMaskSize;
- (struct optional<std::tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>>> { union { BOOL x_1_1_1; struct tuple<std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>> { struct __tuple_impl<std::__tuple_indices<0, 1>, std::unordered_map<NSString *, __CVBuffer *>, std::unordered_map<NSString *, espresso_buffer_t>> { struct unordered_map<NSString *, __CVBuffer *, std::hash<NSString *>, std::equal_to<NSString *>, std::allocator<std::pair<NSString *const, __CVBuffer *>>> { struct __hash_table<std::__hash_value_type<NSString *, __CVBuffer *>, std::__unordered_map_hasher<NSString *, std::__hash_value_type<NSString *, __CVBuffer *>, std::hash<NSString *>, std::equal_to<NSString *>>, std::__unordered_map_equal<NSString *, std::__hash_value_type<NSString *, __CVBuffer *>, std::equal_to<NSString *>, std::hash<NSString *>>, std::allocator<std::__hash_value_type<NSString *, __CVBuffer *>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *>>> { struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> **, std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *>>> { void **x_1_7_1; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *>> { struct __compressed_pair<unsigned long, std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> *>> { unsigned long long x_1_9_1; } x_2_8_1; } x_1_7_2; } x_1_6_1; } x_1_5_1; struct __compressed_pair<std::__hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *>, std::allocator<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *>>> { struct __hash_node_base<std::__hash_node<std::__hash_value_type<NSString *, __CVBuffer *>, void *> *> { void *x_1_7_1; } x_2_6_1; } x_1_5_2; } x_1_4_1; } x_1_3_1; } x_2_2_1; } x_1_1_2; } x1; })processLockedImageBuffer:(struct __CVBuffer { }*)arg1 inputMaskObservation:(id)arg2 options:(id)arg3 qosClass:(unsigned int)arg4 error:(id*)arg5;

@end
