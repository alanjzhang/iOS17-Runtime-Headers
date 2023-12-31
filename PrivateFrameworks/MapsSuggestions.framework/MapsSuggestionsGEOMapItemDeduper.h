/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
 */

@interface MapsSuggestionsGEOMapItemDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper> {
    NSString * _name;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueName;

+ (bool)isEnabled;

- (void).cxx_destruct;
- (bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;
- (id)initWithSacrificedType:(long long)arg1;
- (id)uniqueName;

@end
