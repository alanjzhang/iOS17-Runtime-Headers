/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MessageProtection.framework/MessageProtection
 */

@interface SenderPublicIdentity : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, copy) NSString *destinationHash;
@property (nonatomic, retain) RegisteredPreKey *messagedKey;
@property (nonatomic, retain) NSData *skippedCounters;
@property (nonatomic) int upperBufferIndex;

// SenderPublicIdentity (CoreDataProperties)

+ (id)fetchRequest;

@end
