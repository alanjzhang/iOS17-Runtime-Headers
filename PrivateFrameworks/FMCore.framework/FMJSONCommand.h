/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMJSONCommand : FMCommandBase {
    bool  __hasParsedResponseBody;
    NSDictionary * __requestBodyDict;
    NSDictionary * __responseBodyDict;
    NSError * _jsonResponseParseError;
    NSObject<OS_dispatch_queue> * _responseQueue;
}

@property (nonatomic) bool _hasParsedResponseBody;
@property (nonatomic, retain) NSDictionary *_requestBodyDict;
@property (nonatomic, retain) NSDictionary *_responseBodyDict;
@property (nonatomic, readonly) NSDictionary *jsonResponseDictionary;
@property (nonatomic, retain) NSError *jsonResponseParseError;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *responseQueue;
@property (nonatomic, readonly) NSDictionary *serverAlertInfo;

- (void).cxx_destruct;
- (bool)_hasParsedResponseBody;
- (id)_requestBodyDict;
- (id)_responseBodyDict;
- (id)body;
- (id)headers;
- (id)init;
- (id)jsonBodyDictionary;
- (id)jsonResponseDictionary;
- (id)jsonResponseParseError;
- (id)responseQueue;
- (void)sendRequest;
- (id)serverAlertInfo;
- (void)setJsonResponseParseError:(id)arg1;
- (void)setResponseQueue:(id)arg1;
- (void)set_hasParsedResponseBody:(bool)arg1;
- (void)set_requestBodyDict:(id)arg1;
- (void)set_responseBodyDict:(id)arg1;

@end
