/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXNetworkExtensionMessageController : NSObject {
    <CXNetworkExtensionMessageControllerDataSource> * _dataSource;
}

@property (nonatomic, readonly) <CXNetworkExtensionMessageControllerDataSource> *dataSource;

- (void).cxx_destruct;
- (id)dataSource;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (void)sendNetworkExtensionMessage:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)sendNetworkExtensionPushToTalkMessage:(id)arg1 forBundleIdentifier:(id)arg2 completion:(id /* block */)arg3;

@end
