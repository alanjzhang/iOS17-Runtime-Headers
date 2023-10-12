/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACreateVOXListItem : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *displayHints;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *speakableInSequence;
@property (nonatomic, copy) NSString *speakableStandalone;
@property (readonly) Class superclass;

+ (id)createVOXListItem;
+ (id)createVOXListItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)displayHints;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDisplayHints:(id)arg1;
- (void)setSpeakableInSequence:(id)arg1;
- (void)setSpeakableStandalone:(id)arg1;
- (id)speakableInSequence;
- (id)speakableStandalone;

@end
