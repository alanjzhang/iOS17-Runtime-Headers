/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOExperimentServerRemoteProxy : NSObject <GEOExperimentServerProxy> {
    <GEOExperimentServerProxyDelegate> * _delegate;
    int  _experimentsChangedToken;
    GEOABAssignmentResponse * _experimentsInfo;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _experimentsInfoLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <GEOExperimentServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) GEOABAssignmentResponse *experimentsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_debug_fetchAllAvailableExperiments:(id /* block */)arg1;
- (void)_debug_setActiveExperimentBranchDictionaryRepresentation:(id)arg1;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)arg1;
- (void)_debug_setQuerySubstring:(id)arg1 forExperimentType:(long long)arg2 dispatcherRequestType:(int)arg3;
- (void)abAssignUUIDWithCompletionHandler:(id /* block */)arg1;
- (void)abAssignUUIDWithSyncCompletionHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)experimentsInfo;
- (void)forceUpdate;
- (id)initWithDelegate:(id)arg1;
- (void)refreshDatasetABStatus:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
