/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/QuickLookSupport.framework/QuickLookSupport
 */

@interface QLZipArchive : NSObject {
    struct archive { } * _archive;
    NSData * _data;
    NSFileWrapper * _fileWrapper;
    NSURL * _url;
}

- (void).cxx_destruct;
- (bool)_reopenWithError:(id*)arg1;
- (void)dealloc;
- (void)enumerateEntriesWithHandler:(id /* block */)arg1;
- (id)fileWrapper;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (id)libarchiveError;
- (id)readCurrentDataWithEntry:(struct archive_entry { }*)arg1 error:(id*)arg2;

@end
