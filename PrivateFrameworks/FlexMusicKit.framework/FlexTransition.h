/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FlexMusicKit.framework/FlexMusicKit
 */

@interface FlexTransition : NSObject <FMNSDictionaryCoding, NSCopying> {
    long long  _fadeIn;
    long long  _fadeOut;
    bool  _prevented;
    NSString * _transitionSegmentName;
    bool  _useNextSegmentForFadeOut;
}

@property (nonatomic, readonly) long long fadeIn;
@property (nonatomic, readonly) long long fadeOut;
@property (nonatomic, readonly) bool prevented;
@property (nonatomic, readonly, copy) NSString *transitionSegmentName;
@property (nonatomic, readonly) bool useNextSegmentForFadeOut;

// FlexTransition (null)

+ (long long)validFadeLengthForLength:(long long)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodeAsDictionary;
- (long long)fadeIn;
- (long long)fadeOut;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTransitionSegmentNamed:(id)arg1 prevented:(bool)arg2 fadeOut:(long long)arg3 fadeIn:(long long)arg4 useNextSegmentForFadeOut:(bool)arg5;
- (bool)isDefaultTransition;
- (bool)prevented;
- (id)transitionSegmentName;
- (bool)useNextSegmentForFadeOut;

@end