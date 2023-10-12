/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWBufferometer : NSObject

+ (void)initialize;
+ (long long)totalTrackedBuffersInFlight;
+ (long long)totalTrackedSizeInFlight;
+ (void)trackBuffer:(void*)arg1 trackedSize:(long long)arg2;
+ (void)trackBuffer:(void*)arg1 trackedSize:(long long)arg2 tag:(id)arg3 bufferType:(id)arg4;

@end