/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPBDGSPlayerDelegateInfoToken : PBCodable <NSCopying> {
    double  _expirationTimeInterval;
    struct { 
        unsigned int expirationTimeInterval : 1; 
        unsigned int sessionID : 1; 
    }  _has;
    unsigned long long  _sessionID;
    NSString * _storefrontIdentifier;
    NSData * _token;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
