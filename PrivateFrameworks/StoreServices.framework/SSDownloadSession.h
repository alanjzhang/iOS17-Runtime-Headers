/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSDownloadSession : NSObject {
    long long  _assetID;
    SSXPCConnection * _controlConnection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    long long  _downloadID;
    long long  _sessionID;
}

@property (readonly) SSDownload *download;
@property (readonly) SSDownloadAsset *downloadAsset;

- (id)_copySessionPropertyWithKey:(const char *)arg1;
- (id)_initSSDownloadSession;
- (id)_initWithMessage:(id)arg1 controlConnection:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)download;
- (id)downloadAsset;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
