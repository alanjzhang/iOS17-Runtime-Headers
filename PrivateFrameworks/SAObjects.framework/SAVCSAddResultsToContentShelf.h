/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAVCSAddResultsToContentShelf : SAUIAddContentToView

@property (nonatomic, copy) NSString *contentShelfViewId;
@property (nonatomic, copy) NSArray *fetchMoreResultsCommands;
@property (nonatomic) long long pageNumber;
@property (nonatomic, copy) NSArray *results;

+ (id)addResultsToContentShelf;
+ (id)addResultsToContentShelfWithDictionary:(id)arg1 context:(id)arg2;

- (id)contentShelfViewId;
- (id)encodedClassName;
- (id)fetchMoreResultsCommands;
- (id)groupIdentifier;
- (long long)pageNumber;
- (bool)requiresResponse;
- (id)results;
- (void)setContentShelfViewId:(id)arg1;
- (void)setFetchMoreResultsCommands:(id)arg1;
- (void)setPageNumber:(long long)arg1;
- (void)setResults:(id)arg1;

@end
