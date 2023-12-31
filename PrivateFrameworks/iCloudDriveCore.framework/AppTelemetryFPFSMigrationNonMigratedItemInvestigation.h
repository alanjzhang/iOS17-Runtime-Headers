/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface AppTelemetryFPFSMigrationNonMigratedItemInvestigation : PBCodable <NSCopying> {
    long long  _cloneErrorCode;
    int  _compressionType;
    int  _dataProtectionClass;
    long long  _dbGenCount;
    bool  _doGenCountsMatchInFileId;
    long long  _fileNameLength;
    NSString * _finderInfoFlagsBase64;
    long long  _fsGenCount;
    struct { 
        unsigned int cloneErrorCode : 1; 
        unsigned int dbGenCount : 1; 
        unsigned int fileNameLength : 1; 
        unsigned int fsGenCount : 1; 
        unsigned int itemNumber : 1; 
        unsigned int pathLength : 1; 
        unsigned int readErrorCode : 1; 
        unsigned int stFlags : 1; 
        unsigned int stMode : 1; 
        unsigned int compressionType : 1; 
        unsigned int dataProtectionClass : 1; 
        unsigned int itemType : 1; 
        unsigned int syncRootEnum : 1; 
        unsigned int xattrCount : 1; 
        unsigned int doGenCountsMatchInFileId : 1; 
        unsigned int hasAcls : 1; 
        unsigned int hasLocalChanges : 1; 
        unsigned int hasMoreLinks : 1; 
        unsigned int isAppleDouble : 1; 
        unsigned int isBundleBit : 1; 
        unsigned int isFileNameNonAscii : 1; 
        unsigned int isOwnedByLoggedInUser : 1; 
        unsigned int isOwnedByRoot : 1; 
        unsigned int isPurgable : 1; 
        unsigned int isQuerantined : 1; 
        unsigned int isResourceFork : 1; 
        unsigned int isSparseFile : 1; 
        unsigned int isUnderDirStatFolder : 1; 
        unsigned int isUrgent : 1; 
        unsigned int parentHasAcls : 1; 
    }  _has;
    bool  _hasAcls;
    bool  _hasLocalChanges;
    bool  _hasMoreLinks;
    bool  _isAppleDouble;
    bool  _isBundleBit;
    bool  _isFileNameNonAscii;
    bool  _isOwnedByLoggedInUser;
    bool  _isOwnedByRoot;
    bool  _isPurgable;
    bool  _isQuerantined;
    bool  _isResourceFork;
    bool  _isSparseFile;
    bool  _isUnderDirStatFolder;
    bool  _isUrgent;
    long long  _itemNumber;
    int  _itemType;
    bool  _parentHasAcls;
    long long  _pathLength;
    long long  _readErrorCode;
    long long  _stFlags;
    long long  _stMode;
    int  _syncRootEnum;
    NSString * _utType;
    int  _xattrCount;
}

