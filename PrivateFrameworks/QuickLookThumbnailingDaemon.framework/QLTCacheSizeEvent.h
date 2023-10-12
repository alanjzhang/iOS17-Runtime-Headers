/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/QuickLookThumbnailingDaemon.framework/QuickLookThumbnailingDaemon
 */

@interface QLTCacheSizeEvent : NSObject <QLTAnalyticsEventProtocol> {
    unsigned long long  _cacheSize;
}

@property (readonly) unsigned long long cacheSize;
@property (readonly) NSString *name;
@property (readonly) id /* block */ propertiesBuilder;

- (id)build;
- (unsigned long long)cacheSize;
- (id)initWithCacheSize:(unsigned long long)arg1;
- (id)name;
- (id /* block */)propertiesBuilder;

@end