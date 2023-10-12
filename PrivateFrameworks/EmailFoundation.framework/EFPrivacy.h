/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFPrivacy : NSObject

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation

+ (unsigned int)bucketMessageCount:(unsigned long long)arg1;
+ (long long)bucketedMessageAgeSinceDate:(id)arg1 leadingDigits:(long long)arg2;
+ (long long)bucketedNumber:(int)arg1 leadingDigits:(long long)arg2;
+ (id)dateByRemovingTimeComponentsFromDate:(id)arg1;
+ (id)fullyOrPartiallyRedactedStringForString:(id)arg1;
+ (id)fullyRedactedStringForString:(id)arg1;
+ (id)partiallyRedactedDictionary:(id)arg1;
+ (id)partiallyRedactedStringForString:(id)arg1;
+ (id)partiallyRedactedStringForString:(id)arg1 maximumUnredactedLength:(unsigned long long)arg2;
+ (id)partiallyRedactedStringFromArray:(id)arg1;
+ (long long)roundedInteger:(long long)arg1 placeValueDigits:(long long)arg2;
+ (long long)weeksSinceDate:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailCore.framework/EmailCore

// EFPrivacy (EmailCore)

+ (bool)_isWellKnownMailboxName:(id)arg1;
+ (id)_redactedMailboxPathForMailboxPath:(id)arg1;
+ (id)ec_partiallyRedactedStringForAddress:(id)arg1;
+ (id)ec_partiallyRedactedStringForAddress:(id)arg1 localPart:(id)arg2 domain:(id)arg3;
+ (id)ec_partiallyRedactedStringForSubjectOrSummary:(id)arg1;
+ (id)ec_redactedStringForMailboxURL:(id)arg1;

@end