@property (nonatomic) long long cloneErrorCode;
@property (nonatomic) int compressionType;
@property (nonatomic) int dataProtectionClass;
@property (nonatomic) long long dbGenCount;
@property (nonatomic) bool doGenCountsMatchInFileId;
@property (nonatomic) long long fileNameLength;
@property (nonatomic, retain) NSString *finderInfoFlagsBase64;
@property (nonatomic) long long fsGenCount;
@property (nonatomic) bool hasAcls;
@property (nonatomic) bool hasCloneErrorCode;
@property (nonatomic) bool hasCompressionType;
@property (nonatomic) bool hasDataProtectionClass;
@property (nonatomic) bool hasDbGenCount;
@property (nonatomic) bool hasDoGenCountsMatchInFileId;
@property (nonatomic) bool hasFileNameLength;
@property (nonatomic, readonly) bool hasFinderInfoFlagsBase64;
@property (nonatomic) bool hasFsGenCount;
@property (nonatomic) bool hasHasAcls;
@property (nonatomic) bool hasHasLocalChanges;
@property (nonatomic) bool hasHasMoreLinks;
@property (nonatomic) bool hasIsAppleDouble;
@property (nonatomic) bool hasIsBundleBit;
@property (nonatomic) bool hasIsFileNameNonAscii;
@property (nonatomic) bool hasIsOwnedByLoggedInUser;
@property (nonatomic) bool hasIsOwnedByRoot;
@property (nonatomic) bool hasIsPurgable;
@property (nonatomic) bool hasIsQuerantined;
@property (nonatomic) bool hasIsResourceFork;
@property (nonatomic) bool hasIsSparseFile;
@property (nonatomic) bool hasIsUnderDirStatFolder;
@property (nonatomic) bool hasIsUrgent;
@property (nonatomic) bool hasItemNumber;
@property (nonatomic) bool hasItemType;
@property (nonatomic) bool hasLocalChanges;
@property (nonatomic) bool hasMoreLinks;
@property (nonatomic) bool hasParentHasAcls;
@property (nonatomic) bool hasPathLength;
@property (nonatomic) bool hasReadErrorCode;
@property (nonatomic) bool hasStFlags;
@property (nonatomic) bool hasStMode;
@property (nonatomic) bool hasSyncRootEnum;
@property (nonatomic, readonly) bool hasUtType;
@property (nonatomic) bool hasXattrCount;
@property (nonatomic) bool isAppleDouble;
@property (nonatomic) bool isBundleBit;
@property (nonatomic) bool isFileNameNonAscii;
@property (nonatomic) bool isOwnedByLoggedInUser;
@property (nonatomic) bool isOwnedByRoot;
@property (nonatomic) bool isPurgable;
@property (nonatomic) bool isQuerantined;
@property (nonatomic) bool isResourceFork;
@property (nonatomic) bool isSparseFile;
@property (nonatomic) bool isUnderDirStatFolder;
@property (nonatomic) bool isUrgent;
@property (nonatomic) long long itemNumber;
@property (nonatomic) int itemType;
@property (nonatomic) bool parentHasAcls;
@property (nonatomic) long long pathLength;
@property (nonatomic) long long readErrorCode;
@property (nonatomic) long long stFlags;
@property (nonatomic) long long stMode;
@property (nonatomic) int syncRootEnum;
@property (nonatomic, retain) NSString *utType;
@property (nonatomic) int xattrCount;

