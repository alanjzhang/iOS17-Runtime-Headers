/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GPUToolsTransport.framework/GPUToolsTransport
 */

@interface GTCaptureRequestToken : NSObject {
    NSObject<OS_dispatch_semaphore> * _finished;
    <GTMTLCaptureService> * _service;
    unsigned long long  _tokenId;
}

@property (nonatomic, readonly) unsigned long long tokenId;

- (void).cxx_destruct;
- (void)completed;
- (id)description;
- (id)initWithCaptureService:(id)arg1 andTokenId:(unsigned long long)arg2;
- (unsigned long long)tokenId;
- (void)waitUntilCompleted;

@end
