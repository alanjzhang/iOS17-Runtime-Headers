/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPrefetchConfiguration : NSObject {
    unsigned long long  _cloudResourceATVNearLowDiskThreshold;
    double  _cloudResourceIncrementalMinimumFreeDiskSpaceForOptimizeRatio;
    double  _cloudResourceInitialMinimumFreeDiskSpaceForOptimizeRatio;
    unsigned long long  _cloudResourceIntervalBetweenCheckCPLBGDownload;
    unsigned short  _cloudResourceMaxPrefetchRetry;
    unsigned long long  _cloudResourceMaximumSmallLibraryThreshold;
    unsigned short  _cloudResourceMemoriesMaxResourcesPerFetch;
    unsigned short  _cloudResourceNonThumbnailsMaxResourcesPerFetch;
    unsigned long long  _cloudResourcePrefetchMaxFileSize;
    double  _cloudResourceSmallLibraryThresholdRatio;
    unsigned short  _cloudResourceThumbnailsMaxResourcesPerFetch;
    unsigned short  _cloudResourceWidgetMaxResourcesPerFetch;
    unsigned short  _memoryMaxPrefetchPhotosCount;
    unsigned short  _memoryMaxPrefetchVideosCount;
    long long  _memoryPrefetchAllowedIfLastViewedDateWithin;
    long long  _memoryPrefetchIfCreationDateWithin;
    unsigned short  _memoryPrefetchLimit;
}

@property (nonatomic, readonly) unsigned long long cloudResourceATVNearLowDiskThreshold;
@property (nonatomic, readonly) double cloudResourceIncrementalMinimumFreeDiskSpaceForOptimizeRatio;
@property (nonatomic, readonly) double cloudResourceInitialMinimumFreeDiskSpaceForOptimizeRatio;
@property (nonatomic, readonly) unsigned long long cloudResourceIntervalBetweenCheckCPLBGDownload;
@property (nonatomic, readonly) unsigned short cloudResourceMaxPrefetchRetry;
@property (nonatomic, readonly) unsigned long long cloudResourceMaximumSmallLibraryThreshold;
@property (nonatomic, readonly) unsigned short cloudResourceMemoriesMaxResourcesPerFetch;
@property (nonatomic, readonly) unsigned short cloudResourceNonThumbnailsMaxResourcesPerFetch;
@property (nonatomic, readonly) unsigned long long cloudResourcePrefetchMaxFileSize;
@property (nonatomic, readonly) double cloudResourceSmallLibraryThresholdRatio;
@property (nonatomic, readonly) unsigned short cloudResourceThumbnailsMaxResourcesPerFetch;
@property (nonatomic, readonly) unsigned short cloudResourceWidgetMaxResourcesPerFetch;
@property (nonatomic, readonly) unsigned short memoryMaxPrefetchPhotosCount;
@property (nonatomic, readonly) unsigned short memoryMaxPrefetchVideosCount;
@property (nonatomic, readonly) long long memoryPrefetchAllowedIfLastViewedDateWithin;
@property (nonatomic, readonly) long long memoryPrefetchIfCreationDateWithin;
@property (nonatomic, readonly) unsigned short memoryPrefetchLimit;

+ (long long)_defaultPrefetchOptimizeMode;
+ (long long)defaultPrefetchOptimizeMode;
+ (id)descriptionForPrefetchOptimizeMode:(long long)arg1;
+ (id)overridePrefetchOptimizeMode;

- (unsigned long long)cloudResourceATVNearLowDiskThreshold;
- (double)cloudResourceIncrementalMinimumFreeDiskSpaceForOptimizeRatio;
- (double)cloudResourceInitialMinimumFreeDiskSpaceForOptimizeRatio;
- (unsigned long long)cloudResourceIntervalBetweenCheckCPLBGDownload;
- (unsigned short)cloudResourceMaxPrefetchRetry;
- (unsigned long long)cloudResourceMaximumSmallLibraryThreshold;
- (unsigned short)cloudResourceMemoriesMaxResourcesPerFetch;
- (unsigned short)cloudResourceNonThumbnailsMaxResourcesPerFetch;
- (unsigned long long)cloudResourcePrefetchMaxFileSize;
- (double)cloudResourceSmallLibraryThresholdRatio;
- (unsigned short)cloudResourceThumbnailsMaxResourcesPerFetch;
- (unsigned short)cloudResourceWidgetMaxResourcesPerFetch;
- (id)initWithPrefetchDictionary:(id)arg1;
- (unsigned short)memoryMaxPrefetchPhotosCount;
- (unsigned short)memoryMaxPrefetchVideosCount;
- (long long)memoryPrefetchAllowedIfLastViewedDateWithin;
- (long long)memoryPrefetchIfCreationDateWithin;
- (unsigned short)memoryPrefetchLimit;
- (long long)prefetchOptimizeModeForTotalSizeOfOriginalResources:(long long)arg1 totalSizeOfLocallyAvailableOriginalResources:(long long)arg2 availableSpace:(long long)arg3 overrideMaximumSmallLibraryThresholdGB:(long long)arg4 nonThumbnailsBudget:(long long)arg5;
- (unsigned long long)smallLibrarySizeThresholdForTotalSizeOfLocallyAvailableOriginalResources:(long long)arg1 availableSpace:(long long)arg2 overrideMaximumThresholdGB:(long long)arg3;
- (void)updateValuesFromPrefetchDictionary:(id)arg1;

@end
