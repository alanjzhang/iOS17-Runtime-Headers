/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface CNAutocompleteProbeKeyBuilder : NSObject {
    NSString * _key;
    NSArray * _prefixes;
    NSArray * _suffixes;
}

@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSArray *prefixes;
@property (nonatomic, retain) NSArray *suffixes;

+ (id)builderWithKey:(id)arg1;

- (void).cxx_destruct;
- (id)addBatchIndex:(unsigned long long)arg1;
- (id)addDuetModelID;
- (id)addDuetReturnedResults:(bool)arg1;
- (id)build;
- (id)init;
- (id)initWithKey:(id)arg1;
- (id)key;
- (id)prediction;
- (id)prefixedSearch;
- (id)prefixes;
- (void)setKey:(id)arg1;
- (void)setPrefixes:(id)arg1;
- (void)setSuffixes:(id)arg1;
- (id)suffixes;
- (void)useString:(id)arg1 forSuffixAtIndex:(unsigned long long)arg2;

@end
