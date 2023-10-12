/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RoomScanCore.framework/RoomScanCore
 */

@interface RSWallOpeningOfflineDetector : NSObject {
    struct Lcnn_floorplan_detector { 
        int (**_vptr$Lcnn_floorplan_detector)(); 
        struct Unet_fpn_backbone_v1 { 
            int (**_vptr$Unet_fpn_backbone_v1)(); 
            struct IEspresso_Interface_v1 { 
                int (**_vptr$IEspresso_Interface_v1)(); 
                struct map<std::string, espresso_buffer_t *, std::less<std::string>, std::allocator<std::pair<const std::string, espresso_buffer_t *>>> { 
                    struct __tree<std::__value_type<std::string, espresso_buffer_t *>, std::__map_value_compare<std::string, std::__value_type<std::string, espresso_buffer_t *>, std::less<std::string>>, std::allocator<std::__value_type<std::string, espresso_buffer_t *>>> { 
                        void *__begin_node_; 
                        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::string, espresso_buffer_t *>, void *>>> { 
                            struct __tree_end_node<std::__tree_node_base<void *> *> { 
                                void *__left_; 
                            } __value_; 
                        } __pair1_; 
                        struct __compressed_pair<unsigned long, std::__map_value_compare<std::string, std::__value_type<std::string, espresso_buffer_t *>, std::less<std::string>>> { 
                            unsigned long long __value_; 
                        } __pair3_; 
                    } __tree_; 
                } _output_tensor; 
                void *_ctx; 
                void *_plan; 
                struct { 
                    void *plan; 
                    int network_index; 
                } _net; 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned int __cap_ : 63; 
                                    unsigned int __is_long_ : 1; 
                                } __l; 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    unsigned char __padding_[0]; 
                                    unsigned int __size_ : 7; 
                                    unsigned int __is_long_ : 1; 
                                } __s; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } _previous_mode; 
                bool _single_resolution; 
            } _net; 
            struct Lcnn_FC2 { 
                int (**_vptr$Lcnn_FC2)(); 
                struct Tensor<float, 2UL> { 
                    int (**_vptr$Tensor)(); 
                    struct Inside_View<2UL> { 
                        struct Shape<2UL> { 
                            unsigned long long _sp[6]; 
                        } _shape_of_view; 
                        struct Shape<2UL> { 
                            unsigned long long _sp[6]; 
                        } _stride_of_view; 
                        unsigned long long _length_of_view; 
                        unsigned long long _offset_of_view; 
                    } _view; 
                    struct shared_ptr<wt::Storage<float>> { 
                        void *__ptr_; 
                        struct __shared_weak_count {} *__cntrl_; 
                    } _storage; 
                    bool _is_contiguous; 
                    bool _is_empty; 
                    float *_buffer_head; 
                } _fc2_0_weight; 
                struct Tensor<float, 2UL> { 
                    int (**_vptr$Tensor)(); 
                    struct Inside_View<2UL> { 
                        struct Shape<2UL> { 
                            unsigned long long _sp[6]; 
                        } _shape_of_view; 
                        struct Shape<2UL> { 
                            unsigned long long _sp[6]; 
                        } _stride_of_view; 
                        unsigned long long _length_of_view; 
                        unsigned long long _offset_of_view; 
                    } _view; 
                    struct shared_ptr<wt::Storage<float>> { 
                        void *__ptr_; 
                        struct __shared_weak_count {} *__cntrl_; 
                    } _storage; 
                    bool _is_contiguous; 
                    bool _is_empty; 
                    float *_buffer_head; 
                } _fc2_1_weight; 
                struct Tensor<float, 2UL> { 
                    int (**_vptr$Tensor)(); 
                    struct Inside_View<2UL> { 
                        struct Shape<2UL> { 
                            unsigned long long _sp[6]; 
                        } _shape_of_view; 
                        struct Shape<2UL> { 
                            unsigned long long _sp[6]; 
                        } _stride_of_view; 
                        unsigned long long _length_of_view; 
                        unsigned long long _offset_of_view; 
                    } _view; 
                    struct shared_ptr<wt::Storage<float>> { 
                        void *__ptr_; 
                        struct __shared_weak_count {} *__cntrl_; 
                    } _storage; 
                    bool _is_contiguous; 
                    bool _is_empty; 
                    float *_buffer_head; 
                } _fc2_2_weight; 
                struct Tensor<float, 1UL> { 
                    int (**_vptr$Tensor)(); 
                    struct Inside_View<1UL> { 
                        struct Shape<1UL> { 
                            unsigned long long _sp[6]; 
                        } _shape_of_view; 
                        struct Shape<1UL> { 
                            unsigned long long _sp[6]; 
                        } _stride_of_view; 
                        unsigned long long _length_of_view; 
                        unsigned long long _offset_of_view; 
                    } _view; 
                    struct shared_ptr<wt::Storage<float>> { 
                        void *__ptr_; 
                        struct __shared_weak_count {} *__cntrl_; 
                    } _storage; 
                    bool _is_contiguous; 
                    bool _is_empty; 
                    float *_buffer_head; 
                } _fc2_0_bias; 
                struct Tensor<float, 1UL> { 
                    int (**_vptr$Tensor)(); 
                    struct Inside_View<1UL> { 
                        struct Shape<1UL> { 
                            unsigned long long _sp[6]; 
                        } _shape_of_view; 
                        struct Shape<1UL> { 
                            unsigned long long _sp[6]; 
                        } _stride_of_view; 
                        unsigned long long _length_of_view; 
                        unsigned long long _offset_of_view; 
                    } _view; 
                    struct shared_ptr<wt::Storage<float>> { 
                        void *__ptr_; 
                        struct __shared_weak_count {} *__cntrl_; 
                    } _storage; 
                    bool _is_contiguous; 
                    bool _is_empty; 
                    float *_buffer_head; 
                } _fc2_1_bias; 
                struct Tensor<float, 1UL> { 
                    int (**_vptr$Tensor)(); 
                    struct Inside_View<1UL> { 
                        struct Shape<1UL> { 
                            unsigned long long _sp[6]; 
                        } _shape_of_view; 
                        struct Shape<1UL> { 
                            unsigned long long _sp[6]; 
                        } _stride_of_view; 
                        unsigned long long _length_of_view; 
                        unsigned long long _offset_of_view; 
                    } _view; 
                    struct shared_ptr<wt::Storage<float>> { 
                        void *__ptr_; 
                        struct __shared_weak_count {} *__cntrl_; 
                    } _storage; 
                    bool _is_contiguous; 
                    bool _is_empty; 
                    float *_buffer_head; 
                } _fc2_2_bias; 
                int _fc_dim; 
                int _fc_dim1; 
            } _lcnn_fc2; 
            struct Tensor<float, 2UL> { 
                int (**_vptr$Tensor)(); 
                struct Inside_View<2UL> { 
                    struct Shape<2UL> { 
                        unsigned long long _sp[6]; 
                    } _shape_of_view; 
                    struct Shape<2UL> { 
                        unsigned long long _sp[6]; 
                    } _stride_of_view; 
                    unsigned long long _length_of_view; 
                    unsigned long long _offset_of_view; 
                } _view; 
                struct shared_ptr<wt::Storage<float>> { 
                    void *__ptr_; 
                    struct __shared_weak_count {} *__cntrl_; 
                } _storage; 
                bool _is_contiguous; 
                bool _is_empty; 
                float *_buffer_head; 
            } _lambda; 
            struct BackBone_Param { 
                bool single_resolution; 
                struct vector<unsigned long, std::allocator<unsigned long>> { 
                    unsigned long long *__begin_; 
                    unsigned long long *__end_; 
                    struct __compressed_pair<unsigned long *, std::allocator<unsigned long>> { 
                        unsigned long long *__value_; 
                    } __end_cap_; 
                } fixed_input_shape; 
                struct map<std::vector<unsigned long>, std::string, std::less<std::vector<unsigned long>>, std::allocator<std::pair<const std::vector<unsigned long>, std::string>>> { 
                    struct __tree<std::__value_type<std::vector<unsigned long>, std::string>, std::__map_value_compare<std::vector<unsigned long>, std::__value_type<std::vector<unsigned long>, std::string>, std::less<std::vector<unsigned long>>>, std::allocator<std::__value_type<std::vector<unsigned long>, std::string>>> { 
                        void *__begin_node_; 
                        struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<std::vector<unsigned long>, std::string>, void *>>> { 
                            struct __tree_end_node<std::__tree_node_base<void *> *> { 
                                void *__left_; 
                            } __value_; 
                        } __pair1_; 
                        struct __compressed_pair<unsigned long, std::__map_value_compare<std::vector<unsigned long>, std::__value_type<std::vector<unsigned long>, std::string>, std::less<std::vector<unsigned long>>>> { 
                            unsigned long long __value_; 
                        } __pair3_; 
                    } __tree_; 
                } dynamic_input_shape; 
                unsigned long long max_K; 
                float junc_score_thres; 
                float fpn_len_range_max; 
                float fpn_len_range_min; 
                unsigned long long n_pts0; 
                unsigned long long n_pts1; 
                unsigned long long dim_fc; 
                unsigned long long dim_loi; 
                float cls_score_thres; 
                bool filter_line_proposal; 
            } _backbone_param; 
        } _unet_fpn_backbone; 
        struct Lcnn_Floorplan_Post { 
            float *density_buffer; 
            struct lcnn_lines { 
                struct vector<roomscancore::Line<float __attribute__((ext_vector_type(2)))>, std::allocator<roomscancore::Line<float __attribute__((ext_vector_type(2)))>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<roomscancore::Line<float __attribute__((ext_vector_type(2)))> *, std::allocator<roomscancore::Line<float __attribute__((ext_vector_type(2)))>>>="__value_"^v {} lines; 
            } lcnn_lines; 
            struct vector<float, std::allocator<float>> { 
                float *__begin_; 
                float *__end_; 
                struct __compressed_pair<float *, std::allocator<float>> { 
                    float *__value_; 
                } __end_cap_; 
            } scores; 
            unsigned long long num_lines; 
        } _wall_postprocess; 
        struct lcnn_juncs { 
            struct vector<float __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__begin_"^"__end_"^"__end_cap_"{__compressed_pair<float * __attribute__((ext_vector_type(2))), std::allocator<float __attribute__((ext_vector_type(2)))>>="__value_"^ {} juncs; 
        } lcnn_juncs; 
        struct vector<float, std::allocator<float>> { 
            float *__begin_; 
            float *__end_; 
            struct __compressed_pair<float *, std::allocator<float>> { 
                float *__value_; 
            } __end_cap_; 
        } junc_scores; 
        unsigned long long num_juncs; 
    }  _lcnnDetector;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end