- (void).cxx_destruct;
- (long long)cloneErrorCode;
- (int)compressionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataProtectionClass;
- (long long)dbGenCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)doGenCountsMatchInFileId;
- (long long)fileNameLength;
- (id)finderInfoFlagsBase64;
- (long long)fsGenCount;
- (bool)hasAcls;
- (bool)hasCloneErrorCode;
- (bool)hasCompressionType;
- (bool)hasDataProtectionClass;
- (bool)hasDbGenCount;
- (bool)hasDoGenCountsMatchInFileId;
- (bool)hasFileNameLength;
- (bool)hasFinderInfoFlagsBase64;
- (bool)hasFsGenCount;
- (bool)hasHasAcls;
- (bool)hasHasLocalChanges;
- (bool)hasHasMoreLinks;
- (bool)hasIsAppleDouble;
- (bool)hasIsBundleBit;
- (bool)hasIsFileNameNonAscii;
- (bool)hasIsOwnedByLoggedInUser;
- (bool)hasIsOwnedByRoot;
- (bool)hasIsPurgable;
- (bool)hasIsQuerantined;
- (bool)hasIsResourceFork;
- (bool)hasIsSparseFile;
- (bool)hasIsUnderDirStatFolder;
- (bool)hasIsUrgent;
- (bool)hasItemNumber;
- (bool)hasItemType;
- (bool)hasLocalChanges;
- (bool)hasMoreLinks;
- (bool)hasParentHasAcls;
- (bool)hasPathLength;
- (bool)hasReadErrorCode;
- (bool)hasStFlags;
- (bool)hasStMode;
- (bool)hasSyncRootEnum;
- (bool)hasUtType;
- (bool)hasXattrCount;
- (unsigned long long)hash;
- (bool)isAppleDouble;
- (bool)isBundleBit;
- (bool)isEqual:(id)arg1;
- (bool)isFileNameNonAscii;
- (bool)isOwnedByLoggedInUser;
- (bool)isOwnedByRoot;
- (bool)isPurgable;
- (bool)isQuerantined;
- (bool)isResourceFork;
- (bool)isSparseFile;
- (bool)isUnderDirStatFolder;
- (bool)isUrgent;
- (long long)itemNumber;
- (int)itemType;
- (void)mergeFrom:(id)arg1;
- (bool)parentHasAcls;
- (long long)pathLength;
- (long long)readErrorCode;
- (bool)readFrom:(id)arg1;
- (void)setCloneErrorCode:(long long)arg1;
- (void)setCompressionType:(int)arg1;
- (void)setDataProtectionClass:(int)arg1;
- (void)setDbGenCount:(long long)arg1;
- (void)setDoGenCountsMatchInFileId:(bool)arg1;
- (void)setFileNameLength:(long long)arg1;
- (void)setFinderInfoFlagsBase64:(id)arg1;
- (void)setFsGenCount:(long long)arg1;
- (void)setHasAcls:(bool)arg1;
- (void)setHasCloneErrorCode:(bool)arg1;
- (void)setHasCompressionType:(bool)arg1;
- (void)setHasDataProtectionClass:(bool)arg1;
- (void)setHasDbGenCount:(bool)arg1;
- (void)setHasDoGenCountsMatchInFileId:(bool)arg1;
- (void)setHasFileNameLength:(bool)arg1;
- (void)setHasFsGenCount:(bool)arg1;
- (void)setHasHasAcls:(bool)arg1;
- (void)setHasHasLocalChanges:(bool)arg1;
- (void)setHasHasMoreLinks:(bool)arg1;
- (void)setHasIsAppleDouble:(bool)arg1;
- (void)setHasIsBundleBit:(bool)arg1;
- (void)setHasIsFileNameNonAscii:(bool)arg1;
- (void)setHasIsOwnedByLoggedInUser:(bool)arg1;
- (void)setHasIsOwnedByRoot:(bool)arg1;
- (void)setHasIsPurgable:(bool)arg1;
- (void)setHasIsQuerantined:(bool)arg1;
- (void)setHasIsResourceFork:(bool)arg1;
- (void)setHasIsSparseFile:(bool)arg1;
- (void)setHasIsUnderDirStatFolder:(bool)arg1;
- (void)setHasIsUrgent:(bool)arg1;
- (void)setHasItemNumber:(bool)arg1;
- (void)setHasItemType:(bool)arg1;
- (void)setHasLocalChanges:(bool)arg1;
- (void)setHasMoreLinks:(bool)arg1;
- (void)setHasParentHasAcls:(bool)arg1;
- (void)setHasPathLength:(bool)arg1;
- (void)setHasReadErrorCode:(bool)arg1;
- (void)setHasStFlags:(bool)arg1;
- (void)setHasStMode:(bool)arg1;
- (void)setHasSyncRootEnum:(bool)arg1;
- (void)setHasXattrCount:(bool)arg1;
- (void)setIsAppleDouble:(bool)arg1;
- (void)setIsBundleBit:(bool)arg1;
- (void)setIsFileNameNonAscii:(bool)arg1;
- (void)setIsOwnedByLoggedInUser:(bool)arg1;
- (void)setIsOwnedByRoot:(bool)arg1;
- (void)setIsPurgable:(bool)arg1;
- (void)setIsQuerantined:(bool)arg1;
- (void)setIsResourceFork:(bool)arg1;
- (void)setIsSparseFile:(bool)arg1;
- (void)setIsUnderDirStatFolder:(bool)arg1;
- (void)setIsUrgent:(bool)arg1;
- (void)setItemNumber:(long long)arg1;
- (void)setItemType:(int)arg1;
- (void)setParentHasAcls:(bool)arg1;
- (void)setPathLength:(long long)arg1;
- (void)setReadErrorCode:(long long)arg1;
- (void)setStFlags:(long long)arg1;
- (void)setStMode:(long long)arg1;
- (void)setSyncRootEnum:(int)arg1;
- (void)setUtType:(id)arg1;
- (void)setXattrCount:(int)arg1;
- (long long)stFlags;
- (long long)stMode;
- (int)syncRootEnum;
- (id)utType;
- (void)writeTo:(id)arg1;
- (int)xattrCount;

@end
