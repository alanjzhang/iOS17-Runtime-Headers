/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLDaemonJob : NSObject <NSSecureCoding> {
    PLAssetsdClient * _assetsdClient;
    NSXPCConnection * _clientConnection;
    PLLibraryServicesManager * _libraryServicesManager;
    id /* block */  _replyHandler;
    unsigned long long  _signpostId;
    PLXPCTransaction * _transaction;
    NSObject<OS_xpc_object> * _xpcReply;
}

@property (nonatomic, readonly) PLAssetsdClient *assetsdClient;
@property (nonatomic, retain) NSXPCConnection *clientConnection;
@property (nonatomic, retain) PLLibraryServicesManager *libraryServicesManager;
@property (nonatomic, copy) id /* block */ replyHandler;
@property (nonatomic) NSObject<OS_xpc_object> *xpcReply;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcReply;

- (void).cxx_destruct;
- (id)assetsdClient;
- (id)clientConnection;
- (id)description;
- (id)init;
- (id)initWithAssetsdClient:(id)arg1;
- (void)run;
- (void)setClientConnection:(id)arg1;
- (void)setXpcReply:(id)arg1;
- (id)xpcReply;

// PLDaemonJob (DaemonCommunication)

+ (void)runDaemonSideWithXPCEvent:(id)arg1 libraryServicesManager:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)archiveXPCToDisk:(id)arg1;
- (long long)daemonOperation;
- (void)encodeToXPCObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)handleReply;
- (id)initFromXPCObject:(id)arg1 libraryServicesManager:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)libraryServicesManager;
- (id)newDictionaryReplyForObject:(id)arg1;
- (id /* block */)replyHandler;
- (void)runDaemonSide;
- (void)sendToAssetsd;
- (void)sendToAssetsdWithReply;
- (void)setLibraryServicesManager:(id)arg1;
- (void)setReplyHandler:(id /* block */)arg1;
- (bool)shouldArchiveXPCToDisk;
- (bool)shouldRunOnDaemonSerialQueue;

@end
