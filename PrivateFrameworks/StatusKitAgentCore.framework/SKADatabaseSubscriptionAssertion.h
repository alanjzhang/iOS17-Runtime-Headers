/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore
 */

@interface SKADatabaseSubscriptionAssertion : NSObject {
    NSString * _applicationIdentifier;
    NSString * _channelIdentifier;
    NSString * _statusTypeIdentifier;
}

@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSString *channelIdentifier;
@property (nonatomic, readonly) NSString *statusTypeIdentifier;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)channelIdentifier;
- (id)initWithChannelIdentifier:(id)arg1 statusTypeIdentifier:(id)arg2 applicationIdentifier:(id)arg3;
- (id)statusTypeIdentifier;

// SKADatabaseSubscriptionAssertion (CoreData)

- (id)initWithCoreDataSubscriptionAssertion:(id)arg1;

@end
