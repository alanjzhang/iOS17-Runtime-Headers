/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAllNotesContainer;
@property (readonly) Class superclass;

- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (bool)isAllNotesContainer;
- (id)predicateForNotes;
- (id)searchDomainIdentifier;

// NoteCollectionObject (CellTitleSupport)

- (id)cacheKey;
- (bool)isTitleValid:(id)arg1 error:(id*)arg2;
- (id)titleForTableViewCell;

// NoteCollectionObject (NoteVisibilityTesting)

- (id)noteVisibilityTestingForSearchingAccount;

// NoteCollectionObject (NoteVisibilityTestingImplementation)

- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (bool)supportsVisibilityTestingType:(long long)arg1;

@end
