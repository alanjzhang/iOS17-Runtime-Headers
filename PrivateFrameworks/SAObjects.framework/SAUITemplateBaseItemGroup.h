/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUITemplateBaseItemGroup : SAUITemplateBaseItem <SAUITemplateItemGroup>

@property (nonatomic, copy) NSArray *communicationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) SAUITemplateEdgeInsets *fullScreenPaddingDelta;
@property (nonatomic) bool hasPriorityLayout;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUITemplateEdgeInsets *padding;
@property (nonatomic, copy) NSArray *presentationOptions;
@property (nonatomic) bool shouldBeOffscreenInPartial;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *templateItems;

+ (id)baseItemGroup;
+ (id)baseItemGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setTemplateItems:(id)arg1;
- (id)templateItems;

@end
