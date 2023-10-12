/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest {
    NSString * _APIToken;
    id /* block */  _tokenFetchedBlock;
}

@property (nonatomic, copy) NSString *APIToken;
@property (nonatomic, copy) id /* block */ tokenFetchedBlock;

- (void).cxx_destruct;
- (id)APIToken;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setAPIToken:(id)arg1;
- (void)setTokenFetchedBlock:(id /* block */)arg1;
- (id /* block */)tokenFetchedBlock;

@end