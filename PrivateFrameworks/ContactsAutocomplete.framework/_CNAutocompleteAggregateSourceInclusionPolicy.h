/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface _CNAutocompleteAggregateSourceInclusionPolicy : NSObject <CNAutocompleteSourceInclusionPolicy> {
    NSArray * _policies;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool includeCalendarServers;
@property (readonly) bool includeContacts;
@property (readonly) bool includeDirectoryServers;
@property (readonly) bool includeLocalExtensions;
@property (readonly) bool includePredictions;
@property (readonly) bool includeRecents;
@property (readonly) bool includeSuggestions;
@property (readonly) bool includeSupplementalResults;
@property (readonly) NSArray *policies;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)includeCalendarServers;
- (bool)includeContacts;
- (bool)includeDirectoryServers;
- (bool)includeLocalExtensions;
- (bool)includePredictions;
- (bool)includeRecents;
- (bool)includeSuggestions;
- (bool)includeSupplementalResults;
- (id)initWithPolicies:(id)arg1;
- (id)policies;

@end
