/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIDelayedActionCommand : SADomainCommand

@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSNumber *timerValue;

+ (id)delayedActionCommand;
+ (id)delayedActionCommandWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCommands:(id)arg1;
- (void)setTimerValue:(id)arg1;
- (id)timerValue;

@end
