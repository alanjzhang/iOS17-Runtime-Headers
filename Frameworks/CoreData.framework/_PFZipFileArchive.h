/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFZipFileArchive : NSObject {
    NSMutableDictionary * _cachedContents;
    NSMutableArray * _centralDirectoryEntries;
    NSDictionary * _contents;
    NSData * _data;
    long long  _desc;
    PFZipEndOfCentralDirectoryRecord * _endRecord;
    NSMutableDictionary * _entryNameToCentralDirectoryFileHeader;
    NSMutableDictionary * _entryNameToData;
    NSMutableDictionary * _entryNameToLocalFileHeader;
    NSMutableArray * _localFileHeaders;
    NSArray * _names;
    NSString * _path;
    NSDictionary * _properties;
    id  _provider;
    struct __zFlags { 
        unsigned int providerSuppliesContents : 1; 
        unsigned int providerSuppliesStreams : 1; 
        unsigned int providerSuppliesProperties : 1; 
        unsigned int noContentsCaching : 1; 
        unsigned int fileOpen : 1; 
        unsigned int reserved : 27; 
    }  _zFlags;
}

- (void)dealloc;
- (id)init;

@end
