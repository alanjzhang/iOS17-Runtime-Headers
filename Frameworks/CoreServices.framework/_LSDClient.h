/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSDClient : NSObject {
    NSXPCConnection * _XPCConnection;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, retain) NSXPCConnection *XPCConnection;

- (void).cxx_destruct;
- (id)XPCConnection;
- (void)didHandleInvocation:(id)arg1 isReply:(bool)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (void)invokeServiceInvocation:(id)arg1 isReply:(bool)arg2;
- (void)willHandleInvocation:(id)arg1 isReply:(bool)arg2;

// _LSDClient (Private)

- (void)handleXPCInvocation:(id)arg1 isReply:(bool)arg2;
- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2;

@end
