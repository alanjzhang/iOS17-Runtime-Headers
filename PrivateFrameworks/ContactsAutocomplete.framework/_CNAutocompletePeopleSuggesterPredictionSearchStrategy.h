/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface _CNAutocompletePeopleSuggesterPredictionSearchStrategy : NSObject <CNAutocompletePredictionSearchStrategy> {
    CNContactStore * _contactStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *descriptionForLogging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)descriptionForLogging;
- (id)initWithContactStore:(id)arg1;
- (id)searchResultsForFetchRequest:(id)arg1;

@end
