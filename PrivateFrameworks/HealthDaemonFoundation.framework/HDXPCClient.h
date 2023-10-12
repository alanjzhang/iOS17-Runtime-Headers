/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemonFoundation.framework/HealthDaemonFoundation
 */

@interface HDXPCClient : NSObject {
    NSXPCConnection * _connection;
    HDXPCProcess * _process;
}

@property (readonly) NSXPCConnection *connection;
@property (readonly) HDXPCProcess *process;

+ (id)clientWithConnection:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_initWithConnection:(id)arg1 process:(id)arg2;
- (id)connection;
- (id)description;
- (id)initWithConnection:(id)arg1 process:(id)arg2;
- (id)initWithProcess:(id)arg1;
- (id)process;

@end
