/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRRestrictedCommandClientsManager : NSObject {
    NSArray * _lastAcceptedTokens;
}

@property (nonatomic, retain) NSArray *lastAcceptedTokens;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_restrictCommandClientsTo:(id)arg1;
- (id)lastAcceptedTokens;
- (void)republishStateIfNeeded;
- (id)restrictCommandClientsTo:(id)arg1;
- (void)setLastAcceptedTokens:(id)arg1;

@end
