/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTCellularData : NSObject {
    id /* block */  _cellularDataRestrictionDidUpdateNotifier;
    struct network_usage_policy_client_s { } * _cuPolicyClient;
    struct queue { 
        struct object { 
            struct dispatch_object_s {} *fObj; 
        } fObj; 
    }  _cuPolicyClientQueue;
    unsigned long long  _restrictedState;
}

@property (copy) id /* block */ cellularDataRestrictionDidUpdateNotifier;
@property (nonatomic, readonly) unsigned long long restrictedState;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id /* block */)cellularDataRestrictionDidUpdateNotifier;
- (void)dealloc;
- (id)init;
- (unsigned long long)restrictedState;
- (void)setCellularDataRestrictionDidUpdateNotifier:(id /* block */)arg1;
- (void)setCellularDataRestrictionStateFromPolicies:(void*)arg1;

@end
