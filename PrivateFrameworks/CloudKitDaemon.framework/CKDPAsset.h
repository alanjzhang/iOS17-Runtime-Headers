/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPAsset : PBCodable <NSCopying> {
    NSString * _assetAuthorizationResponseUUID;
    NSData * _clearAssetKey;
    long long  _constructedAssetDownloadEstimatedSize;
    NSData * _constructedAssetDownloadParameters;
    NSString * _constructedAssetDownloadURL;
    long long  _constructedAssetDownloadURLExpiration;
    NSString * _contentBaseURL;
    NSString * _downloadBaseURL;
    NSData * _downloadRequest;
    NSString * _downloadToken;
    long long  _downloadTokenExpiration;
    long long  _downloadURLExpiration;
    struct { 
        unsigned int constructedAssetDownloadEstimatedSize : 1; 
        unsigned int constructedAssetDownloadURLExpiration : 1; 
        unsigned int downloadTokenExpiration : 1; 
        unsigned int downloadURLExpiration : 1; 
        unsigned int size : 1; 
    }  _has;
    NSString * _owner;
    CKDPProtectionInfo * _protectionInfo;
    CKDPRecordIdentifier * _recordId;
    NSData * _referenceSignature;
    NSString * _requestor;
    NSData * _signature;
    long long  _size;
    NSString * _uploadReceipt;
}

@property (nonatomic, retain) NSString *assetAuthorizationResponseUUID;
@property (nonatomic, retain) NSData *clearAssetKey;
@property (nonatomic) long long constructedAssetDownloadEstimatedSize;
@property (nonatomic, retain) NSData *constructedAssetDownloadParameters;
@property (nonatomic, retain) NSString *constructedAssetDownloadURL;
@property (nonatomic) long long constructedAssetDownloadURLExpiration;
@property (nonatomic, retain) NSString *contentBaseURL;
@property (nonatomic, retain) NSString *downloadBaseURL;
@property (nonatomic, retain) NSData *downloadRequest;
@property (nonatomic, retain) NSString *downloadToken;
@property (nonatomic) long long downloadTokenExpiration;
@property (nonatomic) long long downloadURLExpiration;
@property (nonatomic, readonly) bool hasAssetAuthorizationResponseUUID;
@property (nonatomic, readonly) bool hasClearAssetKey;
@property (nonatomic) bool hasConstructedAssetDownloadEstimatedSize;
@property (nonatomic, readonly) bool hasConstructedAssetDownloadParameters;
@property (nonatomic, readonly) bool hasConstructedAssetDownloadURL;
@property (nonatomic) bool hasConstructedAssetDownloadURLExpiration;
@property (nonatomic, readonly) bool hasContentBaseURL;
@property (nonatomic, readonly) bool hasDownloadBaseURL;
@property (nonatomic, readonly) bool hasDownloadRequest;
@property (nonatomic, readonly) bool hasDownloadToken;
@property (nonatomic) bool hasDownloadTokenExpiration;
@property (nonatomic) bool hasDownloadURLExpiration;
@property (nonatomic, readonly) bool hasOwner;
@property (nonatomic, readonly) bool hasProtectionInfo;
@property (nonatomic, readonly) bool hasRecordId;
@property (nonatomic, readonly) bool hasReferenceSignature;
@property (nonatomic, readonly) bool hasRequestor;
@property (nonatomic, readonly) bool hasSignature;
@property (nonatomic) bool hasSize;
@property (nonatomic, readonly) bool hasUploadReceipt;
@property (nonatomic, retain) NSString *owner;
@property (nonatomic, retain) CKDPProtectionInfo *protectionInfo;
@property (nonatomic, retain) CKDPRecordIdentifier *recordId;
@property (nonatomic, retain) NSData *referenceSignature;
@property (nonatomic, retain) NSString *requestor;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic) long long size;
@property (nonatomic, retain) NSString *uploadReceipt;

- (void).cxx_destruct;
- (id)assetAuthorizationResponseUUID;
- (id)clearAssetKey;
- (long long)constructedAssetDownloadEstimatedSize;
- (id)constructedAssetDownloadParameters;
- (id)constructedAssetDownloadURL;
- (long long)constructedAssetDownloadURLExpiration;
- (id)contentBaseURL;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)downloadBaseURL;
- (id)downloadRequest;
- (id)downloadToken;
- (long long)downloadTokenExpiration;
- (long long)downloadURLExpiration;
- (bool)hasAssetAuthorizationResponseUUID;
- (bool)hasClearAssetKey;
- (bool)hasConstructedAssetDownloadEstimatedSize;
- (bool)hasConstructedAssetDownloadParameters;
- (bool)hasConstructedAssetDownloadURL;
- (bool)hasConstructedAssetDownloadURLExpiration;
- (bool)hasContentBaseURL;
- (bool)hasDownloadBaseURL;
- (bool)hasDownloadRequest;
- (bool)hasDownloadToken;
- (bool)hasDownloadTokenExpiration;
- (bool)hasDownloadURLExpiration;
- (bool)hasOwner;
- (bool)hasProtectionInfo;
- (bool)hasRecordId;
- (bool)hasReferenceSignature;
- (bool)hasRequestor;
- (bool)hasSignature;
- (bool)hasSize;
- (bool)hasUploadReceipt;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)owner;
- (id)protectionInfo;
- (bool)readFrom:(id)arg1;
- (id)recordId;
- (id)referenceSignature;
- (id)requestor;
- (void)setAssetAuthorizationResponseUUID:(id)arg1;
- (void)setClearAssetKey:(id)arg1;
- (void)setConstructedAssetDownloadEstimatedSize:(long long)arg1;
- (void)setConstructedAssetDownloadParameters:(id)arg1;
- (void)setConstructedAssetDownloadURL:(id)arg1;
- (void)setConstructedAssetDownloadURLExpiration:(long long)arg1;
- (void)setContentBaseURL:(id)arg1;
- (void)setDownloadBaseURL:(id)arg1;
- (void)setDownloadRequest:(id)arg1;
- (void)setDownloadToken:(id)arg1;
- (void)setDownloadTokenExpiration:(long long)arg1;
- (void)setDownloadURLExpiration:(long long)arg1;
- (void)setHasConstructedAssetDownloadEstimatedSize:(bool)arg1;
- (void)setHasConstructedAssetDownloadURLExpiration:(bool)arg1;
- (void)setHasDownloadTokenExpiration:(bool)arg1;
- (void)setHasDownloadURLExpiration:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setOwner:(id)arg1;
- (void)setProtectionInfo:(id)arg1;
- (void)setRecordId:(id)arg1;
- (void)setReferenceSignature:(id)arg1;
- (void)setRequestor:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setUploadReceipt:(id)arg1;
- (id)signature;
- (long long)size;
- (id)uploadReceipt;
- (void)writeTo:(id)arg1;

@end
