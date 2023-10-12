/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRControllerFactoryParams : MTRDeviceControllerFactoryParams

@property (nonatomic, copy) NSArray *cdCerts;
@property (nonatomic, copy) NSArray *paaCerts;
@property (nonatomic) bool startServer;
@property (nonatomic, readonly) <MTRPersistentStorageDelegate> *storageDelegate;

// MTRControllerFactoryParams (null)

- (id)cdCerts;
- (id)paaCerts;
- (void)setCdCerts:(id)arg1;
- (void)setPaaCerts:(id)arg1;
- (void)setStartServer:(bool)arg1;
- (bool)startServer;
- (id)storageDelegate;

@end