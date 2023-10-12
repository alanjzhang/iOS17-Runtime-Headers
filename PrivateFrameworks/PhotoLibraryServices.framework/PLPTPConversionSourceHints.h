/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPConversionSourceHints : NSObject {
    bool  _isLivePhoto;
    bool  _isRender;
    bool  _isVideo;
    UTType * _livePhotoImageContentType;
}

@property (readonly) bool isLivePhoto;
@property (readonly) bool isRender;
@property (readonly) bool isVideo;
@property (readonly) bool livePhotoImageIsHEIC;

+ (id)hintsForAsset:(id)arg1 isVideo:(bool)arg2 isRender:(bool)arg3;

- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1 isVideo:(bool)arg2 isRender:(bool)arg3;
- (bool)isLivePhoto;
- (bool)isRender;
- (bool)isVideo;
- (bool)livePhotoImageIsHEIC;

@end
