/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASVPolicyActionNode : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *children;
@property (nonatomic, copy) NSString *confirmationType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) SASVSpeechMetadata *speechMetadata;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *type;

+ (id)policyActionNode;
+ (id)policyActionNodeWithDictionary:(id)arg1 context:(id)arg2;

- (id)children;
- (id)confirmationType;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)name;
- (void)setChildren:(id)arg1;
- (void)setConfirmationType:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSpeechMetadata:(id)arg1;
- (void)setType:(id)arg1;
- (id)speechMetadata;
- (id)type;

@end
