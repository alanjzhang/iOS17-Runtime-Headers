/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface TransparencySFAnalytics : SFAnalytics

+ (id)databasePath;
+ (id)logger;

- (void)backgroundPerform:(id /* block */)arg1;
- (void)logHardFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logMetric:(id)arg1 withName:(id)arg2;
- (void)logResultForEvent:(id)arg1 hardFailure:(bool)arg2 result:(id)arg3;
- (void)logResultForEvent:(id)arg1 hardFailure:(bool)arg2 result:(id)arg3 withAttributes:(id)arg4;
- (void)logSoftFailureForEventNamed:(id)arg1 withAttributes:(id)arg2;
- (void)logSuccessForEventNamed:(id)arg1;
- (void)noteEventNamed:(id)arg1;

@end
