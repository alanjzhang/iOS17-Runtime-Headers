/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ImageCaptureCore.framework/ImageCaptureCore
 */

@interface ICCameraDevice : ICDevice {
    bool  _accessRestrictedAppleDevice;
    bool  _allowsSyncingClock;
    unsigned long long  _appleRelatedUUIDSupport;
    bool  _basicMediaModel;
    unsigned long long  _batteryLevel;
    bool  _batteryLevelAvailable;
    bool  _beingEjected;
    struct CGImage { } * _cameraDeviceIcon;
    bool  _contentReceived;
    NSMutableArray * _convertedMediaFiles;
    NSProgress * _deleteProgress;
    unsigned long long  _devAccessRestriction;
    NSMutableSet * _devCapabilities;
    NSObject<OS_dispatch_queue> * _devCommandQueue;
    NSXPCConnection * _devConnection;
    id /* block */  _devConnectionFailureBlock;
    unsigned long long  _devContentCatalogPercentCompleted;
    NSMutableArray * _devContents;
    NSXPCListenerEndpoint * _devEndpoint;
    unsigned long long  _devFailureCount;
    NSMutableArray * _devMediaFiles;
    unsigned long long  _devMediaPresentation;
    NSObject<OS_dispatch_queue> * _devNotificationQueue;
    NSString * _devProductType;
    NSObject<OS_dispatch_queue> * _devWriteQueue;
    unsigned long long  _deviceAccessRestriction;
    NSProgress * _downloadProgress;
    bool  _ejectable;
    long long  _enumerationOrder;
    bool  _iCloudPhotosEnabled;
    unsigned long long  _iCloudPhotosOptimizeStorageState;
    ICOrderedMediaSet * _indexedMediaSet;
    bool  _isEnumeratingContent;
    bool  _locked;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mediaLock;
    unsigned long long  _mediaObjectCount;
    NSMutableDictionary * _mobdevProperties;
    NSString * _mountPoint;
    NSMutableArray * _originalMediaFiles;
    long long  _preflightCountOfObjects;
    unsigned long long  _previouslyIndexed;
    id /* block */  _ptpEventHandler;
    bool  _tetheredCaptureEnabled;
    double  _timeOffset;
    NSMutableArray * _universalMediaFiles;
}

@property (getter=isAccessRestrictedAppleDevice, nonatomic) bool accessRestrictedAppleDevice;
@property (nonatomic) bool allowsSyncingClock;
@property (nonatomic) unsigned long long appleRelatedUUIDSupport;
@property (readonly) NSString *appleSerialNumber;
@property (nonatomic) bool basicMediaModel;
@property (nonatomic) unsigned long long batteryLevel;
@property (nonatomic) bool batteryLevelAvailable;
@property (nonatomic) bool beingEjected;
@property (readonly) NSString *buildVersion;
@property (nonatomic, retain) struct CGImage { }*cameraDeviceIcon;
@property (nonatomic, readonly) unsigned long long contentCatalogPercentCompleted;
@property (nonatomic) bool contentReceived;
@property (nonatomic, readonly) NSArray *contents;
@property (retain) NSMutableArray *convertedMediaFiles;
@property (nonatomic, retain) NSProgress *deleteProgress;
@property unsigned long long devAccessRestriction;
@property (nonatomic, retain) NSMutableSet *devCapabilities;
@property (retain) NSObject<OS_dispatch_queue> *devCommandQueue;
@property (nonatomic, retain) NSXPCConnection *devConnection;
@property (copy) id /* block */ devConnectionFailureBlock;
@property (nonatomic) unsigned long long devContentCatalogPercentCompleted;
@property (nonatomic, retain) NSMutableArray *devContents;
@property (nonatomic, retain) NSXPCListenerEndpoint *devEndpoint;
@property unsigned long long devFailureCount;
@property (nonatomic, retain) NSMutableArray *devMediaFiles;
@property unsigned long long devMediaPresentation;
@property (retain) NSObject<OS_dispatch_queue> *devNotificationQueue;
@property (nonatomic, copy) NSString *devProductType;
@property (retain) NSObject<OS_dispatch_queue> *devWriteQueue;
@property (nonatomic) unsigned long long deviceAccessRestriction;
@property (readonly) NSString *deviceClass;
@property (readonly) NSString *deviceColor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *deviceCommandQueue;
@property (readonly) NSString *deviceEnclosureColor;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *deviceNotificationQueue;
@property (readonly) NSNumber *devicePairedState;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *deviceWriteQueue;
@property (nonatomic, retain) NSProgress *downloadProgress;
@property (getter=isEjectable, nonatomic) bool ejectable;
@property (nonatomic) long long enumerationOrder;
@property (nonatomic, readonly) unsigned long long estimatedNumberOfDownloadableItems;
@property (nonatomic, readonly) bool iCloudPhotosEnabled;
@property (nonatomic, readonly) unsigned long long iCloudPhotosOptimizeStorageState;
@property (nonatomic, retain) ICOrderedMediaSet *indexedMediaSet;
@property (readonly) bool isEnumeratingContent;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic, readonly) NSArray *mediaFiles;
@property struct os_unfair_lock_s { unsigned int x1; } mediaLock;
@property (nonatomic) unsigned long long mediaObjectCount;
@property (nonatomic) unsigned long long mediaPresentation;
@property (retain) NSMutableDictionary *mobdevProperties;
@property (nonatomic, copy) NSString *mountPoint;
@property (nonatomic, readonly) unsigned long long numberOfDownloadableItems;
@property (retain) NSMutableArray *originalMediaFiles;
@property long long preflightCountOfObjects;
@property (nonatomic) unsigned long long previouslyIndexed;
@property (readonly) NSString *productType;
@property (readonly) NSString *productVersion;
@property (nonatomic, copy) id /* block */ ptpEventHandler;
@property (nonatomic, readonly) bool tetheredCaptureEnabled;
@property (nonatomic) double timeOffset;
@property (retain) NSMutableArray *universalMediaFiles;

