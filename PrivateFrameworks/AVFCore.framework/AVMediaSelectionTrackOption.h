/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
    NSDictionary * _dictionary;
    bool  _displaysNonForcedSubtitles;
    id  _groupID;
    AVAssetTrack * _track;
    AVWeakReference * _weakReferenceToGroup;
}

- (id)_groupID;
- (id)_track;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (id)dictionary;
- (bool)displaysNonForcedSubtitles;
- (id)group;
- (unsigned long long)hash;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isPlayable;
- (id)locale;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (id)track;
- (int)trackID;

@end
