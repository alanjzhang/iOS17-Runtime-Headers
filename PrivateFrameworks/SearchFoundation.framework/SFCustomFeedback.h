/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFCustomFeedback : SFFeedback {
    NSData * _data;
    unsigned long long  _feedbackType;
    NSDictionary * _jsonFeedback;
}

@property (nonatomic, copy) NSData *data;
@property (nonatomic) unsigned long long feedbackType;
@property (nonatomic, copy) NSDictionary *jsonFeedback;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)feedbackType;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 data:(id)arg2;
- (id)initWithType:(unsigned long long)arg1 jsonFeedback:(id)arg2;
- (id)jsonFeedback;
- (void)setData:(id)arg1;
- (void)setFeedbackType:(unsigned long long)arg1;
- (void)setJsonFeedback:(id)arg1;

@end
