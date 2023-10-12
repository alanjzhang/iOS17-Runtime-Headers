/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSessionInvitationSentMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSString * _guid;
    NSNumber * _numberOfRecipients;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *guid;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *numberOfRecipients;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)guid;
- (id)initWithGuid:(id)arg1 numberOfRecipients:(id)arg2;
- (id)name;
- (id)numberOfRecipients;

@end
