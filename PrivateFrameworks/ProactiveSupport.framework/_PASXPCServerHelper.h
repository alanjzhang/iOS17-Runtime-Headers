/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

@interface _PASXPCServerHelper : NSObject

+ (bool)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 logHandle:(id)arg4;
+ (bool)checkForAndLogTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 serviceName:(id)arg3 logHandle:(id)arg4 shouldGenerateCrashReport:(bool)arg5;
+ (bool)hasTrueBooleanEntitlement:(id)arg1 connection:(id)arg2 logHandle:(id)arg3;
+ (bool)shouldAcceptConnection:(id)arg1 serviceName:(id)arg2 whitelistedServerInterface:(id)arg3 whitelistedClientInterface:(id)arg4 requestHandler:(id)arg5 validateConnection:(id /* block */)arg6 setupClientProxy:(id /* block */)arg7 interruptionHandler:(id /* block */)arg8 invalidationHandler:(id /* block */)arg9 logHandle:(id)arg10;

@end
