/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface SIOrderedEvent : NSObject <BMStoreData> {
    SIOrderedEventInternal * _underlying;
    SILogicalTimestamp * _underlyingTimestamp;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SILogicalTimestamp *logicalTimestamp;
@property (nonatomic, readonly) NSUUID *messageUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SISchemaTopLevelUnionType *topLevelUnionType;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

+ (id)deserializeFromData:(id)arg1;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)initWithInternalType:(id)arg1;
- (id)initWithTimestamp:(id)arg1 messageUUID:(id)arg2 topLevelUnionType:(id)arg3;
- (id)logicalTimestamp;
- (id)messageUUID;
- (id)serialize;
- (id)topLevelUnionType;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AIMLInstrumentationStreams.framework/AIMLInstrumentationStreams

// SIOrderedEvent (null)

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics

// SIOrderedEvent (Biome)

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;

@end