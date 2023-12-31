/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCCaptionsReceiver : NSObject {
    struct opaqueVCCaptionsDecoder { } * _captionsDecoder;
    unsigned int  _captionsLastUpdateNumber;
    unsigned int  _captionsLastUtteranceNumber;
    VCCaptionsTranscription * _currentTranscription;
    id  _delegate;
}

@property (nonatomic, retain) VCCaptionsTranscription *currentTranscription;
@property (readonly) <VCCaptionsReceiverDelegate> *delegate;

- (id)currentTranscription;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setCurrentTranscription:(id)arg1;

@end
