/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MLChapterTOC : NSObject

- (unsigned int)chapterIndexAtTimeLocationInMS:(unsigned int)arg1;
- (unsigned int)chapterIndexForGroupIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)countOfChapters;
- (unsigned int)countOfGroupsForProperty:(int)arg1;
- (unsigned int)durationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)groupIndexAtTimeLocationInMS:(unsigned int)arg1 groupingProperty:(int)arg2;
- (unsigned int)groupIndexForChapterIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (bool)hasDataForProperty:(int)arg1;
- (unsigned int)timeLocationInMSOfChapterAtIndex:(unsigned int)arg1;
- (unsigned int)timeLocationInMSOfGroupAtIndex:(unsigned int)arg1 groupingProperty:(int)arg2;
- (id)titlePropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)urlPropertyOfChapterAtIndex:(unsigned int)arg1;
- (id)urlTitlePropertyOfChapterAtIndex:(unsigned int)arg1;

// MLChapterTOC (MLITChapterTOCMethods)

- (struct ChapterData { }*)chapterDataRef;

@end
