/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMCommandUserDataMigration : MCMCommand

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (bool)_bundleContainerExistsForDataContainer:(id)arg1 error:(id*)arg2;
- (int)_intendedDataProtectionClassBasedOnEntitlementsForIdentifier:(id)arg1;
- (void)_setDataProtectionIfNecessaryOnContainer:(id)arg1;
- (void)execute;
- (bool)preflightClientAllowed;

@end
