/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMailboxFetchSearchResultRequest : NSObject {
    int  _bodyFormat;
    NSString * _folderID;
    NSString * _longID;
    int  _maxSize;
    NSString * _serverID;
}

@property (nonatomic) int bodyFormat;
@property (nonatomic, copy) NSString *folderID;
@property (nonatomic, copy) NSString *longID;
@property (nonatomic) int maxSize;
@property (nonatomic, copy) NSString *serverID;

- (void).cxx_destruct;
- (int)bodyFormat;
- (id)description;
- (id)folderID;
- (unsigned long long)hash;
- (id)initRequestForBodyFormat:(int)arg1 withFolderID:(id)arg2 withServerID:(id)arg3 withLongID:(id)arg4 withBodySizeLimit:(int)arg5;
- (id)initRequestForBodyFormat:(int)arg1 withLongID:(id)arg2 withBodySizeLimit:(int)arg3;
- (bool)isEqual:(id)arg1;
- (id)longID;
- (int)maxSize;
- (id)serverID;
- (void)setBodyFormat:(int)arg1;
- (void)setFolderID:(id)arg1;
- (void)setLongID:(id)arg1;
- (void)setMaxSize:(int)arg1;
- (void)setServerID:(id)arg1;

@end
