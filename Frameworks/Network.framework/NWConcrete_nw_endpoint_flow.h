/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Network.framework/Network
 */

@interface NWConcrete_nw_endpoint_flow : NSObject <OS_nw_endpoint_flow> {
    unsigned int  adaptive_read_count;
    id /* block */  adaptive_read_event_handler;
    unsigned int  adaptive_write_count;
    id /* block */  adaptive_write_event_handler;
    unsigned int  assigned_initial_writes;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * bottom_protocol;
    NSObject<OS_nw_array> * candidate_endpoint_handlers;
    NSObject<OS_nw_channel> * channel;
    NWConcrete_nw_endpoint_handler * child_endpoint_handler;
    NSObject<OS_dispatch_queue> * client_queue;
    NWConcrete_nw_endpoint_flow * clone_from_flow;
    unsigned int  cloned;
    unsigned int  configured_keepalive_count;
    unsigned int  configured_keepalive_interval;
    unsigned int  connected_child_failed;
    unsigned int  connected_child_handles_requests;
    NWConcrete_nw_endpoint_handler * connected_endpoint_handler;
    NSObject<OS_nw_fd_wrapper> * connected_fd_wrapper;
    NSObject<OS_nw_array> * connected_metadata;
    NSObject<OS_nw_path> * connected_path;
    unsigned char  connection_uuid;
    NSObject<OS_nw_array> * connection_wide_metadata;
    unsigned int  custom_protocols_only;
    struct nw_data_transfer_snapshot { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned long long x16; unsigned long long x17; unsigned long long x18; unsigned long long x19; unsigned long long x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; } * data_transfer_snapshot;
    unsigned int  delay_start_child;
    unsigned int  did_add_proxy;
    unsigned int  did_join_protocols;
    unsigned long long  first_keepalive_time;
    NSObject<OS_nw_endpoint> * flow_divert_endpoint;
    NSObject<OS_xpc_object> * flow_divert_token;
    NSObject<OS_nw_path> * flow_path;
    NSObject<OS_nw_path_flow_registration> * flow_registration;
    unsigned int  guard_fd;
    unsigned int  has_connected;
    unsigned int  has_progress_target;
    unsigned int  in_setup_protocols;
    unsigned int  initial_payload_sent;
    unsigned int  initialized_protocol_callbacks;
    NWConcrete_nw_endpoint_flow * internally_retained_object;
    struct nw_protocol_identifier { BOOL x1[32]; int x2; int x3; } * ip_protocol_identifier;
    unsigned int  is_channel;
    unsigned int  is_connected;
    unsigned int  is_empty_root;
    unsigned int  is_flow_divert;
    unsigned int  is_leaf_flow_handler;
    unsigned int  is_multipath;
    unsigned int  is_root_flow_handler;
    unsigned int  is_viable;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * joined_protocol;
    unsigned int  keepalive_count;
    unsigned int  keepalive_event_enabled;
    id /* block */  keepalive_event_handler;
    NSObject<OS_nw_error> * last_error;
    struct nw_listen_protocol_callbacks { 
        int (*new_flow)(); 
        int (*disconnected)(); 
    }  listen_callbacks;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    id /* block */  metadata_changed_event_handler;
    unsigned int  multilayer_packet_logging;
    unsigned int  multipath_nat64_query_outstanding;
    struct nw_hash_table { } * multiplexed_flow_table;
    NSObject<OS_nw_protocol_definition> * multiplexed_message_definition;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * multiplexed_message_protocol;
    NSObject<OS_nw_read_request> * new_flow_read_requests;
    unsigned int  path_is_direct;
    unsigned int  pending_write_bytes;
    int  pre_connected_fd;
    struct nw_protocol_callbacks { 
        int (*add_input_handler)(); 
        int (*remove_input_handler)(); 
        int (*replace_input_handler)(); 
        int (*connect)(); 
        int (*disconnect)(); 
        int (*connected)(); 
        int (*disconnected)(); 
        int (*error)(); 
        int (*input_available)(); 
        int (*output_available)(); 
        int (*get_input_frames)(); 
        int (*get_output_frames)(); 
        int (*finalize_output_frames)(); 
        int (*link_state)(); 
        int (*get_parameters)(); 
        int (*get_path)(); 
        int (*get_local_endpoint)(); 
        int (*get_remote_endpoint)(); 
        int (*register_notification)(); 
        int (*unregister_notification)(); 
        int (*notify)(); 
        int (*updated_path)(); 
        int (*supports_external_data)(); 
        int (*input_finished)(); 
        int (*output_finished)(); 
        int (*get_output_local_endpoint)(); 
        int (*get_output_interface)(); 
        int (*waiting_for_output)(); 
        int (*copy_info)(); 
        int (*add_listen_handler)(); 
        int (*remove_listen_handler)(); 
        int (*get_message_properties)(); 
        int (*reset)(); 
        int (*input_flush)(); 
    }  protocol_callbacks;
    struct nw_protocol_identifier { 
        BOOL name[32]; 
        int level; 
        int mapping; 
    }  protocol_identifier;
    unsigned short  protocol_log_id_num;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * proxy_protocol;
    id /* block */  read_close_handler;
    unsigned int  rebuild_stack;
    unsigned long long  received_application_byte_count;
    unsigned int  reported_do_not_reuse;
    unsigned int  restart_count;
    NSObject<OS_nw_endpoint> * saved_original_endpoint;
    unsigned long long  sent_application_byte_count;
    unsigned int  setup_protocols;
    struct nw_flow_protocol { 
        struct nw_protocol { 
            unsigned char flow_id[16]; 
            struct nw_protocol_identifier {} *identifier; 
            struct nw_protocol_callbacks {} *callbacks; 
            struct nw_protocol {} *output_handler; 
            void *handle; 
            struct nw_protocol {} *default_input_handler; 
            void *output_handler_context; 
        } protocol; 
        struct nw_listen_protocol { 
            struct nw_listen_protocol_callbacks {} *callbacks; 
            struct nw_protocol {} *protocol_handler; 
            void *protocol_handler_context; 
            void *handle; 
        } listen_protocol; 
        struct nw_protocol { 
            unsigned char flow_id[16]; 
            struct nw_protocol_identifier {} *identifier; 
            struct nw_protocol_callbacks {} *callbacks; 
            struct nw_protocol {} *output_handler; 
            void *handle; 
            struct nw_protocol {} *default_input_handler; 
            void *output_handler_context; 
        } replay_protocol; 
        NWConcrete_nw_endpoint_handler *handler; 
        NWConcrete_nw_endpoint_flow *retained_flow; 
        NSObject<OS_nw_parameters> *parameters; 
        NSObject<OS_nw_context> *context; 
        NSObject<OS_nw_write_request> *write_requests; 
        NSObject<OS_nw_write_request> *initial_write_requests; 
        NSObject<OS_nw_write_request> *cloned_initial_write_requests; 
        NSObject<OS_nw_read_request> *read_requests; 
        NSObject<OS_nw_content_context> *last_output_context; 
        NSObject<OS_nw_protocol_metadata> *metadata; 
        NSObject<OS_nw_protocol_metadata> *input_metadata; 
        NSObject<OS_nw_content_context> *output_context; 
        NSObject<OS_nw_dictionary> *input_contexts; 
        NSObject<OS_nw_content_context> *single_input_context; 
        struct nw_frame_array_s { 
            struct nw_frame {} *tqh_first; 
            struct nw_frame {} **tqh_last; 
        } pending_input_frames; 
        struct nw_hash_table {} *candidate_output_handlers; 
        struct nw_frame_array_s { 
            struct nw_frame {} *tqh_first; 
            struct nw_frame {} **tqh_last; 
        } fast_open_frames; 
        NSObject<OS_nw_array> *final_read_list; 
        NSObject<OS_nw_error> *last_error; 
        unsigned int fast_open_frame_finalized_count; 
        unsigned int initialized : 1; 
        unsigned int last_output_context_pending : 1; 
        unsigned int servicing_reads : 1; 
        unsigned int input_finished : 1; 
        unsigned int waiting_for_initial_read : 1; 
        unsigned int deferred_final_read : 1; 
        unsigned int delivered_final_read : 1; 
        unsigned int flow_unregistered : 1; 
        unsigned int flow_disconnected : 1; 
        unsigned int waiting_for_connected : 1; 
        unsigned int in_fast_open : 1; 
        unsigned int unused : 5; 
        unsigned char __pad[2]; 
    }  shared_protocol;
    unsigned int  should_ignore_path_result;
    unsigned int  should_start_child;
    struct _DNSServiceRef_t { } * sleep_proxy_ref;
    unsigned int  snapshot_count;
    unsigned long long  snapshot_length;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * socket_protocol;
    unsigned int  started;
    unsigned int  started_protocols;
    struct tcp_connection_info { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22 : 1; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28 : 1; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; unsigned int x32 : 17; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned long long x39; } * tcp_connection_info;
    struct tcp_info { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; unsigned int x13; unsigned int x14; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; int x19; unsigned int x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; unsigned long long x24; unsigned long long x25; unsigned long long x26; unsigned long long x27; unsigned long long x28; unsigned long long x29; unsigned char x30; unsigned char x31; unsigned short x32; unsigned long long x33; unsigned long long x34; unsigned long long x35; unsigned long long x36; unsigned long long x37; unsigned long long x38; unsigned long long x39; unsigned long long x40; unsigned long long x41; unsigned long long x42; unsigned long long x43; unsigned long long x44; struct tcp_conn_status { union { struct { unsigned int x_1_3_1 : 1; unsigned int x_1_3_2 : 1; unsigned int x_1_3_3 : 1; unsigned int x_1_3_4 : 1; } x_1_2_1; unsigned int x_1_2_2; } x_45_1_1; } x45; } * tcp_info;
    struct nw_protocol { unsigned char x1[16]; struct nw_protocol_identifier {} *x2; struct nw_protocol_callbacks {} *x3; struct nw_protocol {} *x4; void *x5; struct nw_protocol {} *x6; void *x7; } * transport_protocol;
    id /* block */  write_close_handler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)applyWithHandler:(id)arg1 toChildren:(id /* block */)arg2;
- (void)cancelWithHandler:(id)arg1 forced:(bool)arg2;
- (void)dealloc;
- (id)init;
- (void)startWithHandler:(id)arg1;
- (void)updatePathWithHandler:(id)arg1;

@end
