/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFMediaPlaybackStateSnapshot : NSObject <AFContextSnapshot, AFDictionaryConvertible, NSCopying, NSSecureCoding> {
    NSString * _groupIdentifier;
    bool  _isProxyGroupPlayer;
    NSString * _mediaType;
    NSDate * _nowPlayingTimestamp;
    long long  _playbackState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isProxyGroupPlayer;
@property (nonatomic, readonly, copy) NSString *mediaType;
@property (nonatomic, readonly, copy) NSDate *nowPlayingTimestamp;
@property (nonatomic, readonly) long long playbackState;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)buildDictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)init;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithPlaybackState:(long long)arg1 nowPlayingTimestamp:(id)arg2 mediaType:(id)arg3 groupIdentifier:(id)arg4 isProxyGroupPlayer:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isProxyGroupPlayer;
- (id)mediaType;
- (id)nowPlayingTimestamp;
- (long long)playbackState;

// AFMediaPlaybackStateSnapshot (AFMediaPlaybackStateSnapshotMutability)

- (id)mutatedCopyWithMutator:(id /* block */)arg1;

// AFMediaPlaybackStateSnapshot (ContextSnapshot)

- (id)initWithSerializedBackingStore:(id)arg1;
- (id)serializedBackingStore;

// AFMediaPlaybackStateSnapshot (ShortDescription)

- (id)ad_shortDescription;

@end
