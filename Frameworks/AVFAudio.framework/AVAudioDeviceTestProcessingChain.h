/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AVFAudio.framework/AVFAudio
 */

@interface AVAudioDeviceTestProcessingChain : NSObject <NSSecureCoding> {
    NSURL * _graphURL;
    NSURL * _processingStripURL;
}

@property (nonatomic, retain) NSURL *graphURL;
@property (nonatomic, retain) NSURL *processingStripURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)graphURL;
- (id)initWithCoder:(id)arg1;
- (id)processingStripURL;
- (void)setGraphURL:(id)arg1;
- (void)setProcessingStripURL:(id)arg1;

@end
