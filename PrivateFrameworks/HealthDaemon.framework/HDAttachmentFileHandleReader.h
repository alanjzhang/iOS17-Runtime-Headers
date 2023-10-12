/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAttachmentFileHandleReader : NSObject <HDAttachmentReader> {
    NSFileHandle * _fileHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)close;
- (id)initAdoptingFileHandle:(id)arg1;
- (id)readDataUpToLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 error:(id*)arg3;

@end
