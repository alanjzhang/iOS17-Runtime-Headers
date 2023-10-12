/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

@interface FAInviteContext : NSObject {
    NSString * _action;
    bool  _canEditRecipients;
    NSString * _eventType;
    NSURL * _iconURL;
    NSURL * _imageURL;
    NSURL * _inviteURL;
    NSArray * _invitees;
    NSString * _mailLinkSubtitle;
    NSString * _mailLinkTitle;
    NSString * _mailMessageBodyHTML;
    NSString * _mailMessageSubject;
    NSURL * _messageBubbleAcceptInviteURL;
    NSString * _messageBubbleAppleIDSettingsLinkLabel;
    NSURL * _messageBubbleDeclineInviteURL;
    NSString * _messageBubbleFamilySettingsLinkLabel;
    NSString * _messageBubbleInviteAcceptButtonLabel;
    NSString * _messageBubbleInviteAcceptedIcon;
    NSString * _messageBubbleInviteAcceptedSubTitleReceiver;
    NSString * _messageBubbleInviteAcceptedSubTitleSender;
    NSString * _messageBubbleInviteAcceptedTitleReceiver;
    NSString * _messageBubbleInviteAcceptedTitleSender;
    NSString * _messageBubbleInviteDeclineButtonLabel;
    NSString * _messageBubbleInviteDeclinedIcon;
    NSString * _messageBubbleInviteDeclinedSubTitleReceiver;
    NSString * _messageBubbleInviteDeclinedSubTitleSender;
    NSString * _messageBubbleInviteDeclinedTitleReceiver;
    NSString * _messageBubbleInviteDeclinedTitleSender;
    NSString * _messageBubbleInviteExpiredIcon;
    NSString * _messageBubbleInviteExpiredSubTitleReceiver;
    NSString * _messageBubbleInviteExpiredSubTitleSender;
    NSString * _messageBubbleInviteExpiredTitleReceiver;
    NSString * _messageBubbleInviteExpiredTitleSender;
    NSString * _messageBubbleInviteLoadingLabel;
    NSString * _messageBubbleInvitePendingIcon;
    NSString * _messageBubbleInvitePendingSubTitle;
    NSString * _messageBubbleInvitePendingTitle;
    NSString * _messageBubbleLearnMoreLinkLabel;
    NSString * _messageBubbleSubTitle;
    NSString * _messageBubbleSubTitleTeen;
    NSString * _messageBubbleSubscriptionsList;
    NSString * _messageBubbleTitle;
    NSString * _messageBubbleViewInvitationButtonLabel;
    NSString * _overlaidTextColorString;
    unsigned long long  _remainingFamilySpots;
    NSURL * _reportInviteeDetailsUrl;
    NSString * _secondaryTitle;
    NSString * _subtitle;
    NSString * _title;
    unsigned long long  _validation;
}

