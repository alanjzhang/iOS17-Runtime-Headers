/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNViewEntityAggregationResult : NSObject {
    NSMutableDictionary * _entitiesByBundleId;
    NSMutableDictionary * _errors;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, readonly, copy) NSDictionary *entities;
@property (nonatomic, readonly, copy) NSError *error;

- (void).cxx_destruct;
- (void)addResults:(id)arg1 error:(id)arg2 forBundle:(id)arg3;
- (id)entities;
- (id)error;
- (id)init;

@end
