/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAOBInvitationSentModel : NSObject <AAOBWelcomeControllerModelProtocol, NSCopying, NSSecureCoding> {
    NSString * _detailText;
    NSString * _helpLinkTitle;
    NSString * _helpLinkURL;
    NSString * _imageName;
    NSString * _ownerHandle;
    NSString * _primaryButton;
    NSString * _recipientHandle;
    NSString * _secondaryButton;
    NSString * _title;
}

@property (nonatomic, copy) AACustodianshipInfo *custodianshipInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailText;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *helpLinkTitle;
@property (nonatomic, copy) NSString *helpLinkURL;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *leftBarButton;
@property (nonatomic, copy) NSString *ownerHandle;
@property (nonatomic, copy) NSString *primaryButton;
@property (nonatomic, copy) NSString *recipientHandle;
@property (nonatomic, copy) NSString *secondaryButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detailText;
- (void)encodeWithCoder:(id)arg1;
- (id)helpLinkTitle;
- (id)helpLinkURL;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 recipientHandle:(id)arg2;
- (id)ownerHandle;
- (id)primaryButton;
- (id)recipientHandle;
- (id)secondaryButton;
- (void)setDetailText:(id)arg1;
- (void)setHelpLinkTitle:(id)arg1;
- (void)setHelpLinkURL:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setOwnerHandle:(id)arg1;
- (void)setPrimaryButton:(id)arg1;
- (void)setRecipientHandle:(id)arg1;
- (void)setSecondaryButton:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
