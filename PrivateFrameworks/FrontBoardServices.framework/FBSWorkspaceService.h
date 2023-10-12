/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSWorkspaceService : NSObject {
    FBSWorkspaceScenesClient * _client;
    BSServiceConnectionEndpoint * _endpoint;
    NSString * _identifier;
}

@property (nonatomic, readonly) BSServiceConnectionEndpoint *endpoint;
@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)_initWithEndpoint:(id)arg1 identifier:(id)arg2;
- (id)createScene:(id /* block */)arg1;
- (id)createScene:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)description;
- (id)endpoint;
- (id)identifier;
- (id)init;
- (void)requestSceneWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)sendActions:(id)arg1;
- (void)sendActions:(id)arg1 completion:(id /* block */)arg2;

@end
