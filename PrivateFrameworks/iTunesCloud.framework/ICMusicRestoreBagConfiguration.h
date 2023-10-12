/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMusicRestoreBagConfiguration : NSObject {
    NSArray * _allowedKinds;
    NSArray * _allowedMatchStatus;
    NSURL * _restoreURL;
    bool  _shouldGZip;
}

@property (nonatomic, readonly, copy) NSArray *allowedKinds;
@property (nonatomic, readonly, copy) NSArray *allowedMatchStatus;
@property (nonatomic, readonly, copy) NSURL *restoreURL;
@property (nonatomic, readonly) bool shouldGZip;

- (void).cxx_destruct;
- (id)allowedKinds;
- (id)allowedMatchStatus;
- (id)initWithServerConfiguration:(id)arg1;
- (id)restoreURL;
- (bool)shouldGZip;

@end
