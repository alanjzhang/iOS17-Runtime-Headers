/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation
 */

@interface BMPublicStreamUtilities : NSObject

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeFoundation.framework/BiomeFoundation

+ (id)allowedStreamWriteIdentifiersForStream:(long long)arg1;
+ (unsigned long long)domainForStream:(long long)arg1;
+ (id)libraryPublicStreamMigrationPaths;
+ (id)libraryPublicStreamReverseMigrationPaths;
+ (long long)streamForPreMigrationStreamIdentifier:(id)arg1;
+ (long long)streamForStreamIdentifier:(id)arg1;
+ (id)streamIdentifierForPreMigrationStream:(long long)arg1;
+ (id)streamIdentifierForStream:(long long)arg1;
+ (id)streamIdentifiers;
+ (bool)writeAllowedForStream:(long long)arg1 processIdentifier:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage

// BMPublicStreamUtilities (Storage)

+ (id)storeConfigurationForPreMigrationStream:(long long)arg1;
+ (id)storeConfigurationForStream:(long long)arg1;
+ (id)storeConfigurationForStream:(long long)arg1 protectionClass:(unsigned long long)arg2;
+ (id)storeConfigurationForStream:(long long)arg1 protectionClass:(unsigned long long)arg2 streamType:(unsigned long long)arg3;
+ (id)streamPathForStream:(long long)arg1;

@end
