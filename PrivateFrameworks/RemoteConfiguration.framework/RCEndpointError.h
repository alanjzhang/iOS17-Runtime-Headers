/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
 */

@interface RCEndpointError : NSObject {
    NSString * _errorCode;
    NSString * _message;
    NSString * _stacktrace;
}

@property (nonatomic, readonly, copy) NSString *errorCode;
@property (nonatomic, readonly, copy) NSString *message;
@property (nonatomic, readonly, copy) NSString *stacktrace;

+ (id)endpointErrorWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)errorCode;
- (unsigned long long)hash;
- (id)initWithErrorCode:(id)arg1 message:(id)arg2 stacktrace:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)message;
- (id)stacktrace;

@end