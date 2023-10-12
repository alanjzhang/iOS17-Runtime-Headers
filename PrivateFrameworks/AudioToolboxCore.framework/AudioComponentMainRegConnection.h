/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
 */

@interface AudioComponentMainRegConnection : NSObject <AudioComponentRegistrarProtocol> {
    struct ConnectionInfo { 
        NSXPCConnection *mConnection; 
        int mExtUsePermission; 
        bool mLinkedSDKRequiresEntitlement; 
    }  mConnInfo;
    void * mImpl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)canRegisterComponent:(id)arg1 reply:(id /* block */)arg2;
- (void)getComponentList:(id)arg1 linkedSDKRequiresEntitlement:(bool)arg2 includeExtensions:(bool)arg3 forceWaitForExtensions:(bool)arg4 reply:(id /* block */)arg5;
- (id)initWithRegistrar:(void*)arg1 connection:(id)arg2;

@end