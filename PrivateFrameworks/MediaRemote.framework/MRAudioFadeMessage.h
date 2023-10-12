/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRAudioFadeMessage : MRProtocolMessage

@property (nonatomic, readonly) long long fadeType;
@property (nonatomic, readonly) MRPlayerPath *playerPath;

- (long long)fadeType;
- (id)initWithPlayerPath:(id)arg1 fadeType:(long long)arg2;
- (id)playerPath;
- (unsigned long long)type;

@end
