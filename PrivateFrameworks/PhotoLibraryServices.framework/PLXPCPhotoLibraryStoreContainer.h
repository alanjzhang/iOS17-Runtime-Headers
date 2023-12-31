/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLXPCPhotoLibraryStoreContainer : NSObject {
    NSXPCListener * _listener;
    NSXPCStoreServer * _server;
}

@property (readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (readonly) NSXPCStoreServer *server;

+ (id)newContainerWithPathManager:(id)arg1 connectionAuthorization:(id)arg2;

- (void).cxx_destruct;
- (id)initWithServer:(id)arg1 listener:(id)arg2;
- (id)listenerEndpoint;
- (id)server;

@end
