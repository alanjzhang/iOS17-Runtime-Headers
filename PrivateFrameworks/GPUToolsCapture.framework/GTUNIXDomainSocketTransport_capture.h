/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GPUToolsCapture.framework/GPUToolsCapture
 */

@interface GTUNIXDomainSocketTransport_capture : GTBaseSocketTransport_capture {
    NSObject<OS_dispatch_source> * _connSource;
    int  _mode;
}

@property (nonatomic, retain) NSURL *url;

- (void)_connectClient:(id)arg1 future:(id)arg2;
- (void)_connectServer:(id)arg1 future:(id)arg2;
- (void)_invalidate;
- (id)connect;
- (id)initWithMode:(int)arg1;
- (void)setUrl:(id)arg1;

@end
