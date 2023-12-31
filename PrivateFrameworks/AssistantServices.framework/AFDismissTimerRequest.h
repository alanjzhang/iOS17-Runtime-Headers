/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFDismissTimerRequest : AFSiriRequest {
    NSArray * _timerURLs;
}

@property (nonatomic, copy) NSArray *timerURLs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setTimerURLs:(id)arg1;
- (id)timerURLs;

@end
