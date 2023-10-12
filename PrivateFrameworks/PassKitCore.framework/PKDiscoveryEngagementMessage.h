/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDiscoveryEngagementMessage : PKDiscoveryObject <NSCopying, NSSecureCoding> {
    PKDiscoveryEngagementMessageAction * _action;
    NSDictionary * _iconURLs;
    NSString * _localizedMessage;
    NSString * _localizedTitle;
    NSString * _messageKey;
    long long  _passQualifier;
    bool  _reportIdentifierToAggd;
    NSString * _titleKey;
    long long  _type;
}

@property (nonatomic, retain) PKDiscoveryEngagementMessageAction *action;
@property (nonatomic, retain) NSDictionary *iconURLs;
@property (nonatomic, readonly) NSString *localizedMessage;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) NSString *messageKey;
@property (nonatomic) long long passQualifier;
@property (getter=canReportIdentifierToAggd, nonatomic) bool reportIdentifierToAggd;
@property (nonatomic, retain) NSString *titleKey;
@property (nonatomic) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (bool)canReportIdentifierToAggd;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)iconURLs;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)localizeWithBundle:(id)arg1;
- (id)localizedMessage;
- (id)localizedTitle;
- (id)messageKey;
- (long long)passQualifier;
- (void)setAction:(id)arg1;
- (void)setIconURLs:(id)arg1;
- (void)setMessageKey:(id)arg1;
- (void)setPassQualifier:(long long)arg1;
- (void)setReportIdentifierToAggd:(bool)arg1;
- (void)setTitleKey:(id)arg1;
- (void)setType:(long long)arg1;
- (id)titleKey;
- (long long)type;
- (void)updateForRuleResult:(bool)arg1;
- (void)updateWithDiscoveryEngagementMessage:(id)arg1;

@end
