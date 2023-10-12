/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAResultSelected : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *isMitigated;
@property (nonatomic, copy) NSNumber *processedAudioDuration;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, copy) NSString *resultId;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)resultSelected;
+ (id)resultSelectedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)isMitigated;
- (id)processedAudioDuration;
- (bool)requiresResponse;
- (id)resultId;
- (void)setIsMitigated:(id)arg1;
- (void)setProcessedAudioDuration:(id)arg1;
- (void)setResultId:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriCore.framework/SiriCore

// SAResultSelected (SiriCoreSessionObject)

- (bool)siriCore_isProvisional;
- (bool)siriCore_isRetryable;

@end
