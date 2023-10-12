/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRecordGraph : NSObject {
    NSMutableArray * _nodes;
    NSArray * _sortedRecords;
}

+ (id)topologicallySortRecords:(id)arg1 withError:(id*)arg2;

- (void).cxx_destruct;
- (bool)addRecords:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)init;
- (id)recordsByTopologicalSortWithError:(id*)arg1;

@end
