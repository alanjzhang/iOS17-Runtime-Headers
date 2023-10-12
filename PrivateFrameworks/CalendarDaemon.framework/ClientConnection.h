/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface ClientConnection : NSObject <CDBAccountInfo, CalCalendarDatabaseIntegrityErrorReportingDelegate, CalCalendarDatabaseRestoreGenerationChangedDelegate> {
    CADAccountAccessHandler * _accountAccessHandler;
    <CADACAccountsProvider> * _accountsProvider;
    NSObject<OS_dispatch_queue> * _asynchronousOperationQueue;
    int  _auxDatabaseSequence;
    CADOperationProxy * _cadOperationProxy;
    CADDatabaseInitializationOptions * _databaseInitializationOptions;
    int  _databaseRestoreGeneration;
    NSMutableDictionary * _databases;
    NSObject<OS_dispatch_queue> * _dbQueue;
    <ClientConnectionDelegate> * _delegate;
    ClientIdentity * _identity;
    bool  _initializationOptionsSet;
    <CDBAccountInfo> * _localAccountInfo;
    NSMutableArray * _operations;
    <CADPermissionValidator> * _permissionValidator;
    CADAccountAccessHandler * _strictAccountAccessHandler;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) CADAccountAccessHandler *accountAccessHandler;
@property (nonatomic, readonly) CADOperationProxy *cadOperationProxy;
@property (nonatomic, readonly) NSString *changeTrackingID;
@property (nonatomic, readonly) CADDatabaseInitializationOptions *databaseInitializationOptions;
@property (readonly) int databaseRestoreGeneration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ClientConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *effectiveApplicationIdentifier;
@property (nonatomic, readonly) NSString *effectiveTeamIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ClientIdentity *identity;
@property (readonly) bool initializationOptionsSet;
@property (nonatomic, retain) <CDBAccountInfo> *localAccountInfo;
@property (nonatomic, readonly) <CADPermissionValidator> *permissionValidator;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (id)_accountsProvider;
- (void)_closeDatabases;
- (id)_createManagedConfigAccountAccessHandlerWithValidator:(id)arg1;
- (void)_databaseRestoreGenerationChanged:(int)arg1;
- (id)_databases;
- (void)_initAccountAccessHandler;
- (id)_permissionValidator;
- (id)accountAccessHandler;
- (id)accountsProvider;
- (void)addCreatedAuxDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1;
- (void)addOperation:(id)arg1;
- (bool)addressIsAccountOwner:(id)arg1;
- (id)cadOperationProxy;
- (id)changeTrackingID;
- (void)clearCachedAuthorizationStatus;
- (void)closeDatabases;
- (void)database:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg1 restoreGenerationChangedExternally:(int)arg2;
- (id)databaseInitializationOptions;
- (int)databaseRestoreGeneration;
- (void)databaseRestoreGenerationChanged:(int)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dumpState;
- (id)effectiveApplicationIdentifier;
- (id)effectiveTeamIdentifier;
- (int)eventAccessLevel;
- (void)handleDatabaseChanged;
- (void)handleDatabaseChangedExternally;
- (id)identity;
- (id)initWithXPCConnection:(id)arg1;
- (bool)initializationOptionsSet;
- (bool)isAlarmRestricted:(void*)arg1 forAction:(unsigned long long)arg2;
- (bool)isCalendarItemManaged:(void*)arg1;
- (bool)isCalendarItemRestricted:(void*)arg1 forAction:(unsigned long long)arg2;
- (bool)isCalendarManaged:(void*)arg1;
- (bool)isCalendarRestricted:(void*)arg1 forAction:(unsigned long long)arg2;
- (bool)isNotificationRestricted:(void*)arg1 forAction:(unsigned long long)arg2;
- (bool)isStoreManaged:(void*)arg1;
- (bool)isStoreRestricted:(void*)arg1 forAction:(unsigned long long)arg2;
- (bool)isStoreRestricted:(void*)arg1 forAction:(unsigned long long)arg2 strict:(bool)arg3;
- (id)localAccountInfo;
- (void)logAccessToEntities:(id)arg1;
- (void)logAccessToObject:(id)arg1;
- (void)logAccessToObjects:(id)arg1;
- (int)managedConfigurationAccountAccessForStore:(void*)arg1;
- (id)operations;
- (void)performWithAllDatabases:(id /* block */)arg1;
- (id)permissionValidator;
- (bool)reminderAccessGranted;
- (void)reportIntegrityErrors:(id)arg1;
- (id)restrictedCalendarRowIDsForAction:(unsigned long long)arg1 inDatabase:(struct CalDatabase { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; int x2; struct CPRecordStore {} *x3; struct CalEventOccurrenceCache {} *x4; struct CalScheduledTaskCache {} *x5; void *x6; void *x7; struct __CFDictionary {} *x8; struct __CFDictionary {} *x9; struct os_unfair_lock_s { unsigned int x_10_1_1; } x10; unsigned int x11; unsigned int x12; struct __CFArray {} *x13; struct __CFString {} *x14; struct __CFArray {} *x15; int x16; int x17; struct __CFString {} *x18; struct __CFURL {} *x19; struct __CFString {} *x20; struct __CFString {} *x21; unsigned long long x22; int x23; int x24; int x25; id /* block */ x26; struct _opaque_pthread_mutex_t { long long x_27_1_1; BOOL x_27_1_2[56]; } x27; bool x28; struct __CFArray {} *x29; bool x30; struct __CFSet {} *x31; id x32; id x33; id x34; int x35; id x36; id x37; id x38; char *x39; unsigned int x40; unsigned int x41; int x42; bool x43; bool x44; bool x45; bool x46; bool x47; bool x48; bool x49; }*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setLocalAccountInfo:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)strictAccountAccessHandler;
- (bool)trySetDatabaseInitializationOptions:(id)arg1;
- (void)validateAuxDatabases;
- (bool)withDatabaseForObject:(id)arg1 perform:(id /* block */)arg2;
- (bool)withDatabaseForObjects:(id)arg1 options:(unsigned long long)arg2 perform:(id /* block */)arg3;
- (bool)withDatabaseForObjects:(id)arg1 perform:(id /* block */)arg2;
- (bool)withDatabaseID:(int)arg1 perform:(id /* block */)arg2;
- (id)xpcConnection;

@end
