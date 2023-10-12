/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchasableAppItem : SSPurchasableItem

+ (id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(bool)arg4;
+ (id)allPropertyKeys;
+ (id)databaseTable;
+ (id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(bool)arg5;
+ (id)sortByNameKey;

- (id)accountIdentifier;
- (id)bundleID;
- (id)category;
- (id)companyName;
- (long long)contentRatingFlags;
- (id)description;
- (bool)hasMessagesExtension;
- (id)humanReadableVersion;
- (long long)iTunesVersion;
- (id)iconTitle;
- (id)iconURL;
- (bool)is32BitOnly;
- (bool)isFamilyShareable;
- (bool)isHiddenFromSpringBoard;
- (bool)isNewsstand;
- (bool)isPreorder;
- (id)longTitle;
- (unsigned int)minimumOS;
- (id)ovalIconURLString;
- (id)redownloadParams;
- (id)requiredCapabilitiesString;
- (bool)supportsIPad;
- (bool)supportsIPhone;

@end
