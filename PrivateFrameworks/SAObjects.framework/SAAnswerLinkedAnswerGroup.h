/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAnswerLinkedAnswerGroup : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *linkedAnswers;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)linkedAnswerGroup;
+ (id)linkedAnswerGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)linkedAnswers;
- (void)setLinkedAnswers:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
