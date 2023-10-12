/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMServerConfiguration : NSObject

+ (void)_assertNotMainThread;
+ (double)_cacheValidityInterval;
+ (id)_cachedPropertyList;
+ (id)_configurationLocation;
+ (id)_dateFormatter;
+ (void)_savePropertyList:(id)arg1 withDate:(id)arg2;
+ (id)_userDefaults;
+ (id)_userDefaultsKey;
+ (id)cachedPropertyList;
+ (void)clearCache;
+ (id)getValueForKey:(id)arg1;
+ (id)getValueForKey:(id)arg1 refreshIfNeeded:(bool)arg2;
+ (bool)isCacheRecent;
+ (bool)isCacheRecentLastRefreshDate:(id*)arg1;
+ (void)overrideWithPropertyList:(id)arg1;
+ (bool)refresh;
+ (void)refreshAsync;

@end
