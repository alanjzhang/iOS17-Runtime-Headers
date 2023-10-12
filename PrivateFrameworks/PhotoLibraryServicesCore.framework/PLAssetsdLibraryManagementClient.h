/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServicesCore.framework/PhotoLibraryServicesCore
 */

@interface PLAssetsdLibraryManagementClient : PLAssetsdBaseClient

- (id)activePhotoLibraries:(id*)arg1;
- (bool)closeAndDeletePhotoLibraryAtURL:(id)arg1 error:(id*)arg2;
- (bool)closePhotoLibraryAtURL:(id)arg1 error:(id*)arg2;
- (void)filesystemSizeForLibraryURL:(id)arg1 result:(id /* block */)arg2;
- (void)getPhotoLibraryURLsWithLibraryURL:(id)arg1 reply:(id /* block */)arg2;
- (bool)getPhotosXPCEndpoint:(id*)arg1 error:(id*)arg2;
- (bool)overrideSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2;
- (bool)removePhotoLibraryURL:(id)arg1 error:(id*)arg2;
- (bool)resetSyndicationLibrary:(id*)arg1;
- (bool)setSystemPhotoLibraryURL:(id)arg1 error:(id*)arg2;

@end
