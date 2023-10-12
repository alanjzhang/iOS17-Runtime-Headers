/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPGeniusSummonFailed : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long errorCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)geniusSummonFailed;
+ (id)geniusSummonFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)geniusSummonFailedWithErrorCode:(long long)arg1;
+ (id)geniusSummonFailedWithReason:(id)arg1;

- (id)encodedClassName;
- (long long)errorCode;
- (id)groupIdentifier;
- (id)initWithErrorCode:(long long)arg1;
- (id)initWithReason:(id)arg1;
- (id)reason;
- (bool)requiresResponse;
- (void)setErrorCode:(long long)arg1;
- (void)setReason:(id)arg1;

@end
