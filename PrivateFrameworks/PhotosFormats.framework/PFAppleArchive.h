/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFAppleArchive : PFAppleArchiveStream {
    struct AAArchiveStream_impl { } * _archiveStream;
}

- (bool)close:(id*)arg1;
- (void)dealloc;
- (bool)decodeContentOfDirectoryWithError:(id*)arg1;
- (bool)decodeData:(id*)arg1 filename:(id*)arg2 error:(id*)arg3;
- (bool)encodeContentOfDirectoryAtURL:(id)arg1 entryPredicate:(id /* block */)arg2 error:(id*)arg3;
- (bool)encodeData:(id)arg1 filename:(id)arg2 error:(id*)arg3;
- (bool)openForReading:(id*)arg1;
- (bool)openForWriting:(id*)arg1;

@end
