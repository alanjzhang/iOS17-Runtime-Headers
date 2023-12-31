/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics
 */

@interface SiriAnalyticsMessage : NSObject {
    SiriAnalyticsLogicalTimeStamp * _logicalTimestamp;
    NSUUID * _messageUUID;
    SISchemaTopLevelUnionType * _underlyingMessage;
}

@property (nonatomic, retain) SiriAnalyticsLogicalTimeStamp *logicalTimestamp;
@property (nonatomic, copy) NSUUID *messageUUID;
@property (nonatomic, retain) SISchemaTopLevelUnionType *underlyingMessage;

- (void).cxx_destruct;
- (id)init;
- (id)initWithMessageUUID:(id)arg1 logicalTimestamp:(id)arg2 underlying:(id)arg3;
- (id)logicalTimestamp;
- (id)messageUUID;
- (void)setLogicalTimestamp:(id)arg1;
- (void)setMessageUUID:(id)arg1;
- (void)setUnderlyingMessage:(id)arg1;
- (id)underlyingMessage;

// SiriAnalyticsMessage (Storage)

- (id)storageRepresentation;

@end
