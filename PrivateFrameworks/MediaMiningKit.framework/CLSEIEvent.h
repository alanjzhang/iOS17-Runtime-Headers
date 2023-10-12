/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

@interface CLSEIEvent : NSManagedObject

@property (nonatomic, copy) NSSet *artists;
@property (nonatomic, copy) NSSet *categories;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) double endTime;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic) long long timeZoneOffset;
@property (nonatomic) long long uuid;
@property (nonatomic, retain) CLSEIVenue *venue;

- (id)timeZone;

@end
