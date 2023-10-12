/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPPodcastCollection : SAMPCollection

@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSArray *preferredPlayOrder;
@property (nonatomic, copy) NSString *sortArtist;
@property (nonatomic, copy) NSNumber *subscribed;

+ (id)podcastCollection;
+ (id)podcastCollectionWithDictionary:(id)arg1 context:(id)arg2;

- (id)artist;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)preferredPlayOrder;
- (void)setArtist:(id)arg1;
- (void)setPreferredPlayOrder:(id)arg1;
- (void)setSortArtist:(id)arg1;
- (void)setSubscribed:(id)arg1;
- (id)sortArtist;
- (id)subscribed;

@end
