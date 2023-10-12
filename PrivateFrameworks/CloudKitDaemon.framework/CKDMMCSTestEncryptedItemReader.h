/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSTestEncryptedItemReader : NSObject <CKDMMCSItemReaderWriterProtocol> {
    CKDMMCSItem * _MMCSItem;
    CKDMMCSItemGroupContext * _MMCSRequest;
    <CKDMMCSItemReaderWriterProtocol> * _underlyingItemReader;
}

@property (nonatomic, retain) CKDMMCSItem *MMCSItem;
@property (nonatomic, retain) CKDMMCSItemGroupContext *MMCSRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) C3DownloadChunkContext *downloadChunkContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) <CKDMMCSItemReaderWriterProtocol> *underlyingItemReader;

- (void).cxx_destruct;
- (id)MMCSItem;
- (id)MMCSRequest;
- (bool)closeWithError:(id*)arg1;
- (id)getFileMetadataWithError:(id*)arg1;
- (id)initWithMMCSItem:(id)arg1 MMCSRequest:(id)arg2;
- (bool)openWithError:(id*)arg1;
- (bool)readBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesRead:(unsigned long long*)arg4 error:(id*)arg5;
- (void)setMMCSItem:(id)arg1;
- (void)setMMCSRequest:(id)arg1;
- (void)setUnderlyingItemReader:(id)arg1;
- (id)underlyingItemReader;
- (bool)writeBytesAtOffset:(unsigned long long)arg1 bytes:(char *)arg2 length:(unsigned long long)arg3 bytesWritten:(unsigned long long*)arg4 error:(id*)arg5;

@end
