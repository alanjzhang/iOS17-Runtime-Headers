/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPSuggestedEvent : PPScoredEvent {
    unsigned char  _category;
    NSString * _eventIdentifier;
}

@property (nonatomic, readonly) unsigned char category;
@property (nonatomic, readonly) NSString *eventIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)category;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)eventIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPPEvent:(id)arg1;
- (id)initWithPPEvent:(id)arg1 score:(double)arg2;

@end
