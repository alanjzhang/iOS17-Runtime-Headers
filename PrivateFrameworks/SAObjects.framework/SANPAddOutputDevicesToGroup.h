/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANPAddOutputDevicesToGroup : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)addOutputDevicesToGroup;
+ (id)addOutputDevicesToGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupID;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setGroupID:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

// SANPAddOutputDevicesToGroup (AnalyticsContextVending)

- (void)af_addEntriesToAnalyticsContext:(id)arg1;

@end
