/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVComposition : AVAsset <NSMutableCopying, NSSecureCoding> {
    AVCompositionInternal * _priv;
}

@property (nonatomic, readonly, copy) NSDictionary *URLAssetInitializationOptions;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } naturalSize;
@property (nonatomic, readonly) NSArray *tracks;

+ (void)initialize;

- (id)URLAssetInitializationOptions;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (Class)_classForTrackInspectors;
- (bool)_clientProvidesNaturalSize;
- (struct OpaqueFigFormatReader { }*)_copyFormatReader;
- (int)_createEmptyMutableCompositionIfNeeded;
- (struct OpaqueFigAsset { }*)_figAsset;
- (id)_initWithComposition:(id)arg1;
- (void)_loadAssetInspectorAndLoaderOnce;
- (id)_mediaSelectionGroupDictionaries;
- (struct OpaqueFigMutableComposition { }*)_mutableComposition;
- (id)_mutableTracks;
- (id)_newTrackForIndex:(long long)arg1;
- (void)_setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_setURLAssetInitializationOptions:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)isDefunct;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)trackWithTrackID:(int)arg1;
- (id)tracks;
- (id)tracksWithMediaCharacteristic:(id)arg1;
- (id)tracksWithMediaType:(id)arg1;

// AVComposition (AVComposition_NSCoding)

+ (bool)expectsPropertyRevisedNotifications;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
