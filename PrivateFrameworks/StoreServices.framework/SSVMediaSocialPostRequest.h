/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaSocialPostRequest : SSRequest <SSXPCCoding> {
    SSVMediaSocialPostDescription * _postDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SSVMediaSocialPostDescription *postDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithPostDescription:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)postDescription;
- (void)startWithCompletionBlock:(id /* block */)arg1;

@end
