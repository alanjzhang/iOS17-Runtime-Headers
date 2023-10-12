/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLMemoryAssetFlag : PBCodable <NSCopying> {
    struct { 
        unsigned int isAdaptiveExplictlyAdded : 1; 
        unsigned int isAdaptiveExplictlyRemoved : 1; 
        unsigned int isAdaptiveKeyAssetPrivate : 1; 
        unsigned int isAdaptiveKeyAssetShared : 1; 
        unsigned int isCurated : 1; 
        unsigned int isCustomUserAsset : 1; 
        unsigned int isExtendedCurated : 1; 
        unsigned int isKeyAsset : 1; 
        unsigned int isMovieCurated : 1; 
        unsigned int isRepresentative : 1; 
        unsigned int isUserCurated : 1; 
    }  _has;
    bool  _isAdaptiveExplictlyAdded;
    bool  _isAdaptiveExplictlyRemoved;
    bool  _isAdaptiveKeyAssetPrivate;
    bool  _isAdaptiveKeyAssetShared;
    bool  _isCurated;
    bool  _isCustomUserAsset;
    bool  _isExtendedCurated;
    bool  _isKeyAsset;
    bool  _isMovieCurated;
    bool  _isRepresentative;
    bool  _isUserCurated;
}

@property (nonatomic) bool hasIsAdaptiveExplictlyAdded;
@property (nonatomic) bool hasIsAdaptiveExplictlyRemoved;
@property (nonatomic) bool hasIsAdaptiveKeyAssetPrivate;
@property (nonatomic) bool hasIsAdaptiveKeyAssetShared;
@property (nonatomic) bool hasIsCurated;
@property (nonatomic) bool hasIsCustomUserAsset;
@property (nonatomic) bool hasIsExtendedCurated;
@property (nonatomic) bool hasIsKeyAsset;
@property (nonatomic) bool hasIsMovieCurated;
@property (nonatomic) bool hasIsRepresentative;
@property (nonatomic) bool hasIsUserCurated;
@property (nonatomic) bool isAdaptiveExplictlyAdded;
@property (nonatomic) bool isAdaptiveExplictlyRemoved;
@property (nonatomic) bool isAdaptiveKeyAssetPrivate;
@property (nonatomic) bool isAdaptiveKeyAssetShared;
@property (nonatomic) bool isCurated;
@property (nonatomic) bool isCustomUserAsset;
@property (nonatomic) bool isExtendedCurated;
@property (nonatomic) bool isKeyAsset;
@property (nonatomic) bool isMovieCurated;
@property (nonatomic) bool isRepresentative;
@property (nonatomic) bool isUserCurated;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsAdaptiveExplictlyAdded;
- (bool)hasIsAdaptiveExplictlyRemoved;
- (bool)hasIsAdaptiveKeyAssetPrivate;
- (bool)hasIsAdaptiveKeyAssetShared;
- (bool)hasIsCurated;
- (bool)hasIsCustomUserAsset;
- (bool)hasIsExtendedCurated;
- (bool)hasIsKeyAsset;
- (bool)hasIsMovieCurated;
- (bool)hasIsRepresentative;
- (bool)hasIsUserCurated;
- (unsigned long long)hash;
- (bool)isAdaptiveExplictlyAdded;
- (bool)isAdaptiveExplictlyRemoved;
- (bool)isAdaptiveKeyAssetPrivate;
- (bool)isAdaptiveKeyAssetShared;
- (bool)isCurated;
- (bool)isCustomUserAsset;
- (bool)isEqual:(id)arg1;
- (bool)isExtendedCurated;
- (bool)isKeyAsset;
- (bool)isMovieCurated;
- (bool)isRepresentative;
- (bool)isUserCurated;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasIsAdaptiveExplictlyAdded:(bool)arg1;
- (void)setHasIsAdaptiveExplictlyRemoved:(bool)arg1;
- (void)setHasIsAdaptiveKeyAssetPrivate:(bool)arg1;
- (void)setHasIsAdaptiveKeyAssetShared:(bool)arg1;
- (void)setHasIsCurated:(bool)arg1;
- (void)setHasIsCustomUserAsset:(bool)arg1;
- (void)setHasIsExtendedCurated:(bool)arg1;
- (void)setHasIsKeyAsset:(bool)arg1;
- (void)setHasIsMovieCurated:(bool)arg1;
- (void)setHasIsRepresentative:(bool)arg1;
- (void)setHasIsUserCurated:(bool)arg1;
- (void)setIsAdaptiveExplictlyAdded:(bool)arg1;
- (void)setIsAdaptiveExplictlyRemoved:(bool)arg1;
- (void)setIsAdaptiveKeyAssetPrivate:(bool)arg1;
- (void)setIsAdaptiveKeyAssetShared:(bool)arg1;
- (void)setIsCurated:(bool)arg1;
- (void)setIsCustomUserAsset:(bool)arg1;
- (void)setIsExtendedCurated:(bool)arg1;
- (void)setIsKeyAsset:(bool)arg1;
- (void)setIsMovieCurated:(bool)arg1;
- (void)setIsRepresentative:(bool)arg1;
- (void)setIsUserCurated:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
