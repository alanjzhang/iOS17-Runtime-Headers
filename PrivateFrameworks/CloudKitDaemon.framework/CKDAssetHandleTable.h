/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetHandleTable : CKSQLiteTable

+ (id)dbProperties;
+ (Class)entryClass;

- (bool)assetHandleExistsInDatabase:(id)arg1;
- (id)assetHandleWithUUID:(id)arg1;
- (id)interruptedAssetWithSignature:(id)arg1 error:(id*)arg2;
- (id)oldestLastUsedTime;
- (id)saveChunkCount:(id)arg1;
- (id)saveLastUsedTime:(id)arg1;
- (id)saveOrInsert:(id)arg1;
- (id)saveStatus:(id)arg1;
- (id)saveStatusAndChunkCount:(id)arg1;
- (id)selectProperties:(id)arg1 inAssetHandlesWithStatus:(long long)arg2 error:(id*)arg3;

@end
