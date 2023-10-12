/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
 */

@interface WFStaccatoActionTemplate : NSObject <NSSecureCoding> {
    NSString * _actionIdentifier;
    NSString * _identifier;
    NSString * _localizedDescription;
    NSString * _localizedTitle;
    NSArray * _parameters;
    NSString * _sectionIdentifier;
}

@property (nonatomic, copy) NSString *actionIdentifier;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, retain) NSArray *parameters;
@property (nonatomic, readonly, copy) NSString *sectionIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 sectionIdentifier:(id)arg2 actionIdentifier:(id)arg3 localizedTitle:(id)arg4 localizedDescription:(id)arg5 parameters:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActionTemplate:(id)arg1;
- (id)localizedDescription;
- (id)localizedTitle;
- (id)parameters;
- (id)sectionIdentifier;
- (void)setActionIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setParameters:(id)arg1;
- (id)tintColor;

@end
