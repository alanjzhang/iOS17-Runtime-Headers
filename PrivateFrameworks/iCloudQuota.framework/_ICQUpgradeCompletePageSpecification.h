/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
 */

@interface _ICQUpgradeCompletePageSpecification : _ICQPageSpecification {
    ICQLink * _doneLink;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, retain) ICQLink *doneLink;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)doneLink;
- (bool)hasCancelButtonForBack;
- (id)message;
- (id)pageIdentifier;
- (void)setDoneLink:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

// _ICQUpgradeCompletePageSpecification (ICQDebugging)

+ (id)upgradeCompletePageSpecificationSampleForLevel:(long long)arg1;

@end
