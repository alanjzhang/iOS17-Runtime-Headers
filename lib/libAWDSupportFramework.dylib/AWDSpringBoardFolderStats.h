/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDSpringBoardFolderStats : PBCodable <NSCopying> {
    struct { 
        unsigned int numberOfFoldersInDock : 1; 
        unsigned int numberOfPagesInRootFolder : 1; 
        unsigned int timestamp : 1; 
        unsigned int totalNumberOfFolders : 1; 
        unsigned int totalNumberOfIconsInDock : 1; 
    }  _has;
    unsigned long long  _numberOfFoldersInDock;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _numberOfFoldersPerPages;
    unsigned long long  _numberOfPagesInRootFolder;
    unsigned long long  _timestamp;
    unsigned long long  _totalNumberOfFolders;
    unsigned long long  _totalNumberOfIconsInDock;
}

@property (nonatomic) bool hasNumberOfFoldersInDock;
@property (nonatomic) bool hasNumberOfPagesInRootFolder;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalNumberOfFolders;
@property (nonatomic) bool hasTotalNumberOfIconsInDock;
@property (nonatomic) unsigned long long numberOfFoldersInDock;
@property (nonatomic, readonly) unsigned long long*numberOfFoldersPerPages;
@property (nonatomic, readonly) unsigned long long numberOfFoldersPerPagesCount;
@property (nonatomic) unsigned long long numberOfPagesInRootFolder;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long totalNumberOfFolders;
@property (nonatomic) unsigned long long totalNumberOfIconsInDock;

- (void)addNumberOfFoldersPerPage:(unsigned long long)arg1;
- (void)clearNumberOfFoldersPerPages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumberOfFoldersInDock;
- (bool)hasNumberOfPagesInRootFolder;
- (bool)hasTimestamp;
- (bool)hasTotalNumberOfFolders;
- (bool)hasTotalNumberOfIconsInDock;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numberOfFoldersInDock;
- (unsigned long long)numberOfFoldersPerPageAtIndex:(unsigned long long)arg1;
- (unsigned long long*)numberOfFoldersPerPages;
- (unsigned long long)numberOfFoldersPerPagesCount;
- (unsigned long long)numberOfPagesInRootFolder;
- (bool)readFrom:(id)arg1;
- (void)setHasNumberOfFoldersInDock:(bool)arg1;
- (void)setHasNumberOfPagesInRootFolder:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalNumberOfFolders:(bool)arg1;
- (void)setHasTotalNumberOfIconsInDock:(bool)arg1;
- (void)setNumberOfFoldersInDock:(unsigned long long)arg1;
- (void)setNumberOfFoldersPerPages:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setNumberOfPagesInRootFolder:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalNumberOfFolders:(unsigned long long)arg1;
- (void)setTotalNumberOfIconsInDock:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned long long)totalNumberOfFolders;
- (unsigned long long)totalNumberOfIconsInDock;
- (void)writeTo:(id)arg1;

@end
