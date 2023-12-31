/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICIAMSerialCheckRequest : PBRequest <NSCopying> {
    long long  _dSID;
    NSString * _deviceID;
    struct { 
        unsigned int dSID : 1; 
    }  _has;
}

@property (nonatomic) long long dSID;
@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic) bool hasDSID;
@property (nonatomic, readonly) bool hasDeviceID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dSID;
- (id)description;
- (id)deviceID;
- (id)dictionaryRepresentation;
- (bool)hasDSID;
- (bool)hasDeviceID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDSID:(long long)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setHasDSID:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
