/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKAudioExposureUtilities : NSObject

+ (id)_classificationValueWithLEQ:(double)arg1 duration:(double)arg2 days:(long long)arg3;
+ (double)_rounded:(double)arg1;
+ (unsigned long long)classifyLEQ:(id)arg1 forDuration:(double)arg2 overDays:(long long)arg3;
+ (id)computeLEQFromAudioExposureValues:(id)arg1;
+ (id)localizedDisplayNameForClassification:(unsigned long long)arg1;
+ (id)localizedDisplayNameForClassification:(unsigned long long)arg1 isEmbedded:(bool)arg2;
+ (double)maximumDurationInSecondsForLEQ:(double)arg1 days:(long long)arg2;

@end
