/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPNSFileProviderItemHelper : NSObject <NSFileProviderItem> {
    unsigned long long  capabilities;
    UTType * contentType;
    NSString * filename;
    NSString * itemIdentifier;
    NSString * parentItemIdentifier;
    NSString * typeIdentifier;
}

@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly, copy) NSNumber *childItemCount;
@property (nonatomic, readonly, copy) NSDate *contentModificationDate;
@property (nonatomic, readonly) long long contentPolicy;
@property (nonatomic, readonly, copy) UTType *contentType;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *documentSize;
@property (getter=isDownloaded, nonatomic, readonly) bool downloaded;
@property (getter=isDownloading, nonatomic, readonly) bool downloading;
@property (nonatomic, readonly, copy) NSError *downloadingError;
@property (nonatomic, readonly) NSDictionary *extendedAttributes;
@property (nonatomic, readonly, copy) NSNumber *favoriteRank;
@property (nonatomic, readonly) unsigned long long fileSystemFlags;
@property (nonatomic, readonly, copy) NSString *filename;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *itemIdentifier;
@property (nonatomic, readonly) NSFileProviderItemVersion *itemVersion;
@property (nonatomic, readonly, copy) NSDate *lastUsedDate;
@property (nonatomic, readonly) NSPersonNameComponents *mostRecentEditorNameComponents;
@property (getter=isMostRecentVersionDownloaded, nonatomic, readonly) bool mostRecentVersionDownloaded;
@property (nonatomic, readonly) NSPersonNameComponents *ownerNameComponents;
@property (nonatomic, readonly, copy) NSString *parentItemIdentifier;
@property (getter=isShared, nonatomic, readonly) bool shared;
@property (getter=isSharedByCurrentUser, nonatomic, readonly) bool sharedByCurrentUser;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *symlinkTargetPath;
@property (nonatomic, readonly, copy) NSData *tagData;
@property (getter=isTrashed, nonatomic, readonly) bool trashed;
@property (nonatomic, readonly) struct NSFileProviderTypeAndCreator { unsigned int x1; unsigned int x2; } typeAndCreator;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;
@property (getter=isUploaded, nonatomic, readonly) bool uploaded;
@property (getter=isUploading, nonatomic, readonly) bool uploading;
@property (nonatomic, readonly, copy) NSError *uploadingError;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSData *versionIdentifier;

- (void).cxx_destruct;
- (unsigned long long)capabilities;
- (id)contentType;
- (id)filename;
- (id)fp_downloadingStatus;
- (bool)fp_isReadable;
- (bool)fp_isWritable;
- (id)fp_sharingCurrentUserPermissions;
- (id)fp_sharingCurrentUserRole;
- (id)itemIdentifier;
- (id)parentItemIdentifier;
- (id)typeIdentifier;

@end
