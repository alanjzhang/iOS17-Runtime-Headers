/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKDiscreteQuantitySampleComparisonFilter : _HKComparisonFilter

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)allowedDataTypeClassesForKeyPath:(id)arg1;
+ (id)allowedValueClassesForKeyPath:(id)arg1;
+ (bool)areValidTypes:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
+ (long long)enumRepresentationForKeyPath:(id)arg1;
+ (bool)isSupportedKeyPath:(id)arg1;
+ (bool)isValidValue:(id)arg1 forKeyPath:(id)arg2 operatorType:(unsigned long long)arg3 dataTypes:(id)arg4 error:(id*)arg5;

- (bool)acceptsDataObject:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

// _HKDiscreteQuantitySampleComparisonFilter (HealthDaemon)

- (id)predicateWithProfile:(id)arg1;

@end
