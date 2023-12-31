/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSHTTPServerResponse : NSObject {
    NSData * _body;
    NSDictionary * _headers;
    short  _statusCode;
}

@property (nonatomic, retain) NSData *body;
@property (nonatomic, retain) NSDictionary *headers;
@property (nonatomic) short statusCode;

- (void).cxx_destruct;
- (id)bagFromBody;
- (id)body;
- (struct __CFHTTPMessage { }*)copyHTTPMessage;
- (id)headers;
- (id)initWithStatusCode:(short)arg1;
- (void)setBody:(id)arg1;
- (void)setBodyWithBag:(id)arg1;
- (void)setHeaders:(id)arg1;
- (void)setStatusCode:(short)arg1;
- (short)statusCode;

@end
