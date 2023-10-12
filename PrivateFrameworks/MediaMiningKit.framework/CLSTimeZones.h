/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSTimeZones : NSObject {
    NSArray * _timeZonesDB;
}

@property (nonatomic, retain) NSArray *timeZonesDB;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_importDataBaseFromFile:(id)arg1;
- (id)closestZoneInfoWithLocation:(id)arg1 source:(id)arg2;
- (id)filteredTimeZonesWithCountyCode:(id)arg1;
- (void)invalidateCaches;
- (void)setTimeZonesDB:(id)arg1;
- (id)timeZoneWithDictionary:(id)arg1;
- (id)timeZoneWithLocation:(id)arg1;
- (id)timeZoneWithLocation:(id)arg1 countryCode:(id)arg2;
- (id)timeZonesDB;

@end
