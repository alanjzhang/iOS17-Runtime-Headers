/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADOperationProxy : NSObject {
    ClientConnection * _conn;
    CADXPCImplementation * _implementation;
}

+ (bool)_selectorMayBeCalledBeforeInitialization:(SEL)arg1;

- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(int)arg3;
- (id)_copyReplyBlockFromInvocation:(id)arg1;
- (void)_emptyMethod;
- (id)_newImplementation;
- (void)clearCachedAuthorizationStatus;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithClientConnection:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end
