/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
 */

@interface DELogMover : NSObject {
    NSObject<OS_xpc_object> * _conn;
    NSString * _serviceName;
}

@property (nonatomic, readonly) NSString *serviceName;

+ (void)moveSystemLogsWithExtensions:(id)arg1;

- (void).cxx_destruct;
- (id)initWithServiceName:(id)arg1;
- (bool)sendRequestReturningBooleanResponse:(id)arg1 withSuccessKey:(char *)arg2;
- (id)serviceName;

@end
