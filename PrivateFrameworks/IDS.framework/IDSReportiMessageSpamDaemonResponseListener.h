/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSReportiMessageSpamDaemonResponseListener : NSObject <IDSDaemonListenerProtocol> {
    IDSDaemonRequestTimer * _requestTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)iMessageReportSpamCheckUnknownResponseForRequestID:(id)arg1 status:(long long)arg2 abusive:(bool)arg3 delay:(double)arg4 withError:(id)arg5;
- (id)initWithRequestTimer:(id)arg1;

@end
