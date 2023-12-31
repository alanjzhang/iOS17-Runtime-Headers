/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore
 */

@interface SKADatabaseTransientSubscriptionHistory : NSObject {
    NSString * _channelIdentifier;
    NSDate * _lastSubscriptionDate;
}

@property (nonatomic, readonly) NSString *channelIdentifier;
@property (nonatomic, readonly) NSDate *lastSubscriptionDate;

- (void).cxx_destruct;
- (id)channelIdentifier;
- (id)initWithChannelIdentifier:(id)arg1 lastSubscriptionDate:(id)arg2;
- (id)lastSubscriptionDate;

// SKADatabaseTransientSubscriptionHistory (CoreData)

- (id)initWithCoreDataTransientSubscriptionHistory:(id)arg1;

@end
