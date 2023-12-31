/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSAgeVerificationCore : NSObject

+ (bool)_isAgeVerificationNeededForExpiration:(id)arg1 at:(id)arg2;
+ (bool)_isTimestamp:(id)arg1 validAsOf:(id)arg2;
+ (id)_momentOfExpiryFrom:(id)arg1;
+ (id)_resultForAccountVerificationExpirationTimestamp:(id)arg1 withBagControlledAgeVerificationRequired:(id)arg2 bagWarningThresholdDays:(id)arg3 at:(id)arg4;
+ (id)_timestampForWarningThresholdDays:(id)arg1 addedTo:(id)arg2;

@end
