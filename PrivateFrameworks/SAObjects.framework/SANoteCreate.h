/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SANoteCreate : SADomainCommand

@property (nonatomic, copy) NSString *contents;

+ (id)create;
+ (id)createWithDictionary:(id)arg1 context:(id)arg2;

- (id)contents;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setContents:(id)arg1;

@end