@property (nonatomic, copy) NSString *action;
@property (nonatomic) bool canEditRecipients;
@property (nonatomic, retain) NSString *eventType;
@property (nonatomic, copy) NSURL *iconURL;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) NSURL *inviteURL;
@property (nonatomic, copy) NSArray *invitees;
@property (nonatomic, copy) NSString *mailLinkSubtitle;
@property (nonatomic, copy) NSString *mailLinkTitle;
@property (nonatomic, copy) NSString *mailMessageBodyHTML;
@property (nonatomic, copy) NSString *mailMessageSubject;
@property (nonatomic, copy) NSURL *messageBubbleAcceptInviteURL;
@property (nonatomic, copy) NSString *messageBubbleAppleIDSettingsLinkLabel;
@property (nonatomic, copy) NSURL *messageBubbleDeclineInviteURL;
@property (nonatomic, copy) NSString *messageBubbleFamilySettingsLinkLabel;
@property (nonatomic, copy) NSString *messageBubbleInviteAcceptButtonLabel;
@property (nonatomic, copy) NSString *messageBubbleInviteAcceptedIcon;
@property (nonatomic, copy) NSString *messageBubbleInviteAcceptedSubTitleReceiver;
@property (nonatomic, copy) NSString *messageBubbleInviteAcceptedSubTitleSender;
@property (nonatomic, copy) NSString *messageBubbleInviteAcceptedTitleReceiver;
@property (nonatomic, copy) NSString *messageBubbleInviteAcceptedTitleSender;
@property (nonatomic, copy) NSString *messageBubbleInviteDeclineButtonLabel;
@property (nonatomic, copy) NSString *messageBubbleInviteDeclinedIcon;
@property (nonatomic, copy) NSString *messageBubbleInviteDeclinedSubTitleReceiver;
@property (nonatomic, copy) NSString *messageBubbleInviteDeclinedSubTitleSender;
@property (nonatomic, copy) NSString *messageBubbleInviteDeclinedTitleReceiver;
@property (nonatomic, copy) NSString *messageBubbleInviteDeclinedTitleSender;
@property (nonatomic, copy) NSString *messageBubbleInviteExpiredIcon;
@property (nonatomic, copy) NSString *messageBubbleInviteExpiredSubTitleReceiver;
@property (nonatomic, copy) NSString *messageBubbleInviteExpiredSubTitleSender;
@property (nonatomic, copy) NSString *messageBubbleInviteExpiredTitleReceiver;
@property (nonatomic, copy) NSString *messageBubbleInviteExpiredTitleSender;
@property (nonatomic, copy) NSString *messageBubbleInviteLoadingLabel;
@property (nonatomic, copy) NSString *messageBubbleInvitePendingIcon;
@property (nonatomic, copy) NSString *messageBubbleInvitePendingSubTitle;
@property (nonatomic, copy) NSString *messageBubbleInvitePendingTitle;
@property (nonatomic, copy) NSString *messageBubbleLearnMoreLinkLabel;
@property (nonatomic, copy) NSString *messageBubbleSubTitle;
@property (nonatomic, copy) NSString *messageBubbleSubTitleTeen;
@property (nonatomic, copy) NSString *messageBubbleSubscriptionsList;
@property (nonatomic, copy) NSString *messageBubbleTitle;
@property (nonatomic, copy) NSString *messageBubbleViewInvitationButtonLabel;
@property (nonatomic, copy) NSString *overlaidTextColorString;
@property (nonatomic, readonly) unsigned long long remainingFamilySpots;
@property (nonatomic, copy) NSURL *reportInviteeDetailsUrl;
@property (nonatomic, copy) NSString *secondaryTitle;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long validation;

