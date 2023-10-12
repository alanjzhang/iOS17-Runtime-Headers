/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIDialogPunchout : SAAceView

@property (nonatomic, retain) SAUIButton *buttonView;
@property (nonatomic, retain) SAUIAssistantUtteranceView *utteranceView;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)dialogPunchout;
+ (id)dialogPunchoutWithDictionary:(id)arg1 context:(id)arg2;

- (id)buttonView;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setButtonView:(id)arg1;
- (void)setUtteranceView:(id)arg1;
- (id)utteranceView;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

// SAUIDialogPunchout (AnalyticsContextVending)

- (void)af_addEntriesToAnalyticsContext:(id)arg1;
- (id)af_dialogIdentifiersForAnalyticsContext;

// SAUIDialogPunchout (ClientFeedbackPresented)

- (id)_af_dialogIdentifier;

@end
