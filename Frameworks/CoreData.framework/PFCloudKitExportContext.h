/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitExportContext : NSObject {
    PFCloudKitExporterOptions * _options;
    unsigned long long  _totalBytes;
    unsigned long long  _totalRecordIDs;
    unsigned long long  _totalRecords;
    NSMutableArray * _writtenAssetURLs;
}

- (bool)checkForObjectsNeedingExportInStore:(id)arg1 andReturnCount:(unsigned long long*)arg2 withManagedObjectContext:(id)arg3 error:(id*)arg4;
- (void)dealloc;
- (id)initWithOptions:(id)arg1;
- (bool)processAnalyzedHistoryInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id*)arg3;

@end
