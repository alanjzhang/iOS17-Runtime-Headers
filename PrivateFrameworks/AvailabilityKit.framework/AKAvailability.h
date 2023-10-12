/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AvailabilityKit.framework/AvailabilityKit
 */

@interface AKAvailability : NSObject {
    NSString * _activityIdentifierString;
    bool  _available;
    bool  _personalizedAvailability;
}

@property (nonatomic, readonly) NSUUID *activityIdentifier;
@property (nonatomic, readonly) NSString *activityIdentifierString;
@property (getter=isAvailable, nonatomic, readonly) bool available;
@property (getter=isAvailableToMe, nonatomic, readonly) bool availableToMe;
@property (nonatomic, readonly) bool personalizedAvailability;

- (void).cxx_destruct;
- (id)_initWithAvailable:(bool)arg1 activityIdentifierString:(id)arg2 personalizedAvailability:(bool)arg3;
- (id)activityIdentifierString;
- (id)initWithAvailable:(bool)arg1 activityIdentifierString:(id)arg2;
- (bool)isAvailable;
- (bool)personalizedAvailability;

// AKAvailability (Deprecated)

- (id)activityIdentifier;
- (id)initWithAvailable:(bool)arg1 activityIdentifier:(id)arg2;

// AKAvailability (StatusKit)

+ (id)logger;

- (id)_payloadDictionary;
- (id)initWithPublishedStatus:(id)arg1;
- (id)initWithStatusPayload:(id)arg1 invitationPayload:(id)arg2;
- (bool)isAvailableToMe;
- (id)statusPublishRequest;

@end