+ (bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)uuidStringFromFileProviderIdentifier:(id)arg1;

- (void)addCameraFileToIndex:(id)arg1;
- (void)addCameraFolderToIndex:(id)arg1;
- (void)addCapability:(id)arg1;
- (void)addFolder:(id)arg1;
- (void)addItems:(id)arg1;
- (bool)addMediaFiles:(id)arg1;
- (void)addNumberOfDownloadableItems:(long long)arg1;
- (bool)allowsSyncingClock;
- (unsigned long long)appleRelatedUUIDSupport;
- (id)appleSerialNumber;
- (bool)basicMediaModel;
- (unsigned long long)batteryLevel;
- (bool)batteryLevelAvailable;
- (bool)beingEjected;
- (void)blendMedia:(id)arg1 ofLength:(int)arg2 withMedia:(id)arg3 ofLength:(int)arg4;
- (id)buildVersion;
- (struct CGImage { }*)cameraDeviceIcon;
- (id)cameraFileWithObjectID:(unsigned long long)arg1;
- (long long)cameraFilesContentSizeInBytes;
- (id)cameraFolderWithObjectID:(unsigned long long)arg1;
- (void)cancelDelete;
- (void)cancelDownload;
- (bool)containsRestrictedStorage;
- (unsigned long long)contentCatalogPercentCompleted;
- (bool)contentReceived;
- (id)contents;
- (id)convertedMediaFiles;
- (unsigned long long)countOfObjects;
- (void)dealloc;
- (id)deleteProgress;
- (id)description;
- (unsigned long long)devAccessRestriction;
- (id)devCapabilities;
- (id)devCommandQueue;
- (id)devConnection;
- (id /* block */)devConnectionFailureBlock;
- (unsigned long long)devContentCatalogPercentCompleted;
- (id)devContents;
- (id)devEndpoint;
- (unsigned long long)devFailureCount;
- (id)devMediaFiles;
- (unsigned long long)devMediaPresentation;
- (id)devNotificationQueue;
- (id)devProductType;
- (id)devWriteQueue;
- (unsigned long long)deviceAccessRestriction;
- (id)deviceClass;
- (id)deviceColor;
- (id)deviceCommandQueue;
- (id)deviceEnclosureColor;
- (id)deviceNotificationQueue;
- (id)devicePairedState;
- (id)deviceWriteQueue;
- (void)dispatchAsyncForOperationType:(long long)arg1 block:(id /* block */)arg2;
- (id)downloadProgress;
- (void)dumpPTPPassthruCommand:(id)arg1 andData:(id)arg2;
- (long long)enumerationOrder;
- (unsigned long long)estimatedNumberOfDownloadableItems;
- (void)executeConnectionFailureBlock;
- (id)filesOfType:(id)arg1;
- (void)grindMedia:(id)arg1 index:(int*)arg2 file:(id)arg3;
- (void)handlePtpEvent:(id)arg1;
- (void)handleStatusNotification:(id)arg1;
- (bool)iCloudPhotosEnabled;
- (unsigned long long)iCloudPhotosOptimizeStorageState;
- (struct CGImage { }*)icon;
- (id)indexedMediaSet;
- (id)initWithDictionary:(id)arg1;
- (bool)isAccessRestrictedAppleDevice;
- (bool)isEjectable;
- (bool)isEnumeratingContent;
- (bool)isLocked;
- (bool)legacyDevice;
- (id)mediaFiles;
- (struct os_unfair_lock_s { unsigned int x1; })mediaLock;
- (unsigned long long)mediaObjectCount;
- (unsigned long long)mediaPresentation;
- (id)mobdevProperties;
- (id)mountPoint;
- (unsigned long long)numberOfDownloadableItems;
- (id)originalMediaFiles;
- (id)ownerMedia:(id)arg1 withMedia:(id)arg2;
- (void)popMediaFiles:(id)arg1;
- (long long)preflightCountOfObjects;
- (unsigned long long)previouslyIndexed;
- (id)productType;
- (id)productVersion;
- (id /* block */)ptpEventHandler;
- (void)pushMediaFiles:(id)arg1;
- (id)relateGroupedMedia:(id)arg1;
- (id)relateLegacyMedia:(id)arg1;
- (id)relateMedia:(id)arg1;
- (id)remoteCamera;
- (id)remoteCameraWithFailureBlock:(id /* block */)arg1;
- (void)removeCameraFileFromIndex:(id)arg1;
- (void)removeCameraFolderFromIndex:(id)arg1;
- (void)removeFolder:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)requestCloseSession;
- (void)requestCloseSessionWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)requestDeleteFiles:(id)arg1;
- (id)requestDeleteFiles:(id)arg1 deleteFailed:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)requestDisableTethering;
- (void)requestDownloadFile:(id)arg1 options:(id)arg2 downloadDelegate:(id)arg3 didDownloadSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)requestEject;
- (void)requestEnableTethering;
- (void)requestEnumerateContentWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)requestOpenSession;
- (void)requestOpenSessionWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (void)requestReadDataFromFile:(id)arg1 atOffset:(long long)arg2 length:(long long)arg3 readDelegate:(id)arg4 didReadDataSelector:(SEL)arg5 contextInfo:(void*)arg6;
- (void)requestSendPTPCommand:(id)arg1 outData:(id)arg2 completion:(id /* block */)arg3;
- (void)requestSendPTPCommand:(id)arg1 outData:(id)arg2 sendCommandDelegate:(id)arg3 didSendCommandSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)requestSyncClock;
- (void)requestTakePicture;
- (void)requestUploadFile:(id)arg1 options:(id)arg2 uploadDelegate:(id)arg3 didUploadSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)resetAccessRestriction;
- (void)setAccessRestrictedAppleDevice:(bool)arg1;
- (void)setAccessRestriction:(unsigned long long)arg1;
- (void)setAllowsSyncingClock:(bool)arg1;
- (void)setAppleRelatedUUIDSupport:(unsigned long long)arg1;
- (void)setBasicMediaModel:(bool)arg1;
- (void)setBatteryLevel:(unsigned long long)arg1;
- (void)setBatteryLevelAvailable:(bool)arg1;
- (void)setBeingEjected:(bool)arg1;
- (void)setCameraDeviceIcon:(struct CGImage { }*)arg1;
- (void)setContentCatalogPercentCompleted:(unsigned long long)arg1;
- (void)setContentReceived:(bool)arg1;
- (void)setConvertedMediaFiles:(id)arg1;
- (bool)setDefaultMediaPresentation:(unsigned long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteProgress:(id)arg1;
- (void)setDevAccessRestriction:(unsigned long long)arg1;
- (void)setDevCapabilities:(id)arg1;
- (void)setDevCommandQueue:(id)arg1;
- (void)setDevConnection:(id)arg1;
- (void)setDevConnectionFailureBlock:(id /* block */)arg1;
- (void)setDevContentCatalogPercentCompleted:(unsigned long long)arg1;
- (void)setDevContents:(id)arg1;
- (void)setDevEndpoint:(id)arg1;
- (void)setDevFailureCount:(unsigned long long)arg1;
- (void)setDevMediaFiles:(id)arg1;
- (void)setDevMediaPresentation:(unsigned long long)arg1;
- (void)setDevNotificationQueue:(id)arg1;
- (void)setDevProductType:(id)arg1;
- (void)setDevWriteQueue:(id)arg1;
- (void)setDeviceAccessRestriction:(unsigned long long)arg1;
- (void)setDownloadProgress:(id)arg1;
- (void)setEjectable:(bool)arg1;
- (void)setEnumerationOrder:(long long)arg1;
- (void)setICloudPhotosEnabled:(bool)arg1;
- (void)setICloudPhotosOptimizeStorageState:(unsigned long long)arg1;
- (void)setIndexedMediaSet:(id)arg1;
- (void)setIsAccessRestrictedAppleDevice:(bool)arg1;
- (void)setLocked:(bool)arg1;
- (void)setMediaLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;
- (void)setMediaObjectCount:(unsigned long long)arg1;
- (void)setMediaPresentation:(unsigned long long)arg1;
- (void)setMobdevProperties:(id)arg1;
- (void)setMountPoint:(id)arg1;
- (void)setOriginalMediaFiles:(id)arg1;
- (void)setPreflightCountOfObjects:(long long)arg1;
- (void)setPreviouslyIndexed:(unsigned long long)arg1;
- (void)setProductType:(id)arg1;
- (void)setPtpEventForwarding:(bool)arg1;
- (void)setPtpEventHandler:(id /* block */)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setUniversalMediaFiles:(id)arg1;
- (long long)stitchMedia:(id)arg1 withMedia:(id)arg2;
- (void)storageAvailable;
- (bool)supportsMediaFormatCatalog;
- (bool)tetheredCaptureEnabled;
- (double)timeOffset;
- (id)universalMediaFiles;
- (void)updateAccessRestriction;
- (bool)updateAppleProperties:(id)arg1;
- (void)updateContentCatalogPercentCompleted;
- (void)updateEnumeratingErrorStatus;
- (void)updateLockedErrorStatus;
- (void)updateMediaFilesCount:(id)arg1;
- (bool)updateMediaPresentation;

@end
