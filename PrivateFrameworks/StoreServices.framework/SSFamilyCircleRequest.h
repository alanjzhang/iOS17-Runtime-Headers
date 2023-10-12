/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSFamilyCircleRequest : SSRequest <SSXPCCoding> {
    long long  _authenticationPromptStyle;
    bool  _fetchITunesAccountNames;
}

@property (nonatomic) long long authenticationPromptStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fetchITunesAccountNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)authenticationPromptStyle;
- (id)copyXPCEncoding;
- (bool)fetchITunesAccountNames;
- (id)initWithXPCEncoding:(id)arg1;
- (void)setAuthenticationPromptStyle:(long long)arg1;
- (void)setFetchITunesAccountNames:(bool)arg1;
- (void)startWithCompletionBlock:(id /* block */)arg1;
- (void)startWithResponseBlock:(id /* block */)arg1;

@end
