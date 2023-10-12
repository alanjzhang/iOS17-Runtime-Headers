/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLVirtualResource : NSObject <PLValidatesResourceModel, PLWriteableResource> {
    long long  _assetHeight;
    <PLAssetID> * _assetID;
    long long  _assetWidth;
    NSString * _codecFourCharCodeName;
    <PLResourceDataStore> * _dataStore;
    <PLResourceDataStoreKey> * _dataStoreKey;
    long long  _dataStoreSubtype;
    bool  _isLosslessEncoded;
    bool  _isMarkedFullSize;
    short  _localAvailabilityTarget;
    unsigned int  _orientation;
    unsigned int  _recipeID;
    short  _remoteAvailability;
    short  _remoteAvailabilityTarget;
    unsigned int  _resourceType;
    float  _scale;
    NSDate * _trashedDate;
    short  _trashedState;
    PLUniformTypeIdentifier * _uniformTypeIdentifier;
    long long  _unorientedHeight;
    long long  _unorientedWidth;
    unsigned int  _version;
}

@property (nonatomic, readonly, copy) <PLAssetID> *assetID;
@property (nonatomic, retain) NSString *codecFourCharCodeName;
@property (nonatomic, readonly) unsigned long long cplType;
@property (nonatomic, readonly) long long dataLength;
@property (nonatomic, retain) <PLResourceDataStore> *dataStore;
@property (nonatomic, retain) <PLResourceDataStoreKey> *dataStoreKey;
@property (nonatomic) long long dataStoreSubtype;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedDataLength;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isOriginalResource;
@property (nonatomic, readonly) short localAvailability;
@property (nonatomic, readonly) short localAvailabilityTarget;
@property (nonatomic, readonly) unsigned int orientation;
@property (nonatomic, readonly) long long orientedHeight;
@property (nonatomic, readonly) long long orientedWidth;
@property (nonatomic, readonly) int qualitySortValue;
@property (nonatomic) unsigned int recipeID;
@property (nonatomic) short remoteAvailability;
@property (nonatomic, readonly) short remoteAvailabilityTarget;
@property (nonatomic) unsigned int resourceType;
@property (nonatomic) float scale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *trashedDate;
@property (nonatomic, readonly) short trashedState;
@property (nonatomic, retain) PLUniformTypeIdentifier *uniformTypeIdentifier;
@property (nonatomic) long long unorientedHeight;
@property (nonatomic) long long unorientedWidth;
@property (nonatomic, readonly) short utiConformanceHint;
@property (nonatomic) unsigned int version;

- (void).cxx_destruct;
- (id)assetID;
- (id)codecFourCharCodeName;
- (unsigned long long)cplType;
- (long long)dataLength;
- (id)dataStore;
- (id)dataStoreKey;
- (long long)dataStoreSubtype;
- (id)debugDescription;
- (long long)estimatedDataLength;
- (id)fileURL;
- (id)initWithAsset:(id)arg1 resourceType:(unsigned int)arg2 version:(unsigned int)arg3 recipeID:(unsigned int)arg4;
- (id)initWithRecipe:(id)arg1 forAsset:(id)arg2;
- (bool)isDefaultOrientation;
- (bool)isDerivative;
- (bool)isInCloud;
- (bool)isOriginalResource;
- (bool)isPlayableVideo;
- (bool)isVirtual;
- (short)localAvailability;
- (short)localAvailabilityTarget;
- (unsigned int)orientation;
- (long long)orientedHeight;
- (long long)orientedWidth;
- (id)photosCTLJSONDict;
- (int)qualitySortValue;
- (unsigned int)recipeID;
- (short)remoteAvailability;
- (short)remoteAvailabilityTarget;
- (unsigned int)resourceType;
- (float)scale;
- (float)scaleGivenAssetHasAdjustments:(bool)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3;
- (void)setCodecFourCharCodeName:(id)arg1;
- (void)setDataStore:(id)arg1;
- (void)setDataStoreKey:(id)arg1;
- (void)setDataStoreSubtype:(long long)arg1;
- (void)setRecipeID:(unsigned int)arg1;
- (void)setRemoteAvailability:(short)arg1;
- (void)setResourceType:(unsigned int)arg1;
- (void)setScale:(float)arg1;
- (void)setUniformTypeIdentifier:(id)arg1;
- (void)setUnorientedHeight:(long long)arg1;
- (void)setUnorientedWidth:(long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (id)singleLineDescription;
- (id)trashedDate;
- (short)trashedState;
- (id)uniformTypeIdentifier;
- (long long)unorientedHeight;
- (long long)unorientedWidth;
- (short)utiConformanceHint;
- (id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2;
- (unsigned int)version;

@end
