/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

@interface PHMediaFormatConversionDestination : PHMediaFormatConversionContent {
    NSString * _outputPathExtension;
    unsigned long long  _singlePassVideoConversionTargetLength;
    PFVideoExportRangeCoordinator * _singlePassVideoExportRangeCoordinator;
    NSURL * _temporaryFilesURLToDelete;
    NSURL * _temporaryOutputDirectoryURL;
    NSURL * _temporaryOutputFileURL;
}

@property (retain) NSString *outputPathExtension;
@property unsigned long long singlePassVideoConversionTargetLength;
@property (retain) PFVideoExportRangeCoordinator *singlePassVideoExportRangeCoordinator;
@property (readonly) NSURL *temporaryOutputDirectoryURL;
@property (readonly) NSURL *temporaryOutputFileURL;
@property (readonly) bool usesSinglePassVideoConversion;

+ (id)destinationForConversionReturningUnchangedSource:(id)arg1;
+ (id)sharedCleanupQueue;

- (void).cxx_destruct;
- (void)addAvailableRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)createTemporaryOutputDirectoryWithError:(id*)arg1;
- (bool)createTemporaryOutputFileWithErrorError:(id*)arg1;
- (void)dealloc;
- (void)enableSinglePassVideoConversionWithTargetLength:(unsigned long long)arg1;
- (id)errorForSinglePassVideoConversionError:(id)arg1;
- (void)generateTemporaryOutputFileURLForRequest:(id)arg1;
- (unsigned long long)length;
- (id)outputPathExtension;
- (bool)padImageToLength:(unsigned long long)arg1 fileHandle:(id)arg2 error:(id*)arg3;
- (bool)padToLength:(unsigned long long)arg1 error:(id*)arg2;
- (bool)padVideoToLength:(unsigned long long)arg1 fileHandle:(id)arg2 error:(id*)arg3;
- (void)removeTemporaryFiles;
- (void)removeTemporaryFilesWithCompletionHandler:(id /* block */)arg1;
- (void)setOutputPathExtension:(id)arg1;
- (void)setSinglePassVideoConversionTargetLength:(unsigned long long)arg1;
- (void)setSinglePassVideoExportRangeCoordinator:(id)arg1;
- (unsigned long long)singlePassVideoConversionTargetLength;
- (id)singlePassVideoExportRangeCoordinator;
- (id)temporaryDirectoryPrefix;
- (id)temporaryOutputDirectoryURL;
- (id)temporaryOutputFileURL;
- (bool)usesSinglePassVideoConversion;
- (bool)waitForAvailabilityOfRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 timeout:(unsigned long long)arg2 error:(id*)arg3;

@end
