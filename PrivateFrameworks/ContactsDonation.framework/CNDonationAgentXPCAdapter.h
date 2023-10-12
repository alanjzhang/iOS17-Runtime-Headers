/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface CNDonationAgentXPCAdapter : NSObject <CNDonationAgentAdapter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)changeFromAccount:(id)arg1 toAccount:(id)arg2 scope:(id)arg3;
+ (void)donateMeCardValues:(id)arg1 scope:(id)arg2;
+ (void)fetchDonatedMeCardWithScope:(id)arg1;
+ (void)meCardDonationsWithScope:(id)arg1;
+ (id)newXPCConnection;
+ (void)rejectValueWithDonationIdentifier:(id)arg1 scope:(id)arg2;
+ (void)rejectValuesWithClusterIdentifier:(id)arg1 scope:(id)arg2;
+ (void)removeAllRejectionsWithScope:(id)arg1;
+ (void)removeDonatedMeCardValuesForIdentifiers:(id)arg1 scope:(id)arg2;

- (id)changeFromAccount:(id)arg1 toAccount:(id)arg2;
- (id)donateMeCardValues:(id)arg1;
- (id)donatedMeCardEither;
- (id)fetchDonatedMeCard;
- (id)meCardDonations;
- (id)rejectValueWithDonationIdentifier:(id)arg1;
- (id)rejectValuesWithClusterIdentifier:(id)arg1;
- (id)removeAllRejections;
- (id)removeDonatedMeCardValuesForIdentifiers:(id)arg1;

@end
