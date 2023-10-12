/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDJournalEntry : NSObject <HDJournalChapterEntry, NSSecureCoding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *entryClassName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long size;
@property (readonly) Class superclass;

+ (void)applyEntries:(id)arg1 withProfile:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// HDJournalEntry (HDJournalChapterEntry)

- (id)deserializedEntryWithError:(id*)arg1;
- (id)entryClassName;
- (long long)size;

@end
