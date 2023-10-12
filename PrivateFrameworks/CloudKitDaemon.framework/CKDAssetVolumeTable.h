/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAssetVolumeTable : CKSQLiteTable {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _volumeIndexByVolumeUUID;
    NSMutableDictionary * _volumeUUIDByVolumeIndex;
}

+ (id)dbProperties;
+ (Class)entryClass;

- (void).cxx_destruct;
- (void)_lockedSetVolumeIndex:(id)arg1 forVolumeUUID:(id)arg2;
- (id)initWithLogicalTableName:(id)arg1;
- (id)unmountedAssetVolumes;
- (id)volumeIndexForVolumeUUID:(id)arg1;
- (id)volumeUUIDWithVolumeIndex:(id)arg1;
- (id)wakeFromDatabase;

@end