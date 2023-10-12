/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore
 */

@interface TransientSubscriptionHistory : NSManagedObject

@property (nonatomic, copy) NSString *channelIdentifier;
@property (nonatomic, copy) NSDate *lastSubscriptionDate;

// TransientSubscriptionHistory (CoreDataProperties)

+ (id)fetchRequest;

// TransientSubscriptionHistory (KeyPathConstants)

+ (id)channelIdentifierKeyPath;
+ (id)lastSubscriptionDateKeyPath;

// TransientSubscriptionHistory (Predicates)

+ (id)predicateForChannelIdentifier:(id)arg1;
+ (id)predicateForLastSubscriptionDate:(id)arg1;

// TransientSubscriptionHistory (SortDescriptors)

+ (id)sortDescriptorForLastSubscriptionDateAscending:(bool)arg1;

@end
