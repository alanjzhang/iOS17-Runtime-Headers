/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFrequentLocationManager : NSObject {
    NSSet * _currentFrequentLocations;
    bool  _invalidateCurrentFrequentLocations;
    <PLMomentGenerationDataManagement> * _momentGenerationDataManager;
}

@property (nonatomic, retain) NSSet *currentFrequentLocations;
@property (nonatomic) <PLMomentGenerationDataManagement> *momentGenerationDataManager;

- (void).cxx_destruct;
- (id)_createFrequentLocationsWithAllMoments:(id)arg1;
- (id)currentFrequentLocations;
- (bool)frequentLocationsDidChangeFromUpdateWithAllMoments:(id)arg1;
- (id)initWithMomentGenerationDataManager:(id)arg1;
- (void)invalidateCurrentFrequentLocations;
- (id)momentGenerationDataManager;
- (void)setCurrentFrequentLocations:(id)arg1;
- (void)setMomentGenerationDataManager:(id)arg1;

@end
