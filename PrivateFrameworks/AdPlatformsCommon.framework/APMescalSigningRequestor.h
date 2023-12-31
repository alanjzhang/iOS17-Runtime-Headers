/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AdPlatformsCommon.framework/AdPlatformsCommon
 */

@interface APMescalSigningRequestor : APXPCActionRequester

// APMescalSigningRequestor (null)

+ (bool)canShareConnection;
+ (id)machService;

- (void)connectionInterrupted;
- (void)connectionInvalidated;
- (id)init;
- (id)remoteObjectInterface;
- (id)signatureForData:(id)arg1;
- (void)signatureForData:(id)arg1 completion:(id /* block */)arg2;
- (void)signatureForData:(id)arg1 waitTime:(double)arg2 completion:(id /* block */)arg3;

@end
