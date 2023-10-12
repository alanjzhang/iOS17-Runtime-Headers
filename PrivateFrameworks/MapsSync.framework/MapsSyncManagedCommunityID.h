/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
 */

@interface MapsSyncManagedCommunityID : NSManagedObject

@property (nonatomic, copy) NSString *communityIdentifier;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic) bool expired;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *modificationTime;
@property (nonatomic) long long positionIndex;
@property (nonatomic, retain) NSSet *rapRecords;
@property (nonatomic, retain) NSSet *reviewedPlaces;
@property (nonatomic) long long usedCount;

+ (Class)wrapperClass;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