- (void).cxx_destruct;
- (void)_parseResultsDictionary:(id)arg1;
- (unsigned long long)_validatonFromString:(id)arg1 eventType:(id)arg2;
- (id)action;
- (id)buildInviteMessageBubbleURL:(id)arg1;
- (bool)canEditRecipients;
- (id)description;
- (id)eventType;
- (id)iconURL;
- (id)imageURL;
- (id)initWithResults:(id)arg1;
- (id)inviteURL;
- (id)invitees;
- (id)mailLinkSubtitle;
- (id)mailLinkTitle;
- (id)mailMessageBodyHTML;
- (id)mailMessageSubject;
- (id)messageBubbleAcceptInviteURL;
- (id)messageBubbleAppleIDSettingsLinkLabel;
- (id)messageBubbleDeclineInviteURL;
- (id)messageBubbleFamilySettingsLinkLabel;
- (id)messageBubbleInviteAcceptButtonLabel;
- (id)messageBubbleInviteAcceptedIcon;
- (id)messageBubbleInviteAcceptedSubTitleReceiver;
- (id)messageBubbleInviteAcceptedSubTitleSender;
- (id)messageBubbleInviteAcceptedTitleReceiver;
- (id)messageBubbleInviteAcceptedTitleSender;
- (id)messageBubbleInviteDeclineButtonLabel;
- (id)messageBubbleInviteDeclinedIcon;
- (id)messageBubbleInviteDeclinedSubTitleReceiver;
- (id)messageBubbleInviteDeclinedSubTitleSender;
- (id)messageBubbleInviteDeclinedTitleReceiver;
- (id)messageBubbleInviteDeclinedTitleSender;
- (id)messageBubbleInviteExpiredIcon;
- (id)messageBubbleInviteExpiredSubTitleReceiver;
- (id)messageBubbleInviteExpiredSubTitleSender;
- (id)messageBubbleInviteExpiredTitleReceiver;
- (id)messageBubbleInviteExpiredTitleSender;
- (id)messageBubbleInviteLoadingLabel;
- (id)messageBubbleInvitePendingIcon;
- (id)messageBubbleInvitePendingSubTitle;
- (id)messageBubbleInvitePendingTitle;
- (id)messageBubbleLearnMoreLinkLabel;
- (id)messageBubbleSubTitle;
- (id)messageBubbleSubTitleTeen;
- (id)messageBubbleSubscriptionsList;
- (id)messageBubbleTitle;
- (id)messageBubbleViewInvitationButtonLabel;
- (id)overlaidTextColorString;
- (id)privacySafeInvitees;
- (unsigned long long)remainingFamilySpots;
- (id)reportInviteeDetailsUrl;
- (id)secondaryTitle;
- (void)setAction:(id)arg1;
- (void)setCanEditRecipients:(bool)arg1;
- (void)setEventType:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setInviteURL:(id)arg1;
- (void)setInvitees:(id)arg1;
- (void)setMailLinkSubtitle:(id)arg1;
- (void)setMailLinkTitle:(id)arg1;
- (void)setMailMessageBodyHTML:(id)arg1;
- (void)setMailMessageSubject:(id)arg1;
- (void)setMessageBubbleAcceptInviteURL:(id)arg1;
- (void)setMessageBubbleAppleIDSettingsLinkLabel:(id)arg1;
- (void)setMessageBubbleDeclineInviteURL:(id)arg1;
- (void)setMessageBubbleFamilySettingsLinkLabel:(id)arg1;
- (void)setMessageBubbleInviteAcceptButtonLabel:(id)arg1;
- (void)setMessageBubbleInviteAcceptedIcon:(id)arg1;
- (void)setMessageBubbleInviteAcceptedSubTitleReceiver:(id)arg1;
- (void)setMessageBubbleInviteAcceptedSubTitleSender:(id)arg1;
- (void)setMessageBubbleInviteAcceptedTitleReceiver:(id)arg1;
- (void)setMessageBubbleInviteAcceptedTitleSender:(id)arg1;
- (void)setMessageBubbleInviteDeclineButtonLabel:(id)arg1;
- (void)setMessageBubbleInviteDeclinedIcon:(id)arg1;
- (void)setMessageBubbleInviteDeclinedSubTitleReceiver:(id)arg1;
- (void)setMessageBubbleInviteDeclinedSubTitleSender:(id)arg1;
- (void)setMessageBubbleInviteDeclinedTitleReceiver:(id)arg1;
- (void)setMessageBubbleInviteDeclinedTitleSender:(id)arg1;
- (void)setMessageBubbleInviteExpiredIcon:(id)arg1;
- (void)setMessageBubbleInviteExpiredSubTitleReceiver:(id)arg1;
- (void)setMessageBubbleInviteExpiredSubTitleSender:(id)arg1;
- (void)setMessageBubbleInviteExpiredTitleReceiver:(id)arg1;
- (void)setMessageBubbleInviteExpiredTitleSender:(id)arg1;
- (void)setMessageBubbleInviteLoadingLabel:(id)arg1;
- (void)setMessageBubbleInvitePendingIcon:(id)arg1;
- (void)setMessageBubbleInvitePendingSubTitle:(id)arg1;
- (void)setMessageBubbleInvitePendingTitle:(id)arg1;
- (void)setMessageBubbleLearnMoreLinkLabel:(id)arg1;
- (void)setMessageBubbleSubTitle:(id)arg1;
- (void)setMessageBubbleSubTitleTeen:(id)arg1;
- (void)setMessageBubbleSubscriptionsList:(id)arg1;
- (void)setMessageBubbleTitle:(id)arg1;
- (void)setMessageBubbleViewInvitationButtonLabel:(id)arg1;
- (void)setOverlaidTextColorString:(id)arg1;
- (void)setReportInviteeDetailsUrl:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setValidation:(unsigned long long)arg1;
- (id)subtitle;
- (id)title;
- (unsigned long long)validation;

@end
