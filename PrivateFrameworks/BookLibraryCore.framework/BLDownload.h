/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BookLibraryCore.framework/BookLibraryCore
 */

@interface BLDownload : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _accountID;
    NSString * _artistName;
    NSString * _assetPath;
    NSString * _buyParameters;
    NSString * _cancelDownloadURL;
    NSNumber * _cleanupPending;
    NSString * _clientIdentifier;
    NSString * _collectionArtistName;
    NSString * _collectionTitle;
    NSString * _downloadID;
    NSString * _downloadKey;
    NSData * _dpInfo;
    NSString * _encryptionKey;
    NSNumber * _familyAccountID;
    unsigned long long  _fileSize;
    NSString * _genre;
    NSString * _hashType;
    NSNumber * _isAutomaticDownload;
    NSNumber * _isLocalCacheServer;
    NSNumber * _isPurchase;
    NSNumber * _isRestore;
    NSNumber * _isSample;
    NSNumber * _isZipStreamable;
    NSString * _kind;
    NSDate * _lastStateChangeTime;
    NSString * _md5HashStrings;
    long long  _numberOfBytesToHash;
    NSString * _originalURL;
    NSString * _permlink;
    NSNumber * _persistentIdentifier;
    NSNumber * _publicationVersion;
    NSDate * _purchaseDate;
    NSString * _salt;
    NSNumber * _serverNumberOfBytesToHash;
    NSData * _sinfData;
    NSDate * _startTime;
    long long  _state;
    NSNumber * _storeIdentifier;
    NSNumber * _storePlaylistIdentifier;
    NSString * _subtitle;
    NSString * _targetDownloadDirectory;
    NSString * _thumbnailImageURL;
    NSString * _title;
    NSString * _transactionIdentifier;
    NSString * _url;
}

@property (nonatomic, retain) NSNumber *accountID;
@property (nonatomic, copy) NSString *artistName;
@property (nonatomic, copy) NSString *assetPath;
@property (nonatomic, copy) NSString *buyParameters;
@property (nonatomic, copy) NSString *cancelDownloadURL;
@property (nonatomic, retain) NSNumber *cleanupPending;
@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *collectionArtistName;
@property (nonatomic, copy) NSString *collectionTitle;
@property (nonatomic, copy) NSString *downloadID;
@property (nonatomic, copy) NSString *downloadKey;
@property (nonatomic, copy) NSData *dpInfo;
@property (nonatomic, copy) NSString *encryptionKey;
@property (nonatomic, retain) NSNumber *familyAccountID;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic, copy) NSString *hashType;
@property (nonatomic, retain) NSNumber *isAutomaticDownload;
@property (nonatomic, retain) NSNumber *isLocalCacheServer;
@property (nonatomic, retain) NSNumber *isPurchase;
@property (nonatomic, retain) NSNumber *isRestore;
@property (nonatomic, retain) NSNumber *isSample;
@property (nonatomic, retain) NSNumber *isZipStreamable;
@property (nonatomic, copy) NSString *kind;
@property (nonatomic, copy) NSDate *lastStateChangeTime;
@property (nonatomic, copy) NSString *md5HashStrings;
@property (nonatomic) long long numberOfBytesToHash;
@property (nonatomic, copy) NSString *originalURL;
@property (nonatomic, copy) NSString *permlink;
@property (nonatomic, retain) NSNumber *persistentIdentifier;
@property (nonatomic, retain) NSNumber *publicationVersion;
@property (nonatomic, retain) NSDate *purchaseDate;
@property (nonatomic, copy) NSString *salt;
@property (nonatomic, retain) NSNumber *serverNumberOfBytesToHash;
@property (nonatomic, copy) NSData *sinfData;
@property (nonatomic, copy) NSDate *startTime;
@property (nonatomic) long long state;
@property (nonatomic, retain) NSNumber *storeIdentifier;
@property (nonatomic, retain) NSNumber *storePlaylistIdentifier;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *targetDownloadDirectory;
@property (nonatomic, copy) NSString *thumbnailImageURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *transactionIdentifier;
@property (nonatomic, copy) NSString *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)artistName;
- (id)assetPath;
- (id)buyParameters;
- (id)cancelDownloadURL;
- (id)cleanupPending;
- (id)clientIdentifier;
- (id)collectionArtistName;
- (id)collectionTitle;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)downloadID;
- (id)downloadKey;
- (id)dpInfo;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptionKey;
- (id)familyAccountID;
- (unsigned long long)fileSize;
- (id)genre;
- (id)hashType;
- (id)initWithCoder:(id)arg1;
- (id)isAutomaticDownload;
- (id)isLocalCacheServer;
- (id)isPurchase;
- (id)isRestore;
- (id)isSample;
- (id)isZipStreamable;
- (id)kind;
- (id)lastStateChangeTime;
- (id)md5HashStrings;
- (long long)numberOfBytesToHash;
- (id)originalURL;
- (id)permlink;
- (id)persistentIdentifier;
- (id)publicationVersion;
- (id)purchaseDate;
- (id)salt;
- (id)serverNumberOfBytesToHash;
- (void)setAccountID:(id)arg1;
- (void)setArtistName:(id)arg1;
- (void)setAssetPath:(id)arg1;
- (void)setBuyParameters:(id)arg1;
- (void)setCancelDownloadURL:(id)arg1;
- (void)setCleanupPending:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setCollectionArtistName:(id)arg1;
- (void)setCollectionTitle:(id)arg1;
- (void)setDownloadID:(id)arg1;
- (void)setDownloadKey:(id)arg1;
- (void)setDpInfo:(id)arg1;
- (void)setEncryptionKey:(id)arg1;
- (void)setFamilyAccountID:(id)arg1;
- (void)setFileSize:(unsigned long long)arg1;
- (void)setGenre:(id)arg1;
- (void)setHashType:(id)arg1;
- (void)setIsAutomaticDownload:(id)arg1;
- (void)setIsLocalCacheServer:(id)arg1;
- (void)setIsPurchase:(id)arg1;
- (void)setIsRestore:(id)arg1;
- (void)setIsSample:(id)arg1;
- (void)setIsZipStreamable:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setLastStateChangeTime:(id)arg1;
- (void)setMd5HashStrings:(id)arg1;
- (void)setNumberOfBytesToHash:(long long)arg1;
- (void)setOriginalURL:(id)arg1;
- (void)setPermlink:(id)arg1;
- (void)setPersistentIdentifier:(id)arg1;
- (void)setPublicationVersion:(id)arg1;
- (void)setPurchaseDate:(id)arg1;
- (void)setSalt:(id)arg1;
- (void)setServerNumberOfBytesToHash:(id)arg1;
- (void)setSinfData:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setStorePlaylistIdentifier:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTargetDownloadDirectory:(id)arg1;
- (void)setThumbnailImageURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTransactionIdentifier:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)sinfData;
- (id)startTime;
- (long long)state;
- (id)storeIdentifier;
- (id)storePlaylistIdentifier;
- (id)subtitle;
- (id)targetDownloadDirectory;
- (id)thumbnailImageURL;
- (id)title;
- (id)transactionIdentifier;
- (double)transferProgressFraction;
- (id)url;

@end
