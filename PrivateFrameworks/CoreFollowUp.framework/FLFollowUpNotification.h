/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
 */

@interface FLFollowUpNotification : NSObject <NSSecureCoding> {
    FLFollowUpAction * _activateAction;
    FLFollowUpAction * _clearAction;
    NSDate * _creationDate;
    FLFollowUpAction * _dismissAction;
    double  _firstNotificationDelay;
    double  _frequency;
    NSString * _informativeText;
    NSSet * _options;
    NSDate * _previousNotificationActionDate;
    unsigned long long  _sqlID;
    NSString * _subtitleText;
    NSString * _title;
    NSString * _unlockActionLabel;
}

@property (nonatomic, retain) FLFollowUpAction *activateAction;
@property (nonatomic, retain) FLFollowUpAction *clearAction;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic, retain) FLFollowUpAction *dismissAction;
@property (nonatomic) double firstNotificationDelay;
@property (nonatomic) bool forceDelivery;
@property (nonatomic) double frequency;
@property (nonatomic, copy) NSString *informativeText;
@property (nonatomic, copy) NSSet *options;
@property (nonatomic, retain) NSDate *previousNotificationActionDate;
@property (nonatomic) unsigned long long sqlID;
@property (nonatomic, copy) NSString *subtitleText;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *unlockActionLabel;

+ (id)defaultOptions;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)_creationDateAugmentedRepeatTimer;
- (double)_frequencyDelta;
- (id)_optionsData;
- (bool)_shouldDeliverNotificationWithStringOut:(id*)arg1;
- (id)activateAction;
- (id)clearAction;
- (id)creationDate;
- (id)description;
- (id)dismissAction;
- (void)encodeWithCoder:(id)arg1;
- (double)firstNotificationDelay;
- (bool)forceDelivery;
- (double)frequency;
- (id)informativeText;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)options;
- (id)previousNotificationActionDate;
- (void)recalculateActionDateToAccountForDelay;
- (void)setActivateAction:(id)arg1;
- (void)setClearAction:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setFirstNotificationDelay:(double)arg1;
- (void)setForceDelivery:(bool)arg1;
- (void)setFrequency:(double)arg1;
- (void)setInformativeText:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setPreviousNotificationActionDate:(id)arg1;
- (void)setSqlID:(unsigned long long)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnlockActionLabel:(id)arg1;
- (void)set_optionsData:(id)arg1;
- (bool)shouldBackgroundDefaultAction;
- (bool)shouldDeliverNotification;
- (unsigned long long)sqlID;
- (id)subtitleText;
- (id)title;
- (id)unlockActionLabel;

@end
