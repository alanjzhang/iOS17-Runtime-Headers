/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INCarDefrosterResolutionResult : INIntentResolutionResult

+ (id)confirmationRequiredWithCarDefrosterToConfirm:(long long)arg1;
+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;
+ (id)successWithResolvedCarDefroster:(long long)arg1;
+ (id)successWithResolvedValue:(long long)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(id /* block */)arg4;

@end
