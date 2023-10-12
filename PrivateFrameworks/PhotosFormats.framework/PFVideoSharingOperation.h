/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFVideoSharingOperation : NSOperation {
    PFAssetAdjustments * __adjustments;
    AVAudioMix * _audioMix;
    bool  _beganExport;
    NSString * _customAccessibilityLabel;
    NSString * _customCaption;
    NSDate * _customDate;
    CLLocation * _customLocation;
    NSString * _exportFileType;
    NSString * _exportPreset;
    AVAssetExportSession * _exportSession;
    NSObject<OS_dispatch_queue> * _externalIsolation;
    NSError * _operationError;
    bool  _operationSuccess;
    NSURL * _outputDirectoryURL;
    NSString * _outputFilename;
    NSURL * _resultingFileURL;
    bool  _shouldStripAccessibilityDescription;
    bool  _shouldStripCaption;
    bool  _shouldStripLocation;
    bool  _shouldStripMetadata;
    AVAsset * _videoAsset;
    AVVideoComposition * _videoComposition;
    NSArray * _videoMetadata;
    NSURL * _videoURL;
}

@property (setter=_setAdjustments:, nonatomic, retain) PFAssetAdjustments *_adjustments;
@property (nonatomic, copy) NSString *customAccessibilityLabel;
@property (nonatomic, copy) NSString *customCaption;
@property (nonatomic, copy) NSDate *customDate;
@property (nonatomic, copy) CLLocation *customLocation;
@property (nonatomic, copy) NSString *exportFileType;
@property (nonatomic, copy) NSString *exportPreset;
@property (setter=_setOperationError:, nonatomic, retain) NSError *operationError;
@property (nonatomic, copy) NSURL *outputDirectoryURL;
@property (nonatomic, copy) NSString *outputFilename;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly, copy) NSURL *resultingFileURL;
@property (nonatomic) bool shouldStripAccessibilityDescription;
@property (nonatomic) bool shouldStripCaption;
@property (nonatomic) bool shouldStripLocation;
@property (nonatomic) bool shouldStripMetadata;
@property (setter=_setSuccess:, nonatomic) bool success;
@property (setter=_setVideoURL:, nonatomic, copy) NSURL *videoURL;

+ (id)operationErrorWithCode:(long long)arg1 underlyingError:(id)arg2 withDescription:(id)arg3;

- (void).cxx_destruct;
- (id)_adjustments;
- (bool)_ensureVideoProperties;
- (bool)_runExport;
- (void)_setAdjustments:(id)arg1;
- (void)_setOperationError:(id)arg1;
- (void)_setSuccess:(bool)arg1;
- (void)_setVideoURL:(id)arg1;
- (void)_validateMetadata;
- (void)cancel;
- (id)customAccessibilityLabel;
- (id)customCaption;
- (id)customDate;
- (id)customLocation;
- (id)exportFileType;
- (id)exportPreset;
- (id)initWithVideoURL:(id)arg1 adjustmentData:(id)arg2;
- (void)main;
- (id)operationError;
- (id)outputDirectoryURL;
- (id)outputFilename;
- (float)progress;
- (id)resultingFileURL;
- (void)setCustomAccessibilityLabel:(id)arg1;
- (void)setCustomCaption:(id)arg1;
- (void)setCustomDate:(id)arg1;
- (void)setCustomLocation:(id)arg1;
- (void)setExportFileType:(id)arg1;
- (void)setExportPreset:(id)arg1;
- (void)setOutputDirectoryURL:(id)arg1;
- (void)setOutputFilename:(id)arg1;
- (void)setShouldStripAccessibilityDescription:(bool)arg1;
- (void)setShouldStripCaption:(bool)arg1;
- (void)setShouldStripLocation:(bool)arg1;
- (void)setShouldStripMetadata:(bool)arg1;
- (bool)shouldStripAccessibilityDescription;
- (bool)shouldStripCaption;
- (bool)shouldStripLocation;
- (bool)shouldStripMetadata;
- (bool)success;
- (id)videoURL;

@end
