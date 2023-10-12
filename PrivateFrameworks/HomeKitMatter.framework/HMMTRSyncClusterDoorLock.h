/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HomeKitMatter.framework/HomeKitMatter
 */

@interface HMMTRSyncClusterDoorLock : MTRClusterDoorLock <HMFLogging> {
    HMFFuture * _apiSerializationFuture;
    MTRBaseDevice * _baseDevice;
    MTRDevice * _device;
    unsigned short  _endpoint;
    NSObject<OS_dispatch_queue> * _queue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _unfairLock;
}

@property (retain) HMFFuture *apiSerializationFuture;
@property (retain) MTRBaseDevice *baseDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) MTRDevice *device;
@property unsigned short endpoint;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } unfairLock;

+ (id)colorFromAttributeResponse:(id)arg1;
+ (id)deriveHomePinFromUUID:(id)arg1 withNumberOfDigits:(long long)arg2 flow:(id)arg3;
+ (id)doorLockFeatureMapSupportsPinCodes:(id)arg1;
+ (id)logCategory;
+ (id)numberFromAttributeResponse:(id)arg1;
+ (id)pinDataWithDigits:(id)arg1;
+ (id)productFinishFromAttributeResponse:(id)arg1;
+ (id)valueFromAttributeResponse:(id)arg1;
+ (id)valueFromDictionaryWithData:(id)arg1;

- (void).cxx_destruct;
- (id)_findUserOrAvailableSlotWithUserUniqueID:(id)arg1 flow:(id)arg2;
- (id)_getUserAtIndex:(long long)arg1 flow:(id)arg2;
- (id)_removeUserWithUniqueID:(id)arg1 flow:(id)arg2;
- (bool)accessoryHasCOTAEnabled;
- (id)addCredentialData:(id)arg1 forCredentialType:(id)arg2 atIndex:(long long)arg3 forUserAtUserIndex:(long long)arg4 flow:(id)arg5;
- (id)addDeviceCredentialKeyData:(id)arg1 forUserIndex:(long long)arg2 flow:(id)arg3;
- (id)addIssuerKeyData:(id)arg1 forUserIndex:(long long)arg2 flow:(id)arg3;
- (id)addOrUpdatePinCodeWithValue:(id)arg1 forUserIndex:(long long)arg2;
- (id)addOrUpdateReaderKeyData:(id)arg1 flow:(id)arg2;
- (id)addPinCodeWithValue:(id)arg1 forUserIndex:(long long)arg2 flow:(id)arg3;
- (id)addPinCredentialAtIndex:(long long)arg1 withValue:(id)arg2 forUserAtUserIndex:(long long)arg3 flow:(id)arg4;
- (id)addReaderKeyData:(id)arg1 flow:(id)arg2;
- (id)addUserAtUserIndex:(long long)arg1 withUserUniqueID:(long long)arg2 isRemote:(bool)arg3 flow:(id)arg4;
- (id)apiSerializationFuture;
- (id)baseDevice;
- (id)clearCredentialAtIndex:(long long)arg1 withCredentialType:(id)arg2 flow:(id)arg3;
- (id)clearUserAtIndex:(long long)arg1 flow:(id)arg2;
- (void)dealloc;
- (id)deriveHomePinFromUUID:(id)arg1 flow:(id)arg2;
- (id)device;
- (unsigned short)endpoint;
- (id)fetchAccessoryColor_flow:(id)arg1;
- (id)fetchAccessorySupportsPinCodes;
- (id)fetchAccessorySupportsTapToUnlock;
- (id)fetchCurrentFabricIndex;
- (id)fetchCurrentFabricIndex_flow:(id)arg1;
- (id)fetchFeatureMap;
- (id)findAllUsersWithCreatorFabricIndex:(id)arg1 indexStartingAtSlot:(long long)arg2 assumingTotalNumberOfSlots:(long long)arg3 users:(id)arg4 flow:(id)arg5;
- (id)findAvailableCredentialIndexStartingAtSlot:(long long)arg1 forCredentialType:(long long)arg2 assumingTotalNumberOfSlots:(long long)arg3 flow:(id)arg4;
- (id)findHomeUserWithUniqueID:(id)arg1 indexStartingAtSlot:(long long)arg2 assumingTotalNumberOfSlots:(long long)arg3 availableSlots:(id)arg4 currentFabricIndex:(id)arg5 flow:(id)arg6;
- (id)findOrAddUserWithUniqueID:(id)arg1 flow:(id)arg2;
- (id)findOrAddUserWithUniqueID:(id)arg1 isRemote:(bool)arg2 flow:(id)arg3;
- (id)findUserOrAvailableSlotWithUserUniqueID:(id)arg1 flow:(id)arg2;
- (id)firstAvailableCredentialSlotForCredentialType:(long long)arg1 flow:(id)arg2;
- (id)getAllCredentialsIndexStartingAtSlot:(long long)arg1 forCredentialType:(long long)arg2 credentials:(id)arg3 flow:(id)arg4;
- (id)getAllPinCodes;
- (id)getAllUsers;
- (id)getAllUsersStartingAtSlot:(long long)arg1 assumingTotalNumberOfSlots:(long long)arg2 users:(id)arg3 flow:(id)arg4;
- (id)getCredentialAtIndex:(long long)arg1 forCredentialType:(long long)arg2 flow:(id)arg3;
- (id)getUserAtIndex:(long long)arg1 flow:(id)arg2;
- (id)getUsersWithUniqueIDs:(id)arg1 flow:(id)arg2;
- (id)initWithDevice:(id)arg1 baseDevice:(id)arg2 endpoint:(unsigned short)arg3 queue:(id)arg4;
- (void)lockDoorWithAccessoryUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)lockWithPin:(id)arg1 flow:(id)arg2;
- (id)lock_flow:(id)arg1;
- (id)pinCredentialForUser:(id)arg1 flow:(id)arg2;
- (id)provisionHomePin:(id)arg1 flow:(id)arg2;
- (id)queue;
- (id)readAttributeLockTargetStateWithParams:(id)arg1;
- (id)removeHomeUser;
- (id)removePinCodeForUserIndex:(long long)arg1;
- (id)removeUserWithUniqueID:(id)arg1;
- (id)rfidCredentialForUser:(id)arg1 flow:(id)arg2;
- (id)serialize:(id /* block */)arg1;
- (void)setApiSerializationFuture:(id)arg1;
- (void)setBaseDevice:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setEndpoint:(unsigned short)arg1;
- (void)setQueue:(id)arg1;
- (long long)totalNumberOfPINCredentialsSupported_flow:(id)arg1;
- (long long)totalNumberOfRFIDCredentialsSupported_flow:(id)arg1;
- (id)totalNumberOfUsersSupported_flow:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })unfairLock;
- (void)unlockDoorWithAccessoryUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)unlockWithPin:(id)arg1 flow:(id)arg2;
- (id)unlock_flow:(id)arg1;
- (id)updateCredentialData:(id)arg1 forCredentialType:(id)arg2 atIndex:(long long)arg3 forUserAtUserIndex:(long long)arg4 flow:(id)arg5;
- (id)updatePinCredentialAtIndex:(long long)arg1 withValue:(id)arg2 forUserAtUserIndex:(long long)arg3 flow:(id)arg4;

@end
