/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface ICQOffer : NSObject <NSSecureCoding> {
    _ICQXMLSpecification * _XMLSpecification;
    NSString * _accountAltDSID;
    long long  _actionOverride;
    NSString * _appVersionId;
    _ICQBannerSpecification * _bannerSpecification;
    NSString * _bundleIdentifier;
    _ICQButtonSpecification * _buttonSpecification;
    NSString * _context;
    _ICQDeviceInfo * _deviceInfo;
    NSDate * _expirationDate;
    _ICQFollowupSpecification * _followupSpecification;
    bool  _iTunesAccountExists;
    _ICQBannerSpecification * _inAppMessageSpecification;
    long long  _level;
    NSString * _notificationID;
    NSString * _offerId;
    long long  _offerType;
    NSDictionary * _planDetailsOverride;
    NSURL * _requestedServerUIURL;
    NSDate * _retrievalDate;
    NSDictionary * _serverDictionary;
    _ICQBannerSpecification * _universalLinkSpecification;
    _ICQUpgradeFlowSpecification * _upgradeFlowSpecification;
}

@property (nonatomic, readonly) _ICQXMLSpecification *XMLSpecification;
@property (nonatomic, retain) _ICQXMLSpecification *XMLSpecification;
@property (nonatomic, readonly) double _callbackInterval;
@property (nonatomic, retain) NSString *accountAltDSID;
@property (nonatomic, readonly) long long action;
@property (nonatomic, retain) NSString *appVersionId;
@property (nonatomic, readonly) _ICQBannerSpecification *bannerSpecification;
@property (nonatomic, retain) _ICQBannerSpecification *bannerSpecification;
@property (getter=isBuddyOffer, nonatomic, readonly) bool buddyOffer;
@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, readonly) _ICQButtonSpecification *buttonSpecification;
@property (nonatomic, retain) _ICQButtonSpecification *buttonSpecification;
@property (nonatomic, retain) NSString *context;
@property (getter=isDefaultOffer, nonatomic, readonly) bool defaultOffer;
@property (nonatomic, retain) _ICQDeviceInfo *deviceInfo;
@property (nonatomic, readonly) _ICQDynamicUISpecification *dynamicUISpecification;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isExpired, nonatomic, readonly) bool expired;
@property (nonatomic, readonly) _ICQFollowupSpecification *followupSpecification;
@property (nonatomic, retain) _ICQFollowupSpecification *followupSpecification;
@property (nonatomic, readonly) bool iTunesAccountExists;
@property (nonatomic) bool iTunesAccountExists;
@property (nonatomic, readonly) _ICQBannerSpecification *inAppMessageSpecification;
@property (nonatomic, retain) _ICQBannerSpecification *inAppMessageSpecification;
@property (nonatomic) long long level;
@property (nonatomic, retain) NSString *notificationID;
@property (nonatomic, retain) NSString *offerId;
@property (nonatomic, readonly) long long offerType;
@property (getter=isPremiumOffer, nonatomic, readonly) bool premiumOffer;
@property (nonatomic, readonly) NSURL *remoteUIURL;
@property (nonatomic, readonly) NSURL *requestedServerUIURL;
@property (nonatomic, retain) NSURL *requestedServerUIURL;
@property (nonatomic, retain) NSDate *retrievalDate;
@property (nonatomic, readonly) NSURL *serverUIURL;
@property (nonatomic, retain) _ICQBannerSpecification *universalLinkSpecification;
@property (nonatomic, readonly) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;
@property (nonatomic, retain) _ICQUpgradeFlowSpecification *upgradeFlowSpecification;

+ (id)_settingsBannerSpecificationWithServerDictionary:(id)arg1 bundleId:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)XMLSpecification;
- (id)_processICQURL:(id)arg1;
- (id)accountAltDSID;
- (id)appVersionId;
- (id)bannerSpecification;
- (id)bundleIdentifier;
- (id)buttonSpecification;
- (id)context;
- (id)debugDescription;
- (id)deviceInfo;
- (id)dynamicUISpecification;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)followupSpecification;
- (bool)iTunesAccountExists;
- (id)inAppMessageSpecification;
- (id)inAppMessageSpecificationForReason:(id)arg1 bundleId:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isExpired;
- (id)journeyLinkForId:(id)arg1;
- (long long)level;
- (id)notificationID;
- (id)offerId;
- (long long)offerType;
- (id)remoteUIURL;
- (id)requestedServerUIURL;
- (id)retrievalDate;
- (id)serverUIURL;
- (void)setAccountAltDSID:(id)arg1;
- (void)setAppVersionId:(id)arg1;
- (void)setBannerSpecification:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setButtonSpecification:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDeviceInfo:(id)arg1;
- (void)setFollowupSpecification:(id)arg1;
- (void)setITunesAccountExists:(bool)arg1;
- (void)setInAppMessageSpecification:(id)arg1;
- (void)setLevel:(long long)arg1;
- (void)setNotificationID:(id)arg1;
- (void)setOfferId:(id)arg1;
- (void)setRequestedServerUIURL:(id)arg1;
- (void)setRetrievalDate:(id)arg1;
- (void)setUniversalLinkSpecification:(id)arg1;
- (void)setUpgradeFlowSpecification:(id)arg1;
- (void)setXMLSpecification:(id)arg1;
- (bool)showsPhotoVideoCounts;
- (id)universalLink;
- (id)universalLinkSpecification;
- (id)upgradeFlowSpecification;

// ICQOffer (ICQDebugging)

+ (id)sampleOfferForLevel:(long long)arg1;

// ICQOffer (Internal)

- (double)_callbackInterval;
- (void)_updateRequestedServerUIURLWithURL:(id)arg1;
- (long long)action;
- (id)alertSpecificationAtIndex:(unsigned long long)arg1;
- (id)alertSpecificationForAlertKey:(id)arg1;
- (id)initWithServerDictionary:(id)arg1 accountAltDSID:(id)arg2 notificationID:(id)arg3 retrievalDate:(id)arg4 callbackInterval:(double)arg5 bundleIdentifier:(id)arg6;
- (bool)isBuddyOffer;
- (bool)isDefaultOffer;
- (bool)isDetailAppBannerOffer;
- (bool)isPremiumOffer;
- (bool)placeholderExists;
- (id)storagePurchaseKeybagForButtonId:(id)arg1;
- (void)updateOfferWithAction:(long long)arg1;
- (void)updateOfferWithPlanDetails:(id)arg1 actionString:(id)arg2;

@end
