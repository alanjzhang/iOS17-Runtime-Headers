/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFClientLite : NSObject {
    AFCallSiteInfo * _initiationCallSiteInfo;
}

- (void).cxx_destruct;
- (void)_handleCommand:(id)arg1 afterCurrentRequest:(bool)arg2 isOneWay:(bool)arg3 commandHandler:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)dealloc;
- (void)handleCommand:(id)arg1 afterCurrentRequest:(bool)arg2 commandHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)handleCommand:(id)arg1 commandHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)handleOneWayCommand:(id)arg1 commandHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)init;

@end
