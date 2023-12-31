/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Matter.framework/Matter
 */

@interface BleConnection : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate> {
    void * _appState;
    NSMutableDictionary * _cachedPeripherals;
    CBCentralManager * _centralManager;
    NSObject<OS_dispatch_queue> * _chipWorkQueue;
    unsigned char  _currentMode;
    struct SetupDiscriminator { 
        unsigned int mDiscriminator : 12; 
        unsigned int mIsShortDiscriminator : 1; 
    }  _deviceDiscriminator;
    bool  _found;
    struct BleLayer { int x1; void *x2; struct BleLayerDelegate {} *x3; int (*x4)(); struct BleConnectionDelegate {} *x5; struct BlePlatformDelegate {} *x6; struct BleApplicationDelegate {} *x7; struct Layer {} *x8; } * _mBleLayer;
    int (* _onConnectionComplete;
    int (* _onConnectionError;
    CBPeripheral * _peripheral;
    struct BleScannerDelegate { int (**x1)(); } * _scannerDelegate;
    CBUUID * _shortServiceUUID;
    NSObject<OS_dispatch_source> * _timer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic) void*appState;
@property (nonatomic, retain) NSMutableDictionary *cachedPeripherals;
@property (nonatomic, retain) CBCentralManager *centralManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *chipWorkQueue;
@property (nonatomic, readonly) unsigned char currentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct SetupDiscriminator { unsigned int x1 : 12; unsigned int x2 : 1; } deviceDiscriminator;
@property (nonatomic) bool found;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct BleLayer { int x1; void *x2; struct BleLayerDelegate {} *x3; int (*x4)(); struct BleConnectionDelegate {} *x5; struct BlePlatformDelegate {} *x6; struct BleApplicationDelegate {} *x7; struct Layer {} *x8; }*mBleLayer;
@property (nonatomic) int (*onConnectionComplete;
@property (nonatomic) int (*onConnectionError;
@property (nonatomic, retain) CBPeripheral *peripheral;
@property (nonatomic) struct BleScannerDelegate { int (**x1)(); }*scannerDelegate;
@property (nonatomic, retain) CBUUID *shortServiceUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *timer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (void)fillServiceWithCharacteristicUuids:(id)arg1 svcId:(struct ChipBleUUID { unsigned char x1[16]; }*)arg2 charId:(struct ChipBleUUID { unsigned char x1[16]; }*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addPeripheralToCache:(id)arg1 data:(id)arg2;
- (void*)appState;
- (id)cachedPeripherals;
- (id)centralManager;
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (void)centralManagerDidUpdateState:(id)arg1;
- (bool)checkDiscriminator:(unsigned short)arg1;
- (id)chipWorkQueue;
- (void)clearTimer;
- (void)connect:(id)arg1;
- (unsigned char)currentMode;
- (struct SetupDiscriminator { unsigned int x1 : 12; unsigned int x2 : 1; })deviceDiscriminator;
- (void)dispatchConnectionComplete:(id)arg1;
- (void)dispatchConnectionError:(struct ChipError { unsigned int x1; char *x2; unsigned int x3; })arg1;
- (bool)found;
- (id)initWithDelegate:(struct BleScannerDelegate { int (**x1)(); }*)arg1 queue:(id)arg2;
- (id)initWithDiscriminator:(const struct SetupDiscriminator { unsigned int x1 : 12; unsigned int x2 : 1; }*)arg1 queue:(id)arg2;
- (id)initWithQueue:(id)arg1;
- (bool)isConnecting;
- (bool)isScanning;
- (bool)isScanningWithoutDelegate;
- (struct BleLayer { int x1; void *x2; struct BleLayerDelegate {} *x3; int (*x4)(); struct BleConnectionDelegate {} *x5; struct BlePlatformDelegate {} *x6; struct BleApplicationDelegate {} *x7; struct Layer {} *x8; }*)mBleLayer;
- (int (*)onConnectionComplete;
- (int (*)onConnectionError;
- (id)peripheral;
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;
- (void)peripheral:(id)arg1 didUpdateNotificationStateForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)peripheral:(id)arg1 didWriteValueForCharacteristic:(id)arg2 error:(id)arg3;
- (void)removePeripheralFromCache:(id)arg1;
- (void)removePeripheralsFromCache;
- (struct BleScannerDelegate { int (**x1)(); }*)scannerDelegate;
- (void)setAppState:(void*)arg1;
- (void)setBleLayer:(struct BleLayer { int x1; void *x2; struct BleLayerDelegate {} *x3; int (*x4)(); struct BleConnectionDelegate {} *x5; struct BlePlatformDelegate {} *x6; struct BleApplicationDelegate {} *x7; struct Layer {} *x8; }*)arg1;
- (void)setCachedPeripherals:(id)arg1;
- (void)setCentralManager:(id)arg1;
- (void)setChipWorkQueue:(id)arg1;
- (void)setDeviceDiscriminator:(struct SetupDiscriminator { unsigned int x1 : 12; unsigned int x2 : 1; })arg1;
- (void)setFound:(bool)arg1;
- (void)setMBleLayer:(struct BleLayer { int x1; void *x2; struct BleLayerDelegate {} *x3; int (*x4)(); struct BleConnectionDelegate {} *x5; struct BlePlatformDelegate {} *x6; struct BleApplicationDelegate {} *x7; struct Layer {} *x8; }*)arg1;
- (void)setOnConnectionComplete:(int (*)arg1;
- (void)setOnConnectionError:(int (*)arg1;
- (void)setPeripheral:(id)arg1;
- (void)setScannerDelegate:(struct BleScannerDelegate { int (**x1)(); }*)arg1;
- (void)setShortServiceUUID:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)setupTimer:(unsigned long long)arg1;
- (id)shortServiceUUID;
- (void)start;
- (void)startScanning;
- (void)stop;
- (void)stopScanning;
- (id)timer;
- (void)updateWithDelegate:(struct BleScannerDelegate { int (**x1)(); }*)arg1;
- (void)updateWithDiscriminator:(const struct SetupDiscriminator { unsigned int x1 : 12; unsigned int x2 : 1; }*)arg1;
- (void)updateWithPeripheral:(id)arg1;
- (id)workQueue;

@end
