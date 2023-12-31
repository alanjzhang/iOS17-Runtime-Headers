/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteAttachmentObject : NSManagedObject

@property (nonatomic, retain) NSString *contentID;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic, retain) NSString *mimeType;
@property (nonatomic, retain) NoteObject *note;

+ (bool)applyFileAttributesForAttachment:(id)arg1 error:(id*)arg2;
+ (id)attachmentDirectoryPathForAttachmentObjectID:(id)arg1 error:(id*)arg2;
+ (id)attachmentDirectoryURLForAttachmentObjectID:(id)arg1 error:(id*)arg2;
+ (bool)migrateAttachmentRelatedFilesInContext:(id)arg1 error:(id*)arg2;
+ (bool)migrateFileForAttachment:(id)arg1 toCurrentAttachmentPathWithError:(id*)arg2;

- (id)attachmentDataFileURLWithError:(id*)arg1;
- (id)attachmentDataWithError:(id*)arg1;
- (bool)persistAttachmentData:(id)arg1 error:(id*)arg2;
- (void)prepareForDeletion;

@end
