/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAssetTrackEnumerator : NSEnumerator {
    NSEnumerator * _enumerator;
    NSArray * _mediaCharacteristics;
    NSString * _mediaType;
}

+ (id)trackEnumeratorWithAsset:(id)arg1;

- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 mediaCharacteristics:(id)arg2;
- (id)initWithAsset:(id)arg1 mediaType:(id)arg2;
- (id)nextObject;
- (void)setMediaCharacteristics:(id)arg1;
- (void)setMediaType:(id)arg1;

@end
