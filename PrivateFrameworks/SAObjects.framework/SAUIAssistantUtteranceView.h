/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAssistantUtteranceView : SAAceView

@property (nonatomic, copy) NSString *dialogIdentifier;
@property (nonatomic, copy) NSNumber *postDialogDelayInMilliseconds;
@property (nonatomic, copy) NSString *text;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)assistantUtteranceView;
+ (id)assistantUtteranceViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)dialogIdentifier;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)postDialogDelayInMilliseconds;
- (void)setDialogIdentifier:(id)arg1;
- (void)setPostDialogDelayInMilliseconds:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

// SAUIAssistantUtteranceView (AnalyticsContextVending)

- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifiersForAnalyticsContext;

// SAUIAssistantUtteranceView (AssistantAdditions)

- (id)af_dialogIdentifier;
- (bool)af_isUtterance;
- (id)af_speakableText;
- (id)af_text;

// SAUIAssistantUtteranceView (ClientFeedbackPresented)

- (id)_af_dialogIdentifier;

@end
