/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFSpeechAudioAnalytics : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _acousticFeatures;
    double  _snr;
    NSDictionary * _speechRecognitionFeatures;
}

@property (nonatomic, readonly) NSDictionary *acousticFeatures;
@property (nonatomic, readonly) double snr;
@property (nonatomic, readonly) NSDictionary *speechRecognitionFeatures;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acousticFeatures;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2;
- (id)initWithSpeechRecognitionFeatures:(id)arg1 acousticFeatures:(id)arg2 snr:(double)arg3;
- (double)snr;
- (id)speechRecognitionFeatures;

@end
