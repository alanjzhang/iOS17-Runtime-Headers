/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKFrozenReminderStructuredLocation : EKFrozenReminderObject

@property (readonly) NSString *uniqueIdentifier;

+ (bool)canCommitSelf;
+ (Class)meltedClass;
+ (id)uniqueIdentifierForREMObject:(id)arg1;

- (id)_structuredLocation;
- (id)address;
- (id)initWithAlternateUniverseObject:(id)arg1 inEventStore:(id)arg2 withUpdatedChildObjects:(id)arg3;
- (double)latitude;
- (double)longitude;
- (id)mapKitHandle;
- (double)radius;
- (int)referenceFrame;
- (id)remObjectID;
- (void)setLatitudeAndLongitudeFromAlternateUniverseObject:(id)arg1 inChangeSet:(id)arg2;
- (id)title;
- (id)uniqueIdentifier;
- (id)updateParentToCommitSelf:(id)arg1;
- (id)updatedStructuredLocation;
- (id)uuid;

@end
