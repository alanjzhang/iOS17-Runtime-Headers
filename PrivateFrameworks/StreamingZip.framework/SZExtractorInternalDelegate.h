/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

@interface SZExtractorInternalDelegate : NSObject <StreamingUnzipDelegateProtocol> {
    <SZExtractorDelegate> * delegate;
}

@property <SZExtractorDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)extractionCompleteAtArchivePath:(id)arg1;
- (void)extractionEnteredPassThroughMode;
- (void)setDelegate:(id)arg1;
- (void)setExtractionProgress:(double)arg1;

@end
