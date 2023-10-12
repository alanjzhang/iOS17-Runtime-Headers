/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVFigAssetInspector : AVAssetInspector {
    AVDispatchOnce * _checkIsStreamingOnce;
    AVDisplayCriteria * _displayCriteria;
    struct OpaqueFigAsset { } * _figAsset;
    bool  _isStreaming;
    AVDispatchOnce * _makeDisplayCriteriaOnce;
    bool  didCheckForSaveRestriction;
    bool  hasSaveRestriction;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSArray *contentKeySpecifiersEligibleForPreloading;
@property (nonatomic, readonly) unsigned long long downloadToken;
@property (getter=_figAsset, nonatomic, readonly) struct OpaqueFigAsset { }*figAsset;
@property (nonatomic, readonly) NSArray *figChapterGroupInfo;
@property (nonatomic, readonly) NSArray *figChapters;
@property (nonatomic, readonly) bool hasProtectedContent;
@property (nonatomic, readonly) NSURL *originalNetworkContentURL;
@property (nonatomic, readonly) NSURL *resolvedURL;
@property (getter=_isStreaming, nonatomic, readonly) bool streaming;
@property (nonatomic, readonly) NSArray *variants;

- (id)SHA1Digest;
- (id)URL;
- (id)_assetAnalysisMessages;
- (struct OpaqueFigFormatReader { }*)_copyFormatReader;
- (struct OpaqueFigAsset { }*)_figAsset;
- (bool)_hasQTSaveRestriction;
- (bool)_isDefunct;
- (bool)_isStreaming;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)_mediaSelectionGroupDictionaries;
- (long long)_moovAtomSize;
- (id)_nameForProxy;
- (void*)_valueAsCFTypeForProperty:(struct __CFString { }*)arg1;
- (id)alternateTrackGroups;
- (id)availableMetadataFormats;
- (id)availableVideoDynamicRanges;
- (bool)canContainFragments;
- (id)commonMetadata;
- (bool)containsFragments;
- (id)contentKeySpecifiersEligibleForPreloading;
- (id)creationDate;
- (void)dealloc;
- (unsigned long long)downloadToken;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (id)figChapterGroupInfo;
- (id)figChapters;
- (long long)firstFragmentSequenceNumber;
- (long long)fragmentCount;
- (bool)hasProtectedContent;
- (unsigned long long)hash;
- (id)httpSessionIdentifier;
- (id)identifyingTag;
- (id)identifyingTagClass;
- (id)initWithFigAsset:(struct OpaqueFigAsset { }*)arg1;
- (bool)isCompatibleWithAirPlayVideo;
- (bool)isCompatibleWithPhotosTranscodingServiceWithOptions:(id)arg1;
- (bool)isCompatibleWithSavedPhotosAlbum;
- (bool)isComposable;
- (bool)isEqual:(id)arg1;
- (bool)isExportable;
- (bool)isPlayable;
- (bool)isReadable;
- (id)lyrics;
- (id)makePropertyListForProxyWithOptions:(id)arg1;
- (struct CGSize { double x1; double x2; })maximumVideoResolution;
- (id)metadataForFormat:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minimumTimeOffsetFromLive;
- (struct CGSize { double x1; double x2; })naturalSize;
- (int)naturalTimeScale;
- (id)originalNetworkContentURL;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })overallDurationHint;
- (id)preferredDisplayCriteria;
- (float)preferredRate;
- (float)preferredSoundCheckVolumeNormalization;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (float)preferredVolume;
- (id)propertyListForProxy;
- (bool)providesPreciseDurationAndTiming;
- (id)resolvedURL;
- (bool)supportsAnalysisReporting;
- (long long)trackCount;
- (id)trackReferences;
- (id)variants;

@end