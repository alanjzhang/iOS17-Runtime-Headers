/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SACalendarDefaultSourceGetCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, retain) SACalendarSource *aceCalendarSource;
@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)defaultSourceGetCompleted;
+ (id)defaultSourceGetCompletedWithAceCalendarSource:(id)arg1;
+ (id)defaultSourceGetCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceCalendarSource;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithAceCalendarSource:(id)arg1;
- (bool)requiresResponse;
- (void)setAceCalendarSource:(id)arg1;

@end
