/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStructuredDictationFailed : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *dialogIdentifier;
@property (nonatomic) long long errorCode;
@property (nonatomic, copy) NSString *recognition;
@property (nonatomic, copy) NSString *userFacingReasonDescription;
@property (nonatomic, copy) NSString *userFacingReasonTitle;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)structuredDictationFailed;
+ (id)structuredDictationFailedWithDictionary:(id)arg1 context:(id)arg2;

- (id)dialogIdentifier;
- (id)encodedClassName;
- (long long)errorCode;
- (id)groupIdentifier;
- (id)recognition;
- (bool)requiresResponse;
- (void)setDialogIdentifier:(id)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setRecognition:(id)arg1;
- (void)setUserFacingReasonDescription:(id)arg1;
- (void)setUserFacingReasonTitle:(id)arg1;
- (id)userFacingReasonDescription;
- (id)userFacingReasonTitle;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

// SAStructuredDictationFailed (AssistantAdditions)

- (id)af_dialogIdentifier;

@end
