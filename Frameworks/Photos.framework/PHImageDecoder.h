/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHImageDecoder : NSObject

+ (id)sharedDecoder;
+ (id)sharedFigDecoder;

- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;

@end
