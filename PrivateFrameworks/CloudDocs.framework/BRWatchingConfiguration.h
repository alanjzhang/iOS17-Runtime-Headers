/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRWatchingConfiguration : NSObject {
    NSDictionary * _appLibraryIDToURLMapOfSuppliedAppIDs;
    NSDictionary * _appLibraryIDToURLMapOfSuppliedURLs;
    NSMutableArray * _appLibraryIDs;
    NSString * _gatherPrefix;
    FPItemID * _trashItemID;
    NSMutableArray * _urls;
    unsigned long long  _watchTypes;
}

@property (nonatomic, readonly) NSArray *appLibraryIDs;
@property (nonatomic, readonly) NSString *gatherPrefix;
@property (nonatomic, readonly) NSArray *urls;
@property (nonatomic, readonly) unsigned long long watchTypes;

- (void).cxx_destruct;
- (id)appLibraryIDToURLMapOfSuppliedAppIDs;
- (id)appLibraryIDToURLMapOfSuppliedURLs;
- (id)appLibraryIDs;
- (id)gatherPrefix;
- (id)initWithScopes:(id)arg1 predicate:(id)arg2;
- (id)urls;
- (unsigned long long)watchTypes;

@end
