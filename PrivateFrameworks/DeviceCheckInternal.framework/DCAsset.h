/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
 */

@interface DCAsset : NSObject {
    NSData * _publicKey;
    double  _publicKeyRefreshInterval;
    unsigned long long  _version;
}

@property (nonatomic, copy) NSData *publicKey;
@property (nonatomic) double publicKeyRefreshInterval;
@property (nonatomic) unsigned long long version;

+ (id)assetWithMobileAsset:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)publicKey;
- (double)publicKeyRefreshInterval;
- (void)setPublicKey:(id)arg1;
- (void)setPublicKeyRefreshInterval:(double)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)version;

@end
