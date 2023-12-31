/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoLibraryImportValidation : NSObject {
    NSFileManager * _fm;
    PLLibraryServicesManager * _libraryServicesManager;
    PLPhotoLibraryPathManager * _pm;
}

- (void).cxx_destruct;
- (bool)checkLegacyLibraryRequiresRepairWithError:(id*)arg1;
- (bool)checkLegacyLibraryVersionStatusWithError:(id*)arg1;
- (bool)checkLibraryCPLStatusWithError:(id*)arg1;
- (bool)checkLibraryVersionStatusWithError:(id*)arg1;
- (id)initWithLibraryManager:(id)arg1;
- (bool)isLibraryValidForImportWithError:(id*)arg1;

@end
