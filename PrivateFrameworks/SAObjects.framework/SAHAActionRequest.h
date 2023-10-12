/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAActionRequest : SADomainObject

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic) long long executionOrder;
@property (nonatomic, retain) SAHAFilter *filter;

+ (id)actionRequest;
+ (id)actionRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)actions;
- (id)encodedClassName;
- (long long)executionOrder;
- (id)filter;
- (id)groupIdentifier;
- (void)setActions:(id)arg1;
- (void)setExecutionOrder:(long long)arg1;
- (void)setFilter:(id)arg1;

@end
