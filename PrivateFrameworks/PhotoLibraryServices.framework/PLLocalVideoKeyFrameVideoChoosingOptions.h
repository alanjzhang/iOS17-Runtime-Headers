/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLLocalVideoKeyFrameVideoChoosingOptions : NSObject <PLVideoChoosingOptions> {
    bool  _streamingAllowed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)hasValidTimeRange;
- (id)initWithStreamingAllowed:(bool)arg1;
- (bool)isExplicitUserAction;
- (bool)isMediumHighQualityAllowed;
- (bool)isNetworkAccessAllowed;
- (bool)isStreamingAllowed;
- (bool)restrictToPlayableOnCurrentDevice;
- (long long)videoDeliveryMode;
- (long long)videoVersion;

@end
