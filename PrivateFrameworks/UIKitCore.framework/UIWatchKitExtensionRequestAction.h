/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIWatchKitExtensionRequestAction : BSAction

@property (nonatomic, readonly, retain) NSDictionary *request;

- (long long)UIActionType;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id /* block */)arg4;
- (id)initWithRequest:(id)arg1 withHandler:(id /* block */)arg2;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)request;
- (void)sendResponse:(id)arg1;

@end
