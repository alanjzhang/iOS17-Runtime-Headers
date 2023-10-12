/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDeviceSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_syncCodableDevice:(id*)arg1 fromRow:(struct HDSQLiteRow { }*)arg2 transaction:(id)arg3 error:(id*)arg4;
+ (id)decodeSyncObjectWithData:(id)arg1;
+ (id)excludedSyncStoresForSession:(id)arg1;
+ (bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange { long long x1; long long x2; })arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5;
+ (long long)nextSyncAnchorWithSession:(id)arg1 startSyncAnchor:(long long)arg2 profile:(id)arg3 error:(id*)arg4;
+ (long long)receiveSyncObjects:(id)arg1 version:(struct { int x1; int x2; })arg2 syncStore:(id)arg3 profile:(id)arg4 error:(id*)arg5;
+ (id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1;
+ (id)syncEntityIdentifier;

// HDDeviceSyncEntity (NanoSyncSupport)

+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;

@end
