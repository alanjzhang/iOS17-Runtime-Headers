/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNEmbeddedApplicationConnection : LNApplicationConnection <NSXPCListenerDelegate> {
    FBSOpenApplicationService * _openApplicationService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSOpenApplicationService *openApplicationService;
@property (readonly) Class superclass;

+ (Class)connectionOptionsClass;
+ (id)optionsForAction:(id)arg1 interactionMode:(long long)arg2 source:(unsigned short)arg3;
+ (id)sharedOpenApplicationOperationQueue;

- (void).cxx_destruct;
- (void)connectWithOptions:(id)arg1;
- (void)enqueueOpenApplicationOperation:(id /* block */)arg1;
- (id)initWithBundleIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 error:(id*)arg3;
- (id)openApplicationService;
- (void)openApplicationWithOptions:(id)arg1 connectionAction:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)refreshWithOptions:(id)arg1;
- (void)resumeOpenApplicationOperationQueue;

@end
